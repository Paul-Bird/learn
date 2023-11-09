# Mathematics for Computer Science
## MIT 6.042J - Fall 2010
### Problem Set 1
  
[PDF](https://ocw.mit.edu/courses/6-042j-mathematics-for-computer-science-fall-2010/52e4d5a499a39c41c129e1eb4e831e20_MIT6_042JF10_assn01.pdf)
---
#### Problem 1

Translate the following sentences from English to predicate logic. The domain that you are working over is $ X $, the set of people. You may use the functions $ S(x) $, meaning that “x has been a student of 6.042,” $ A(x) $, meaning that “x has gotten an ‘A’ in 6.042,” $ T(x) $ , meaning that “x is a TA of 6.042,” and $ E(x, y) $, meaning that “x and y are the same person.  

(a) [6 pts] There are people who have taken 6.042 and have gotten A’s in 6.042  
$$ \exists x \in X : S(x) \land A(x) $$  

(b) [6 pts] All people who are 6.042 TA’s and have taken 6.042 got A’s in 6.042  
$$ \forall x \in X : S(x) \land T(x) \implies S(x) \land A(x) $$ 

(c) [6 pts] There are no people who are 6.042 TA’s who did not get A’s in 6.042.  
$$ \lnot \exists x \in X : T(x) \land \lnot A(x) $$  

(d) [6 pts] There are at least two people who are TA’s in 6.042 and have not taken 6.042

$$ \exists x,y \in X : T(x) \land T(y) \land \lnot S(x) \land \lnot S(y)  \land (\lnot E(x,y)) $$  
---
#### Problem 2

Use a truth table to prove or disprove the following statements:

$$ \lnot (P \lor ( Q \land R)) = (\lnot P) \land (\lnot Q \lor \lnot R) $$

|P|Q|R|$ \lnot (P \lor ( Q \land R)) $|$ (\lnot P) \land (\lnot Q \lor \lnot R)$|
|-|-|-|:-:|:-:|
|T|T|T|F|F|
|T|T|F|F|F|
|T|F|T|F|F|
|T|F|F|F|F|
|F|T|T|F|F|
|F|F|T|T|T|
|F|T|F|T|T|
|F|F|F|T|T|




---
#### Problem 3


---
#### Problem 4

---
#### Problem 5

---
#### Problem 6