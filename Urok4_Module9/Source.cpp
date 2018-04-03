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
				int row, col, len;
				printf("Введите размер матрицы: ");
				scanf("%d", &len);
				int *arr = NULL;
				arr = (int *)malloc(sizeof(int)*len);




			}break;
		}

		printf("продолжить 1-да 2-нет: ");
		scanf("%d", &quit);int *Get_Memmory(int col)


	} while (quit == 1);

}
