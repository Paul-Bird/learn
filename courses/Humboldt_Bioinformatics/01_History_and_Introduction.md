## Bioinformatics for Plant and Animal sciences
### Humboldt University in Berlin - 2021
### Lecture 1: History and Introduction

#### What does a Bioinformatician do ?

Typically in a biology group, collect data in wet lab, and process that data.  
Minority work just on the advancement of data processing.  

Definitions:  
- In silico - can be tested on a computer (compared to in vivo / in vitro)

#### History of Bioinformatics

1972 [Walter Fiers](https://en.wikipedia.org/wiki/Walter_Fiers) first to to establish the complete nucleotide sequence of a gene.  
1976 [Bacteriophage MS2 RNA](https://en.wikipedia.org/wiki/Bacteriophage_MS2) sequenced.  
1977 [Frederick Sanger](https://en.wikipedia.org/wiki/Frederick_Sanger) [ΦX174 first DNA sequenced](https://en.wikipedia.org/wiki/Phi_X_174) 5,386 nucleotides [Sanger sequencing](https://en.wikipedia.org/wiki/Sanger_sequencing)  
1981 [cauliflower mosaic virus](https://en.wikipedia.org/wiki/Cauliflower_mosaic_virus) sequenced using [Shotgun sequencing](https://en.wikipedia.org/wiki/Shotgun_sequencing)  
1987 Collection of distinct DNAs in arrays for expression profiling was first described. [DNA Microarray](https://en.wikipedia.org/wiki/DNA_microarray)  
1995 [Haemophilus influenzae](https://en.wikipedia.org/wiki/Haemophilus_influenzae) the first free-living microorganism to have its entire genome sequenced.  
2003 Human genome project completed  
2010 [ENCODE](https://en.wikipedia.org/wiki/ENCODE)  

Sequence of RNA, DNA and proteins are the fundamental data types and alignment is the fundamental algorithm of bioinformatics.  

[Electropherogram](https://en.wikipedia.org/wiki/Electropherogram) - graph that displays the raw data obtained from sequencing your DNA.  

[FASTQ format](https://en.wikipedia.org/wiki/FASTQ_format)  

[GenBank](https://www.ncbi.nlm.nih.gov/genbank/) genetic sequence database.  

Sequence Annotation:
- Location
- Gene name
- Structure
- Function
- Classification

[Ensemble](https://www.ensembl.org/) database of sequences with annotation.  

"Omics":
- Genomics
- Epigenomics 
- Transcriptomics
- Proteomics
- Metabolomics
- Phenomics

#### Microarray Example

[Cyanine](https://en.wikipedia.org/wiki/Cyanine) Cy3 and or Cy5 used for biological labeling. Scanner can read the results.  

Workflow:
- Create oligonucleotide arrays
- Acquire samples
- Extract and label the DNA
- Hybridisation and scanning
- Data storage
- Data noprmalisation
- Gene expression clustering
- Data interpretation

Humans gave ~25,000 genes, each gene is on average 10,000 to 15,000 base pairs long.
- Each probe targets 20 to 40 base pairs.
- Microarrays can contain 5 million probes, measure > 10,000 genes.

Output of the scan picture converted to gene expression matrix.  

Data normalisation needed:
- Variations in amount of RNA.
- Variations in the dynamic array of the scanner.
- External condition variation such as temperature.

Visualisations used to focus on differences between samples, calculate correlations to group related results.  

Gene Expression Clustering:
- Partition methods
- Hierarchical
- Fuzzy
- Density based
- Model based

Most methods are based on a distance measure to ddetermine which samples are similar and which are different.  

Statistical significance important.  

#### Gene Ontology

Initiative to unify the representation of gene and gene product attributes across all species.  

















