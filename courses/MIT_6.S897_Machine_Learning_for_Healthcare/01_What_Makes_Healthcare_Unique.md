# Machine Learning For Healthcare 
## MIT 6.S897 - Spring 2019
### What Makes Healthcare Unique ?

[slides](https://ocw.mit.edu/courses/6-s897-machine-learning-for-healthcare-spring-2019/2020812c6b3be9e2c27873595d1a9aed_MIT6_S897S19_lec1.pdf)


#### History of AI and ML in Healthcare

1970's MYCIN expert system - identify bacteria  

1980's Internist-1/QMR model - diagnosis for internal medicine  
- 570 disease variables, 4075 symptom variables, 45,470 directed edges.  
- Knowledge from doctors, 15 person years work, no machine learning.  
- Difficult to maintain, prior probabilities for disease different with geographies, new medicine.  

1980's RX Project: Automating Medical Discovery.  

1990's 88 published studies using neural networks.
- Small number of features.  
- Limited training data.  
- Poor generalisation.  

#### Data

Adoption of electronic health records (USA) from 9% in 2008 to ~ 80% opportunity for deep learning.

> [MIMIC Dataset](https://physionet.org/content/mimiciii/1.4/)
> 40k ICU patients, monitoring data, medication, outcomes.

##### Types of Medical Data
- vital signs
- devices
- imaging
- lab tests
- proteomics
- genomics


Data Standardisations
- [IDC Classifications](https://icd.who.int/en)  
- [LOINC codes](https://loinc.org/)  
- [National Drug Code Directory](https://www.fda.gov/drugs/drug-approvals-and-databases/national-drug-code-directory)
- [Unified Medical Language System (UMLS)](https://www.nlm.nih.gov/research/umls/index.html)  

With standards data can be exchanged.  
[Fast Healthcare Interoperability Resources](https://hl7.org/fhir/)  

#### Breakthroughs in Machine Learning
- High dimensional features
- Semi-supervised and unsupervised learning
- Open source software

Example from ER / A&E
- Diagnosis of images or vital signs, reduce need for specialist consults.  

Example for chronic disease
- Predict where in progression, valuable for care planning, precise treatment choice, timing and dose for medicine.
- Use data to predict changes treatments will make.

Discovery
- Identify new subtypes of a disease
- Medicine, [Automating Molecule Design](https://news.mit.edu/2018/automating-molecule-design-speed-drug-development-0706)

#### What is Unique About Healthcare

Algorithms and code must be robust, bugs could kill.  
Lack of tools to formally check ML models.  
Algorithms for directing limited resources must be fair.  
Very little labked data, lots of missing data.  
Small number of samples for rare disease.  







