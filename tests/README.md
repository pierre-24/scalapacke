 # Tests for scaLAPACKe

This is a set of tests for ScaLAPACKe. 
Each test performs a specific task and then verifies whether the task was executed correctly.


- **[`hello_blacs`](hello_blacs.c)**: Demonstrates point-to-point communication between process #0 and other processes.

- **[`{low,mid}level_pdgemm`](midlevel_pdgemm.c)**: Implements both low- and middle-level versions of a program to verify that $|A \times I - A| = 0$.

- **[`pcgeqrf`](pcgeqrf.c)**: Performs a QR decomposition of a general (complex) matrix $A = Q \times R$, and checks that $|Q^\dagger \times Q - I| = 0$.

- **[`pdgemm_residual`](pdgemm_residual.c)**: Verifies that $|B - A^{-1} \times C| = 0$, where $C = A \times B$ (and $A$ is orthogonal).

- **[`pdsyev`](pdsyev.c)**: Conducts an eigenvalue decomposition $A \, x_i = \lambda_i \, x_i$ and checks $\forall i: |A \, x_i - \lambda_i \, x_i| = 0$.

- **[`pigemr2d`](pigemr2d.c)**: Creates a matrix $A_{ij} = i + j$ locally, then transfers all pieces to process #0, where the sequentiality of the elements is checked.

- **[`psgels`](psgels.c)**: Solves a least squares problem to fit the equation $y = m \, x^T + p$ to a set of noisy data points.
