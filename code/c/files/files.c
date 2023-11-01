#include <stdio.h>
#include <unistd.h>
#include "fcntl.h"

void print_char_or_byte_code(char c){
  if (c >= 32 && c<=126){
    printf("%c\n", c);
  } else {
    printf("0x%02hhX\n",c);
  }
}

int main(int argc, char* argv[]){
  int fd = open("file.txt",O_RDONLY);
  char buffer[10];
  ssize_t bytes_read = read(fd,buffer, sizeof(buffer));
  for (int i=0;i<bytes_read;i++){
    print_char_or_byte_code(buffer[i]);
  }
}
