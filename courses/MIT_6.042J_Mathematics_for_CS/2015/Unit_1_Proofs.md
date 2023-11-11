# Mathematics for Computer Science
## MIT 6.042J Spring 2015
### Unit 1: Proofs

#### Readings
[Unit 1-1](https://ocw.mit.edu/courses/6-042j-mathematics-for-computer-science-spring-2015/resources/mit6_042js15_session1/)  
[Unit 1-2](https://ocw.mit.edu/courses/6-042j-mathematics-for-computer-science-spring-2015/resources/mit6_042js15_session2/)  

#### 1.1.2 Intro to Proofs: Part 1

Example: Visual proof of Pythagoras, proof by conservation of area.  
Be thoughtful of hidden assumptions.  

#### 1.1.3 Intro to Proofs: Part 2

Bogus proof:

Theorum: Every polynomial, $ ax^2 + bx + c $ has two roots over $ \mathbb{C} $

Proof by calculation, use the two values from the quadratic formula:

$$ r_1 = \frac{-b+\sqrt{b^2-4ac}}{2a} \quad r_1 = \frac{-b-\sqrt{b^2-4ac}}{2a} $$ 

Counter-examples:
- $0x^2 + 0x + 1 \quad$ Horizontal line has 0 roots
- $0x^2 + 1x + 1 \quad$ 45% line has 1 root  
Cannot use quadratic formula when $ a = 0 $  

- $1x^2 + 0x + 0 \quad$ Has 1 root

Ambiguity can cause problems:

$$ 1 = \sqrt{1} = \sqrt{(-1)(-1)} = \sqrt{-1} \sqrt{-1} = (\sqrt{-1})^2 = -1 $$  

#### 1.2.1 Proof by Contradiction

> Example:
> Is $\sqrt[3]{1332} \leq 11$  
> Easier than calculating the $\sqrt[3]{}$,  
> cube both sides, calculate $11^3 $ to show$ 1332 \leq 1331$ is false.  

If an assertion implies something is false, then the assertion itself must be false.  

> Example:
> $\sqrt{2}$ is irrational  
> Assume the $ \sqrt{2} $ is rational, it can be represeted as $\frac{a}{b}$  
> ($a, b$ integers without common prime factors)  
> $\sqrt{2} = \frac{a}{b} \quad$  square both sides  
> $2 = (\frac{a}{b})^2$  
> $\frac{a^2}{b^2} = 2 \quad $  multiple both sides by $ b^2$  
> $a^2 = 2b^2 \quad a \:$ must be even  
> $a = 2k \quad$ for any $k$ as $a$ is even, square both sides 
> $a^2 = 4k^2 \quad$ subsituting $a^2$ from above  
> $2b^2 = 4k^2 \quad$ divide both sides by 2  
> $b^2 = 2k^2 \quad$  
> $a,b$ are even, this contradicts no common factor  
> $\sqrt{2}$ cannot be rational $\quad \square$
>  
> Proof uses fact that if $a^2$ is even, then $a$ is even.  
>  

#### 1.2.3 Proof by Cases

```if((x>0) || (x<=0 && y>100))```  
```if((x>0) || (y>100))```  are equivelent  

Case 1: ```x>0```  
- first expression true, true || anything is true  

Case 2: ```x<=0```  
- first expression false
- second expression ```x<=0``` always true if ```x>0``` false
  
Problem with Proof by Cases, how many cases are sufficient ?  
  
#### 1.3.1 Well Ordering Principle 1

> Every nonempty set of nonnegative integers has a least element.  

Why can every rational fraction be expressed in lowest terms  

> If they are not in lowest terms then they have a common factor.  
> $\frac{a}{b} = \frac{a/c}{b/c}$  

#### 1.3.3 Well Ordering Principle 2

> Theroum: Every integer > 1 is a product of primes  
> Proof by contradiction. Suppose {nonproducts} is nonempty.  
> by Well Ordering Principle there is a least m > 1 that is nonproduct. 
> This means m is not prime, and must be a product of two integers $j,k$:
> $\forall m > 1, \: m > j,k > 1 \quad j,k < m$  
> so $j,k$ must be prime products as they are less than the least nonproduct.
> $j = p_1 \cdot p_2 \cdot ... \cdot p_n$  
> $k = q_1 \cdot q_2 \cdot ... \cdot q_n$  
> $m = j \cdot k \quad$ is a prime product, contradiction  
> not possible to have a counter example $\square$  

> Theroum: Every postage $\geq m + 8¢$ is achievable (postal) with $3¢ \text{ or } 5¢$  
> Suppose not true and therefore exists a least counterexample: $m$  
> If $m=0$ this is postal $3¢ + 5¢$  
> If $m=1$ this is postal $3¢ + 3¢ + 3¢$  
> If $m=2$ this is postal $5¢ + 5¢$  
> If $m \geq 3 \:$ we can simple add multiples of $3¢ \:$ to one of $m=1, m=2 \text{ or } m=3$  
> There is no $m \text{ where } m + 8¢$ cannot be made with $3¢ \text{ or } 5¢$  
  
#### 1.3.5 Well Ordering Principle 3

> Theroum: $1 + r + r^2 + ... + r^n = \frac{r^{n+1}-1}{r-1} \quad n \neq 1$  
> Proof by Well Ordering Principle and contradiction.  
> Let m be smallest $n \neq \frac{r^{n+1}-1}{r-1} \quad n \neq 1$  
> Equality holds when $n = 0 \quad 1 = \frac{r^{0+1}-1}{r-1} =  \frac{r^1-1}{r-1} = \frac{r-1}{r-1}$   

2:07


