# RAG Retrieval-Augmented Generation

[Retrieval-Augmented Generation for Knowledge-Intensive NLP Tasks](https://arxiv.org/pdf/2005.11401.pdf)  

[Patrick Lewis Presentation](https://www.youtube.com/watch?v=JGpmQvlYRdU)  

[Seq2seq](https://en.wikipedia.org/wiki/Seq2seq) models are getting really good, but they hallucinate and are difficult to update.

Externally retrieved knowledge is useful for a variety of NLP tasks. Trivial updates and accuracy of input.

Need to supervise the retrieval or use heuristics e.g. [TF-IDF](https://en.wikipedia.org/wiki/Tf%E2%80%93idf) and integrate with downstream models.  

Related Work 
- REALM (Guu et al. 2020)
- LAMA (Petroni et al. 2019)
- Memory Networks (Weston et al. 2015)
- Knowledge-grounded Dialog models (Weston et al. 2019)

[Retrieve and Refine:
Improved Sequence Generation Models For Dialogue](https://arxiv.org/pdf/1808.04776.pdf)  

Jointly learn to retrieve and generate, latent retrieval, general recipe for any seq2seq task. 

Combine generator model with external data.

- Pre-trained generator model e.g. BART
- Pre-trained retriever model e.g. Dense Passage Retrieval (DPR)
- Indexed Knowledge Base e.g. Wikipedia

[BART: Denoising Sequence-to-Sequence Pre-training for Natural Language Generation, Translation, and Comprehension](https://arxiv.org/pdf/1910.13461.pdf) 29 Oct 2019  

[Dense Passage Retrieval for Open-Domain Question Answering](https://arxiv.org/pdf/2004.04906.pdf)  30 Sep 2020   

[Latent Retrieval for Weakly Supervised
Open Domain Question Answering](https://arxiv.org/pdf/1906.00300.pdf)  

RAG models combine parametric and non-parametric models.  

RAG Sequence Model  


RAG Token Model  


Dense Passage Retrieval  

- Get pretrained Bi-Encoder
- Encode documents (e.g. Wikipedia) once with Document Encoder
- Finetune Query Encoder

Presentation to 17:07

