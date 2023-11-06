# Mathematics for Computer Science
## MIT 6.042J - Fall 2010
### Recitation 1 Problems

#### Team Problem: A Mystery  
A certain cabal within the 6.042 course staff is plotting to make the final exam ridiculously hard.  

> “Problem 1. Prove that the axioms of mathematics are complete and consistent. Express your answer in Mayan hieroglyphics."  

The only way to stop their evil plan is to determine exactly who is in the cabal. The course staff consists of nine people:  
{Oscar, Stav, Darren, Patrice, David, Nick, Martyna, Marten, Tom}  

The cabal is a subset of these nine. A membership roster has been found and appears below, but it is deviously encrypted in logic notation. The predicate incabal indicates who is in the cabal; that is, incabal(x) is true if and only if x is a member.  
  
Translate each statement below into English and deduce who is in the cabal.  

(i) $ \exists x \: \exists y \: \exists z :\ (x \neq y \land x \neq z \land y \neq z \land incabal(x) \land incabal(y) \land  incabal(z))$ 

(ii) $ \lnot( incabal(Stav) \land incabal(David)) $  

