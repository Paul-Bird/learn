# Mathematics for Computer Science
## MIT 6.042J - Fall 2010
### Lecture 2: Induction 

[Reading 3](https://ocw.mit.edu/courses/6-042j-mathematics-for-computer-science-fall-2010/resources/mit6_042jf10_chap03/)  

#### Proof by Contradiction

To prove P is true, first assume P is false, take logical steps until you reach a contradiction. Therefore showing P is not false.

> Example: Prove $ \sqrt{2} $ is irrational by contradiction.  
> Assume for purpose of contradiction that $ \sqrt{2} $ is rational  
> - $ \sqrt{2} = \frac{a}{b} \text{ where a and b have no common divisors} $   
> - take square of both sides: $ 2 = (\frac{a^2}{b^2}) $  
> - multiple both sides by $ b^2 $  
> - $ 2b^2 = a^2 $  
> - this implies $ a $ is divisible by 2  
> - $ 4 | a^2 \implies 4 | 2b^2 \implies  2 | b^2 \ \implies b \text{ is even} $  
> - contradicting no common divisors  
> - $ \sqrt{2} $ is not rational  

#### Proof by Induction

Induction axiom

Let p(n) be a predicate. If p(0) is true and P



Example sum of natural numbers:  

> $ \forall n \geq 0 \quad  \displaystyle\sum_{i=1}^n i = \frac{n(n+1)}{2} $  
> $ n = 4 \quad 1+2+3+4 = 10 \:  = \frac{4(5)}{2} $ 
>  
> Proof by Induction  
> let $ P(n) $ be the proposition that $ \displaystyle\sum_{i=1}^n i = \frac{n(n+1)}{2} $  
> Check basecase: $ P(0) $ is true  
> $$ \displaystyle\sum_{i=1}^0 i = 0 = \frac{0(0+1)}{2} $$  
> Inductive step: $ n \geq 0 \text{ show } P(n) \implies p(n+1) \text{ is true } $  
> Assume $ P(n) \text{ is true } $ for purpose of induction  
> Need to show that:  
> $$ \displaystyle\sum_{i=1}^{n+1} i = \frac{(n+1)(n+2)}{2} \text{ is true } $$  
> using the proposition we rewrite the sum from 1 to n:
> $$ \frac{n(n+1)}{2} + (n+1) = \frac{n(n+1) + 2n + 2}{2} = \frac{n^2 + 3n + 2}{2} =  \frac{(n+1)(n+2)}{2} \: \checkmark $$
>

Theorem: $ 3 | (n^3 - n) $  

> Example:  
> $$ 3 | (2^3 - 2) \quad  3 | 6 $$  
> Proof by Induction:  
> $$ \text{Let } P(n)  3|(n^3-n) $$  
> Basecase:  
> $$ 3 | (0^3 - 0) =   3 | 0 \quad \checkmark $$  
> Inductive step:  
> $$ \text{For } n \geq 0, \text{ show } P(n) \implies P(n+1) \quad \text { is true } $$  
> Need to show:  
> $$ 3|(n+1)^3-(n+1) \quad \text{ is true} $$  
> $$ (n+1)^3-(n+1) = (n+1)(n+1)(n+1) - (n+1) = $$
> $$ n^3+3n^2+3n+1-(n+1) = n^3+3n^2+2n $$
> rewrite as $ n^3-n+3n^2+3n $ to make use of assumtion $ 3|(n^3-n) $ is true  
> Can now see that $ 3|(n^3-n) $ and $ 3|3n^2+3n $  

Not neccessary to start at 0

Basecase: $ \qquad P(b) $ is true  
Inductive Step: $ \forall n \geq b \quad P(n) \implies P(n+1) $  
Conclude: $ \qquad \forall n \geq b \quad P(n)$  
  

> Courtyard $ 2^n by 2^n $ using L shaped tiles   
> Theorem: $ \: \forall n, \exists $ a way to tile a $ 2^n \text{ by } 2^n $ region with one corner left over.  
>  
> Proof by induction:
>  
> Predicate: $ \: P(n) \text{ tile  a } 2^n \text{ by } 2^n $ region with one corner left over.
>  
> Basecase: $ P(0) = 1 $ square / no tiles $ \checkmark $  
> Inductive Step: for $ n \geq 0 $ assume $ P(n) $  
> We need to show $ P(n+1) is true $  
>  
> Consider a $ 2^{n+1} \text{ by } 2^{n+1} $  
> divide the $ 2^{n+1} \text{ square } $ into 4 $  
> then you have $ \text{ four } 2^{n} \text{ squares }$  
>  
>  In this example easier to make $ P(n) $ stronger to prove left over square can be anywhere  







