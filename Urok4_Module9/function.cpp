#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include"Header.h"

void fillArrayInt(int *arr, int *row, int *col, int *min, int *max)
{
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			*(arr + i**row + j) = (*max - *min)*rand() / RAND_MAX + *min;
		}
	}
}

void fillArrayReal(double *arr, int *row, int *col, double *min, double *max)
{
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			*(arr + i**row + j) = (double)((*max - *min)*rand() / RAND_MAX + *min);
		}
	}
}

void printArrayInt(int *arr, int *row, int *col)
{
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			printf("%3d; ", *(arr + i**row + j));
		}
		printf("\n");
	}
	printf("\n");
}

void printArrayReal(double *arr, int *row, int *col)
{
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			printf("%3.2lf; ", *(arr + i**row + j));
		}
		printf("\n");
	}
	printf("\n");
}

int *GetMemory(int *row, int *col)
{
	int *arr = NULL;
	printf("Введите количество строк массива: ");
	scanf("%d", row);
	printf("Введите количество столбцов массива: ");
	scanf("%d", col);
	arr = (int*)calloc(*row**col, sizeof(int));

		if (arr == NULL)
		{
			printf("Not enough memory.\n");
			exit(0);
		}
		else
			return arr;
}

double *GetMemoryReal(int *length)
{
	double *arr = NULL;
	printf("Введите длину массива: ");
	scanf("%d", length);
	arr = (double*)calloc(*length, sizeof(double));

		if (arr == NULL)
		{
			printf("Not enough memory.\n");
			exit(0);
		}
		else
			return arr;
}

void VectStatInt(int *arr, int *len, int *minElement, int *maxElement, double *average)
{
	int count = 0, sum = 0;
	*minElement = *maxElement = *arr;
	for (int i = 0; i < *len; i++)
	{
		if (*(arr + i) > *maxElement)
			*maxElement = *(arr + i);
		if (*(arr + i) < *minElement)
			*minElement = *(arr + i);
		sum += *(arr + i);
		count++;
	}
	*average = sum / count;
}

void ArrayStatInt(int *arr, int *row, int *col, int *min, int *max, int *minElement, int *maxElement, double *average)
{
	int count = 0, sum=0;
	*minElement = *maxElement = *arr;
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			if (*(arr + i**row + j) > *maxElement)
				*maxElement = *(arr + i**row + j);
			if (*(arr + i**row + j) < *minElement)
				*minElement = *(arr + i**row + j);
			sum += *(arr + i**row + j);
			count++;
		}
	}
	*average = sum / count;
}

void ArrayStatReal(double *arr, int *row, int *col, double *min, double *max, double *minElement, double *maxElement, double *average)
{
	int count = 0;
	double sum = 0;
	*minElement = *maxElement = *arr;
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			if (*(arr + i**row + j) > *maxElement)
				*maxElement = *(arr + i**row + j);
			if (*(arr + i**row + j) < *minElement)
				*minElement = *(arr + i**row + j);
			sum += *(arr + i**row + j);
			count++;
		}
	}
	*average = sum / count;
}

void ArrayCol(int *arr, int *row, int *col, int *vectMin, int *vectMax)
{
	int *vectRow = GetMemory(row);
	int *vectCol = GetMemory(col);

	int minElement, maxElement;
	double average=0;
	for (int j = 0; j < *col; j++)
	{
		for (int i = 0; i < *row; i++)
		{
			*(vectCol+j)+=*(arr + i**col + j);
		}
	}

	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			*(vectRow + i) += *(arr + i**col + j);
		}
	}

	printf("Элементы суммы столбцов:\n ");
	for (int j = 0; j < *col; j++)
	{
		printf("%d ", *(vectCol + j));
		
	}

	printf("Элементы суммы строк:\n ");

	for (int i = 0; i < *row; i++)
	{
		printf("%d ", *(vectRow + i));
	}
}