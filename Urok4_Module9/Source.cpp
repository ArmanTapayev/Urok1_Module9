#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include"Header.h"

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n, quit;
	
	do
	{
		printf("введите номер задания: ");
		scanf("%d", &n);

		switch (n)
		{
			case 1:
			{
				/*1. Дано целое число в двоичной системе счисления, т.е. последовательность цифр  0 и 1.
				Составить программу перевода этого числа в десятичную систему счисления*/


			}
			break;

			case 2:
			{
				/*2. В прямоугольной матрице найти наибольший из минимальных элементов строк матрицы */



			}break;

			case 3:
			{
				/*3. Ввести массив, состоящий из 15-ти элементов (двузначные целые числа).  
				Изменить разрядность цифр, образующих элементы исходного массива и, таким образом, 
				сформировать новый массив. Например, исходный массив: 25 71 84…, новый массив: 52 17 48….*/

				
					int row = 2, col = 3, colVect = 1,  minN = -20, maxN = 50, minElement = 0, maxElement = 0;
					double	average = 0;
					int *arr = GetMemory(&row);
					//int *vect = GetMemory(&row);
					fillArrayInt(arr, &row, &col, &minN, &maxN);
					printArrayInt(arr, &row, &col);

					/*ArrayStatInt(arr, &row, &col, &minN, &maxN, &minElement, &maxElement, &average);
					printf("min = %3d, max = %3d, aver = %3.2lf\n", minElement, maxElement, average);*/
					
					ArrayCol(arr, &row, &col, &minElement, &maxElement);
					//printArrayInt(vect, &row, &colVect);
					//printf("min = %3d, max = %3d\n", minElement, maxElement);
				

				//int row = 0, col = 1;
				//double *arr = GetMemoryReal(&row), minN = -20, maxN = 50, minElement=0, maxElement=0, average=0;
				//fillArrayReal(arr, &row, &col, &minN, &maxN);
				//printArrayReal(arr, &row, &col);

				//ArrayStatReal(arr, &row, &col, &minN, &maxN, &minElement, &maxElement, &average);
				//printf("min = %3.2lf, max = %3.2lf, aver = %3.2lf\n", minElement, maxElement, average);



				system("pause");
				system("cls");
			}break;
		}

		printf("продолжить 1-да 2-нет: ");
		scanf("%d", &quit);int *Get_Memmory(int col);

	} while (quit == 1); 

}
