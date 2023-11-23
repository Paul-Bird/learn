# Data Driven Science and Engineering
## University of Washington - Steve Brunton & Nathan Kutz

[Course Homepage](https://databookuw.com/)  

Part 1 - Dimensionality Reduction and Transforms

[Chapter 1 SVD Playlist](https://www.youtube.com/watch?v=gXbThCXjZFM&list=PLMrJAkhIeNNSVjnsviglFoY2nXildDCcv&index=1)  


### Singular Value Decomposition SVD

#### Introduction

Reduce data to it's key features.

Data driven generalisation of the fourier transform (FFT).

Tailored to the data, to the specific problem.

Obtain low-rank approximations to matrices, when there are a few dominant patterns that explain the high-dimensional data.  

The underlying algorithm of principal component analysis (PCA).  

Based on simple and interpretable linear algebra. Scalable to massive data sets.  

#### [Mathematical Overview](https://www.youtube.com/watch?v=nbBvuuNVfco&list=PLMrJAkhIeNNSVjnsviglFoY2nXildDCcv&index=2)

$\underline{\overline{X}} = \begin{bmatrix} | & | & & | \\\ X_1 & X_2 & ... & X_m \\\ | & | & & | \end{bmatrix} $

Example each column represents an image of a person.  

$X_k \in \mathbb{R^n}$

With a million pixel image for each column: $n=1,000,000$

Example each column is a frame from a video.  

SVD represents data in 3 matrices:

$\underline{\overline{X}} = \begin{bmatrix} | & | & & | \\\ X_1 & X_2 & ... & X_m \\\ | & | & & | \end{bmatrix} = $  

$U \Sigma V^T = \begin{bmatrix} \\\ | & | & & | \\\ u_1 & u_2 & ... & u_m \\\ | & | & & | \\\ \end{bmatrix} \begin{bmatrix} {\sigma}_1 & & \\\  & ... & \\\  & & {\sigma}_m \\\  \\\ & 0 & \end{bmatrix} {\begin{bmatrix} \\\ | & | & & | \\\ v_1 & v_2 & ... & v_m \\\ | & | & & | \\\ \end{bmatrix}}^T$  

$U, V$ unitary  

$UU^T=U^TU=I_{n \times n}$  
$VV^T=V^TV=I_{m \times m}$  
$\Sigma$ diagonal, decreasing magnitude: ${\sigma}_1 \geq {\sigma}_2 \geq ... \geq {\sigma}_m \geq 0 $  

Python - NumPy  
```U, S, Vh = np.linalg.svd(a, full_matrices=True)```  
Julia  
```U,S,V = svd(X)```  
R  
```A.svd <- svd(A)```


#### [Matrix Approximation](https://www.youtube.com/watch?v=xy3QyyhiuY4&list=PLMrJAkhIeNNSVjnsviglFoY2nXildDCcv&index=3)

