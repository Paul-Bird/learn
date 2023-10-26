#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool ok_postcode(char* postcode);
void remove_spaces(char *string);

int main(void){
  char test1[] = "CM235NA";
  char test2[] = "WC1A 4TT ";
  char test3[] = "M1 1AE";
  char test4[] = "WC1A888";
  char test5[] = "WC1A *TT";
  printf("%s %s \n", test1, ok_postcode(test1) ? "true" : "false");
  printf("%s %s \n", test2, ok_postcode(test2) ? "true" : "false");
  printf("%s %s \n", test3, ok_postcode(test3) ? "true" : "false");
  printf("%s %s \n", test4, ok_postcode(test4) ? "true" : "false");
  printf("%s %s \n", test5, ok_postcode(test5) ? "true" : "false");
}

bool ok_postcode(char* postcode) {
  remove_spaces(postcode);
  //AA9A9AA   1101011  107 
  //A9A9AA     101011   43
  //A99AA       10011   19
  //A999AA     100011   35
  //AA99AA     110011   51
  //AA999AA   1100011   99
  int score = 0;
  int position = 0;
  for (int i=strlen(postcode)-1;i>=0;i--) {
    if (isalpha(postcode[i])) score += pow(2,position);
    else if (isdigit(postcode[i])) score += 0;
    else return false;
    position++;
  }
  if (
    score == 107 ||
    score == 43 || 
    score == 19 || 
    score == 35 ||
    score == 51 || 
    score == 99
    ) {
    return true;
  }
  return false;
}

void remove_spaces(char *string){
  int len = strlen(string);
  for(int i=0;i<len;i++){
    if (string[i] == ' ') {
      int spaces=1;
      //count continuous spaces
      for(int j=i+1;j<len;j++){
        if (string[j] == ' ') spaces+=1;
        else break;
      }
      len = len - spaces;
      //remove
      for(int j=i;j<len+1;j++){
        string[j] = string[j+spaces];
      }
    }
  }
}