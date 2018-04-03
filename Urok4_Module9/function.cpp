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
			printf("%3d", *(arr + i**row + j));
		}
	}
}

void printArrayReal(double *arr, int *row, int *col)
{
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			printf("%3.2lf", *(arr + i**row + j));
		}
	}
}

int *Get_Memmory(int col)
{
	return (int*)calloc(col, sizeof(int));

	/*mass = (int*)calloc(col, sizeof(int));
	if (mass == NULL)
	{
	printf("нет места!\n");
	exit(0);
	}
	return mass;*/
}