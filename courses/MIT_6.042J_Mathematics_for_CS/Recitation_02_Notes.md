# Mathematics for Computer Science
## MIT 6.042J - Fall 2010
### Recitation 2 Notes

#### Induction

[Source PDF](https://ocw.mit.edu/courses/6-042j-mathematics-for-computer-science-fall-2010/d428ae6b0f85ba4c6520e0830e5f3964_MIT6_042JF10_rec02_sol.pdf)  
  
Recall the principle of induction:
  
> Let $ P(n) be a predicate. If  
> - $ P(0) $ is true, and  
> - $ \forall n \in \mathbb{N}, P(n) \implies P(n+1) $  
>  
> then $ P(n) $ is true for $ \forall n \in \mathbb{N} $  

> Conjecture. $ \forall n \in \mathbb{N^+} $ :
> $$ 1 \cdot 2 + 2 \cdot 3 + ... + n \cdot (n + 1) = \frac{n(n+1)(n+2)}{3} $$  
>  
> Proof by induction  
> Proposition  
> $$ 1 \cdot 2 + 2 \cdot 3 + ... + n \cdot (n + 1) = \frac{n(n+1)(n+2)}{3} $$  
> Basecase: $ n=1 $  
> $$ 1 \cdot 2 = \frac{1(2)(3)}{3} \quad \checkmark $$
>  
> Inductive Step: show that $ P(n) \implies P(n+1) $   
> Assume P(n) is true:  
> $$ 1 \cdot 2 + 2 \cdot 3 + ... + n \cdot (n+1) + (n+1) \cdot (n+2) =  $$
> $$ [1 \cdot 2 + 2 \cdot 3 + ... + n \cdot (n+1)] + (n+1) \cdot (n+2) $$
> $$ \frac{n(n+1)(n+2)}{3} + (n+1) \cdot (n+2)  = $$  
> $$ \frac{n(n+1)(n+2) + 3(n+1)\cdot(n+2)}{3} = $$  
> $$ \frac{(n+1)(n+2)(n+3)}{3} \quad $$  

#### A Geometric Sum

> $$ 1 + r + r^2 + ... + r^n = \frac{1-r^{n+1}}{1-r} $$  
