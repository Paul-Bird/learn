# Attention Mechanism
[Attention Is All You Need](https://arxiv.org/pdf/1706.03762.pdf)  

  
[The Attention Mechanism in Large Language Models](https://www.youtube.com/watch?v=OxCpWwDCDFQ)  

## Embeddings
Humans are good with words and computers with numbers. Embeddings are the bridge between these two worlds.  

[Efficient Estimation of Word Representations in Vector Space - 2013](https://arxiv.org/pdf/1301.3781.pdf)  
[Word2Vec](https://code.google.com/archive/p/word2vec/)  
[Distributed Representations of Words and Phrases and their Compositionality](https://arxiv.org/pdf/1310.4546.pdf)

Words are embedded in an n-dimensional numerical space, where n could be as high as 4096. Related words are located near each other in this space, there is no human meaning for each of the dimensions.  

The better the embedding the better the language model.  

[Cosine similarity](https://en.wikipedia.org/wiki/Cosine_similarity) the cosine of the angle betweem vectors. A method for comparing the vectors of embeddings.  

Challenge, one word can have multiple meanings, an apple, Apple.  

## Attention 

Uses the context of the word to work out where it should fit in an embedding.  

The process to position the words in the embedding is iterative to refine.  

### Multi-head Attention

Different embeddings position words differently, some result in a good result for a particular word or topic (distance between words in relation to meaning), others not.  

Building many embeddings is a lot of work  

Linear transformations to modify an embedding already built. We can get new embeddings from existing ones.  

The score for each embedding is use a weight for concatinating them together.  

This concatinated embedding captures the context.  

[The math behind Attention: Keys, Queries, and Values matrices](https://www.youtube.com/watch?v=UPtG_38Oq8o)  


