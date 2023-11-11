# Mathematics for Computer Science
## MIT 6.042J - Fall 2010
### Lecture 4: Number Theory I

#### Number Theory - Study of the Integers

[Reading 4](https://ocw.mit.edu/courses/6-042j-mathematics-for-computer-science-fall-2010/a608e339ab265c79de46c7c3830a49cb_MIT6_042JF10_chap04.pdf)  

##### Divisibility

- $if \: a|b, \text{ then } a|bc \: \forall \: c$
- $if \: a|b \text{ and } b|c, \text{ then } a|c$
- $if \: a|b \text{ and } a|c, \text{ then } a|sb+tc, \: \forall s,t$
- $\forall c \neq 0, a|b \iff ca|cb$

$$n = q \cdot d + r \land 0 \leq r < d$$



---
  
  
> $m|a$ (m divides a)  
> Iff $\exists k \quad a=k \cdot m$  
> $m|0$ special case as $ a=k \cdot 0$ for $\forall k \quad a=0$  

Suppose jug $a=3 $ and jug $ b=5$  

Theorum: $m|a$ and $m|b$, then $m|any$ result  

State Machine: 
- (x,y) where x = amount in a jug
- (x,y) where x = amount in b jug

Start state: (0,0)

Transitions:
- $\text{empty a } (x,y) \rightarrow (0,y)$
- $\text{empty b } (x,y) \rightarrow (x,0)$
- $\text{fill a } (x,y) \rightarrow (a,y)$
- $\text{fill b } (x,y) \rightarrow (x,b)$
- $\text{pour a to b } (x,y) \rightarrow (0,x+y) , \quad \quad if \: x+y \leq b$
- $\text{pour a to b } (x,y) \rightarrow (x+y-b,b) , \quad if \: x+y > b$
- $\text{pour b to a } (x,y) \rightarrow (x+y,0) , \quad \quad if \: x+y \leq a$
- $\text{pour b to a } (x,y) \rightarrow (a,x+y-a) , \quad if \: x+y > a$

Example solution to get b=4 from a=3, b=5
- $(0,0) \text{ fill a } \rightarrow (3,0)$
- $(3,0) \text{ pour a to b } \rightarrow (0,3)$
- $(3,3) \text{ fill a } \rightarrow (3,3)$
- $(1,5) \text{ pour a to b } \rightarrow (1,5)$
- $(1,0) \text{ empty b } \rightarrow (1,0)$
- $(1,0) \text{ pour a to b } \rightarrow (0,1)$
- $(0,1) \text{ fill a } \rightarrow (3,1)$
- $(3,1) \text{ pour a to b } \rightarrow (0,4)$

Possible results from transitions $ { 0, a, b, x, y, x+y, x+y-b, x+y-a} $

> Example: $ a=33 y=55 $  make 4 gallons  
> Cannot be done as both $ a|11 \quad b|11 $  

#### $ gcd(a,b) $  is the greatest common divisor of a and b
- $gcd(3,5) = 1$
- $gcd(52,44) = 4$

a and b are said to be relativly prime, if $gcd(a,b) = 1$  

Theroum: Any linear combination $l = s \cdot a + t \cdot b$, of $a$ and $b$ with $0 \leq l \leq b \land b > a$ can be reached.

> $l = s \cdot a + t \cdot b \quad = (s+mb)a + (t+ma)b$ adding $mab$ to both sides  
> can choose m $\exists s',t' l = s'a+t'b with s'>0$   
> Assume $0 < l < b$ no need to consider trivial cases where $l=b$ or $l=0$  
> To obtain $l$ repeat s' times  
> - fill a  
> - pour into b, when b is full empty it, continue to pour a into b  
  
  to 59:00
  
