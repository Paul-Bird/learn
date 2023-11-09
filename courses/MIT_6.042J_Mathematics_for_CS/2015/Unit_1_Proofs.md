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
- $ 0x^2 + 0x + 1 \quad $ Horizontal line has 0 roots
- $ 0x^2 + 1x + 1 \quad $ 45% line has 1 root  
Cannot use quadratic formula when $ a = 0 $  

- $ 1x^2 + 0x + 0 \quad $ Has 1 root

Ambiguity can cause problems:

$$ 1 = \sqrt{1} = \sqrt{(-1)(-1)} = \sqrt{-1} \sqrt{-1} = (\sqrt{-1})^2 = -1 $$  

