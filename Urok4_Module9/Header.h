#pragma once
void fillArrayInt(int *arr, int *row, int *col, int *min, int *max);
void fillArrayReal(double *arr, int *row, int *col, double *min, double *max);
void printArrayInt(int *arr, int *row, int *col);
void printArrayReal(double *arr, int *row, int *col);
int *GetMemory(int *row, int *col);
double * GetMemoryReal(int *length);
void ArrayStatInt(int *arr, int *row, int *col, int *min, int *max, int *minElement, int *maxElement, double *average);
void ArrayStatReal(double *arr, int *row, int *col, double *min, double *max, double *minElement, double *maxElement, double *average);
void VectStatInt(int *arr, int *len, int *minElement, int *maxElement, double *average);
void ArrayCol(int *arr, int *row, int *col, int *vectMin, int *vectMax);