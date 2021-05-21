//
// ParallelMatrix.h
// Practica4
//
// Created by Beatriz Paulina Garcia Salgado
//

#pragma once

#ifndef ParallelMatrix_h
#define ParallelMatrix_h

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int getNumberOfCPUs();
int checkSumAll(long double*, long double*, int);
int ompParallelMatrixSum(long double**, long double*, long double*, int);
int matrixSum(long double**, long double*, long double*, int);

int matrix_multi (
	long double *result, long double *A, long double *B, int mat_size
);

int matrix_multi_parallel (
	long double *result, long double *A, long double *B, int mat_size
);

long double matrix_max (long double* A, int sizeMat);

long double matrix_max_multi (long double* A, int sizeMat);


#endif
