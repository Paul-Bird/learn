# Single Variable Calculus
#### 18.01SC Fall 2010
## Session 3: Derivative as Rate of Change

[Session 3 Page](https://ocw.mit.edu/courses/18-01sc-single-variable-calculus-fall-2010/pages/1.-differentiation/part-a-definition-and-basic-rules/session-3-derivative-as-rate-of-change/)
 
[L2](https://www.youtube.com/watch?v=ryLdyDrBfvI&list=PL590CCC2BC5AF3BC1&index=2)  

[Problem set - session 3](https://ocw.mit.edu/courses/18-01sc-single-variable-calculus-fall-2010/resources/mit18_01scf10_ex03prb/)  

### Rate of Change

$\frac{\Delta y}{\Delta x}$ average rate of change.  

$\frac{dy}{dx}$ instantaneous rate of change. 

Examples:

1. $q$ = charge $t$ = time:  
$\frac{dq}{dt} = $ current  

2. $s$ = distance $t$ = time:  
$\frac{ds}{dt} = $ speed  

Example drop from 80m with acceleration of $5t^2s$  
Start: $h=80, t=0 \quad$ End: $h=0, t=4$  
Average speed = $\frac{\Delta h}{\Delta t} = \frac{0-80}{4-0} = 20 m/s$  
Instantaneous speed $\frac{d}{dt}h = 0-10t $  
$\frac{d}{dt}t^2 = 2t$  
At $t=1, h' = -10 m/s$  
At $t=2, h' = -20 m/s$  
At $t=3, h' = -30 m/s$  
At ground level $t=4, h' = -40 m/s$   

3. $T$ = temperature:  
$\frac{dT}{dx} = $ temparature gradient  

4. Sensitivity of measurements  

Example GPS, some uncertainty / error in the distance calculated: $\Delta h$  

### Limits and Continuity

Easy limit, just plug in:

$\displaystyle{\lim_{x\to 4}} \quad \frac{x+3}{x^2+1} = \frac{4+3}{4^2+1} = \frac{7}{17}$  

Derivative:

$\displaystyle{\lim_{x\to x_0}} \quad \frac{f(x_0 + \Delta x)-f(x_0)}{x-x_0}$  
Can't just plug in $x=0$, need cancelation.  

Left-hand / Right-hand Limits:  
$\displaystyle{\lim_{x\to x_0^-}} \quad \displaystyle{\lim_{x\to x_0^+}}$

$$
f(x) =\begin{cases} 
x+1, \: x > 0 \\
x+2, \: x \leq 0
\end{cases}
$$











  
