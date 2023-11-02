# Stanford CS224N 2023 
## Natural Language Processing with Deep Learning
### Lecture 10 Prompting, Reinforcement Learning from Human Feedback

Language models may do rudimentary modeling of agents, beliefs and actions.  
[Language Models as Agent Models](https://arxiv.org/pdf/2212.01681.pdf) 

How to get from completing a simple sentence to ChatGPT

### From Language Models to Assistants

#### Zero-Shot(ZS) and Few-Shot(FS) In-Context Learning
 

>[Improving Language Understanding by Generative Pre-Training](https://cdn.openai.com/research-covers/language-unsupervised/language_understanding_paper.pdf)
> GPT 2018 117M parameters, transformer decoder with 12 layers. Trained on BooksCorpus (7000 books 4.6GB text)

Showed that language modeling at scale can be effective pretraining for tasks such as natural language inference.

> [Language Models are Unsupervised Multitask Learners](https://cdn.openai.com/better-language-models/language_models_are_unsupervised_multitask_learners.pdf)  
> GPT-2 transformer based 1.5B parameters 8 million web pages 40GB text  

Emergent zero-shot learning, ability to do tasks with no examples.  

At the time GPT-2 was the top performer on some language modeling benchmarks with no task-specific fine tuning.  

> "To succeed on LAMBADA, computational models cannot simply rely on local context, but must be able to keep track of information in the broader discourse."  
> [The LAMBADA dataset: Word prediction requiring a broad discourse context](https://arxiv.org/pdf/1606.06031.pdf)


> [Language Models are Few-Shot Learners](https://arxiv.org/pdf/2005.14165.pdf)  
> GPT-3 2020 175B parameters 600GB data  

Emergent Few-shot learning, prepend example before question, also called in-context learning (no gradient updates are performed)

##### Chain of Thought Prompting

Demonstrate the reasoning you want the model to perform in the prompt.  
[Chain-of-Thought Prompting Elicits Reasoning in Large Language Models](https://arxiv.org/pdf/2201.11903.pdf)

> "Let's think step by step"  
> Zero-shot chain of thought prompting  
> [Large Language Models are Zero-Shot Reasoners](https://arxiv.org/pdf/2205.11916.pdf)  


#### Instruction finetuning

25:30

#### Reinforcement Learning from Human Feedback (RLHF)


GPT-4 March 2023 [GPT-4 Technical Report](https://arxiv.org/pdf/2303.08774.pdf)

Instruct GPT 2022[Training language models to follow instructions with human feedback](https://arxiv.org/pdf/2203.02155.pdf)

