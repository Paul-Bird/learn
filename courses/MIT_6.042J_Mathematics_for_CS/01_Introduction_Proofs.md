# Mathematics for Computer Science
## MIT 6.042J - Fall 2010
### Lecture 1: Introduction and Proofs

[Reading 1](https://ocw.mit.edu/courses/6-042j-mathematics-for-computer-science-fall-2010/7853d585044ef21bce5f48ce5fc89d28_MIT6_042JF10_chap01.pdf)  

[Reading 2](https://ocw.mit.edu/courses/6-042j-mathematics-for-computer-science-fall-2010/resources/mit6_042jf10_chap02/)  

A mathematical proof is a verification of a proposition by a chain of logical deductions from a a set of axioms.

A proposition is a statement that is either true or false.

> Example proposition  
> $ \forall n \in \mathbb{N}, n^2 + n + 41 \quad $ is a prime number 

A predicate is a propsition whose truth depends on the value of a variable.  

> Example proposition  
> $ a^4 + b^4 + c^4 = d^4 $ has no positive integer solutions  
> $ \exists \: a,b,c,d \in \mathbb{N}^+, \: a^4 + b^4 + c^4 = d^4 $  

> Four colour theorum.  
> The regions in any map can be coloured in 4 colours so that no adjacent regions have the same colour.  

> Goldbachs conjecture  
> Every even natural number greater than 2 is the sum of two prime numbers.  

$ \forall n \in \mathbb{Z}, \: n \geq 2 \implies n^2 \geq 4 $

An implication $ p \implies q \: $ is true if $ p $ is false or $ q $ is true.

> $ \forall n \in \mathbb{Z}, \: n \geq 2 \iff n^2 \geq 4 $  
> $ \iff $ means implication both ways  

| p | q | $ p \implies q $ | $ q \implies p $ | $ q \iff p $ |
| - | - | :-: | :-: | :-: |
| T | T | T | T | T |
| T | F | F | T | F |
| F | T | T | F | F |
| F | F | T | T | T |

An Axiom is a proposition that is assumed to be true.

> If a = b and b = c then a = c  

Axioms should be consistent and complete.

A set of axioms is consistent if no proposition can be proved true and false.  

A set of axioms is complete if it can be used to prove if every proposition is either true or false.
