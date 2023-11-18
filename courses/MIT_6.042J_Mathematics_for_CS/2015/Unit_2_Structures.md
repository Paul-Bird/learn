# Mathematics for Computer Science
## MIT 6.042J Spring 2015
### Unit 2: Structures

#### Readings
[Unit 2-12](https://ocw.mit.edu/courses/6-042j-mathematics-for-computer-science-spring-2015/resources/mit6_042js15_session12/)  

#### 2.1.1 GCDs & Linear Combinations

Divisibility:  

c divides a  $(c|b) \text{ iff } a = k \cdot c \text{ for some } k$  

$c|a \implies c|(sa)$  
if $c|a$ and $c|b$ then $c|(a+b)$
if $c|a$ and $c|b$ then $c|(sa+tb)$ integer linear combination of a and b.  

gcd(a,b) ::= the greatest common divisor of a and b.
gcd(24,16) = 8 
gcd(13,12) = 1

#### 2.1.2 Euclidean Algorithm

