import numpy
from numpy.typing import NDArray


def reflect_n(a: NDArray) -> NDArray:
    # Orthonormal matrix generated via
    # https://en.wikipedia.org/wiki/Reflection_(mathematics)#Reflection_through_a_hyperplane_in_n_dimensions
    # also: https://en.wikipedia.org/wiki/Householder_transformation

    N = a.shape[0]
    M = numpy.sum(a ** 2)

    R = numpy.zeros((N, N))

    for i in range(N):
        for j in range(N):
            R[i, j] = (1 if i == j else 0) - 2 * a[i] * a[j] / M

    return R


def sreflex_n(N: int) -> NDArray:
    # orthogonal matrix corresponding to a reflection, special case with a=[0, 1, ..., N-1]

    R = numpy.zeros((N, N))
    M = N * (N-1) * (2 * N - 1) / 6

    for i in range(N):
        for j in range(N):
            R[i, j] = (1 if (N - i - 1) == j else 0) - 2 * (N - i - 1) * j / M

    return R


def symm(N: int) -> NDArray:
    R = numpy.zeros((N, N))

    for i in range(N):
        for j in range(N):
            R[i, j] = 1 / (1+.5*abs(i-j))

    return R

A = symm(4)

print(A)

eige, eigv = numpy.linalg.eig(A)

print(eige[3])
print(eigv[:,3])
print((A @ (-eigv[:,3])) - eige[3] * eigv[:, 3])