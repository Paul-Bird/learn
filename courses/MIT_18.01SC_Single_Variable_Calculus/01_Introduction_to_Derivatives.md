# Single Variable Calculus
#### 18.01SC Fall 2010
## Session 1: Introduction to Derivatives

[Session 1 Page](https://ocw.mit.edu/courses/18-01sc-single-variable-calculus-fall-2010/pages/1.-differentiation/part-a-definition-and-basic-rules/session-1-introduction-to-derivatives/)

### Unit 1 Differentiation

What is a derivative?  

#### Geometric Interpretation  

[Notes](https://ocw.mit.edu/courses/18-01sc-single-variable-calculus-fall-2010/acf917af6fb88659fe64f36e2b7c5d57_MIT18_01SCF10_Ses1b.pdf)

The derivative of $ f(x) $ at $ x = x_0 $ is the slope of the tangent line to the graph of $ f(x) $ at the point $ (x0, f(x_0)) $.  

$ y=f(x) $ at $ P=(x_0, y_0) $  

$ y-y_0 = m(x-x_0) $

point $ y_0 = f(x_0) $  
slope $ m = f'(x_0) $  

Definition: $ f'(x_0) $ is the derivative of $ f(x_0) $, it is the slope of the line tangent to $ y = f(x_0) $  

The tangent line is the limit of secant line $ PQ $ as $ Q \rightarrow P $ ( $ P $ fixed ).

$ P=(x_0, y_0) \quad Q=(x_0 + \Delta x, y_0 + \Delta f) $  
$ P=(x_0, f(x_0)) \quad Q=(x_0 + \Delta x, f(x_0 + \Delta x)) $  
$$ m = \lim_{\Delta x \to 0} \frac{\Delta f}{\Delta x} $$
$$ \boxed{f'(x_0) = \lim_{\Delta x \to 0} \frac{f(x_0 + \Delta x)-f(x_0)}{\Delta x}} $$  

> Example 1  
> $$ f(x) = \frac{1}{x} $$  
>$$ \frac{\Delta f}{\Delta x} = \lim_{\Delta x \to 0} \frac{\frac{1}{x_0 + \Delta x}-\frac{1}{x_0}}{\Delta x} = $$
> simplify: 
> $$ \frac{1}{\Delta x} \left( \frac{x_0-(x_0 + \Delta x)}{(x_0 + \Delta x)x_0} \right) = $$  
> $$ \frac{1}{\Delta x} \left( \frac{- \Delta x}{(x_0 + \Delta x)x_0} \right) = $$
> $$ \frac{-1}{(x_0 + \Delta x)x_0} \lim_{\Delta x \to 0} = $$
> $$ \frac{-1}{(x_0)^2} $$
  
#### Physical interpretation  


#### Importantance to all measurements
  
