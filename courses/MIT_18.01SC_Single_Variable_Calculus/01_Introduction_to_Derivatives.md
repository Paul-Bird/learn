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

$P=(x_0, y_0) \quad Q=(x_0 + \Delta x, y_0 + \Delta f)$  
$P=(x_0, f(x_0)) \quad Q=(x_0 + \Delta x, f(x_0 + \Delta x))$  
$$m = \lim_{\Delta x \to 0} \frac{\Delta f}{\Delta x} $$
$$\boxed{f'(x_0) = \lim_{\Delta x \to 0} \frac{f(x_0 + \Delta x)-f(x_0)}{\Delta x}}$$  

> Example 1  
> $$f(x) = \frac{1}{x}$$  
>$$\frac{\Delta f}{\Delta x} = \lim_{\Delta x \to 0} \frac{\frac{1}{x_0 + \Delta x}-\frac{1}{x_0}}{\Delta x} = $$
> simplify: 
> $$\frac{1}{\Delta x} \left( \frac{x_0-(x_0 + \Delta x)}{(x_0 + \Delta x)x_0} \right) =$$  
> $$\frac{1}{\Delta x} \left( \frac{- \Delta x}{(x_0 + \Delta x)x_0} \right) = $$
> $$\frac{-1}{(x_0 + \Delta x)x_0} \lim_{\Delta x \to 0} =$$
> $$\frac{-1}{(x_0)^2}$$
  
##### Example Work Problem:  

Find the area of a triangle enclosed by the axes and the tangent to $y = \frac{1}{x}$  

Tangent = $y-y_0 = \frac{-1}{x^2}(x-x_0)$  

Find the x-intercept when $y=0$  
>$0-\frac{-1}{x_0} = \frac{-1}{x^2}(x-x_0) = \frac{-x}{x^2} + \frac{1}{x_0}$  
>$\frac{x}{x^2} = \frac{2}{x_0}$  

$\boxed{x=2x_0}$  

Shortcut to get the y-intercept:  
>use symmetry: $\quad y=\frac{1}{x} \implies xy \implies x=\frac{1}{y}$  

$\boxed{y=2y_0}$  

The area of the triangle = $\boxed{\frac{1}{2}(2x_0)(2y_0)=2(x_0)(y_0)}$  

#### Derivative Notation
$$y=f(x), \Delta y=\Delta f$$
$$f'=\frac{df}{dx} \quad f'=\frac{dy}{dx} \quad  f'=\frac{d}{dx}f  \quad f'=\frac{d}{dx}y$$

#### Example 2

$$f(x)=x^n, n=1,2,3$$
$$\frac{d}{dx}x^n=$$
$$\frac{\Delta f}{\Delta x}=\frac{(x+\Delta x)^n-x^n}{\Delta x}$$  

Binomial Theorum

[46:05](https://youtu.be/7K1sB05pE0A?t=2768)

Power Rule: $\quad \boxed{\frac{d}{dx}x^n=nx^{n-1}}$

Example: $\quad \frac{d}{dx}(x^3+5x^{10})=3x^2+50x^9$  

#### Physical interpretation  


#### Importantance to all measurements
  
