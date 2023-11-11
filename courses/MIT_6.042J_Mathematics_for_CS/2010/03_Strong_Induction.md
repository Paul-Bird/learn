# Mathematics for Computer Science
## MIT 6.042J - Fall 2010
### Lecture 3: Strong Induction 

#### Good Proofs

- Correct
- Complete
- Clear
- Concise
- Elegant
- Well organised
- In order 

Learning to write good proofs assists in skill needed to prove software code.  

> Find a sequence of moves to go from configuration:
> <table>
> <tr><td>A</td><td>B</td><td>C</td></tr>
> <tr><td>D</td><td>E</td><td>F</td></tr>
> <tr><td>H</td><td>G</td><td> </td></tr>
> </table>
> to:  
> <table>
> <tr><td>A</td><td>B</td><td>C</td></tr>
> <tr><td>D</td><td>E</td><td>F</td></tr>
> <tr><td>G</td><td>H</td><td> </td></tr>
> </table>
> where a legal move is sliding a letter to an adjacent empty square  
> Theorum: There is no sequence of legal moves to invert G & H and return other letters to their origional order.

#### Proof by Invariant

> Letter game two move:
> - Row move
> - Column move
>  
> Lemma 1: Row move does not change the relative order.  
> Proof: Row move, letter from cell i to cell i-1 or i+1. Nothing else moves, hence the order is preserved.  
>  
> Lemma 2: A Column move changes precisely the relative order of two pairs of items.
> Proof: Column move letter in cell i can move to i-3 or i+3, changing the relative order with the previous 2 or following 2.
>  
> Column moves:
> - case A Both in order to out of order: inversions +2
> - case B Both out of order to in order: inversions -2
> - case C One pair in order, one pair out of order: inversions no change
>  
> Any odd number of inversions cannot be made. $ \square $  
>  
> Corollary 1: In every state reachable from the start state the parity of the the number of inversions is unchanged.  
>  
> Proof By Invariant:  
> $P(n)$ : after any sequence of n moves  
> Basecase: $n=0 $, no moves no change to parity  
> Inductive step: $\forall n \geq 0, show P(n) \implies P(n+1)$  
> By the inductive hypothesis $P(n) $, we know that after moves $m_1  \text{ to } m_n$ is odd  
> 


