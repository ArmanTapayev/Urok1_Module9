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
		printf("������� ����� �������: ");
		scanf("%d", &n);

		switch (n)
		{
			case 1:
			{
				/*1. ���� ����� ����� � �������� ������� ���������, �.�. ������������������ ����  0 � 1.
				��������� ��������� �������� ����� ����� � ���������� ������� ���������*/


			}
			break;

			case 2:
			{
				/*2. � ������������� ������� ����� ���������� �� ����������� ��������� ����� ������� */



			}break;

			case 3:
			{
				/*3. ������ ������, ��������� �� 15-�� ��������� (���������� ����� �����).  
				�������� ����������� ����, ���������� �������� ��������� ������� �, ����� �������, 
				������������ ����� ������. ��������, �������� ������: 25 71 84�, ����� ������: 52 17 48�.*/
				int row, col, len;
				printf("������� ������ �������: ");
				scanf("%d", &len);
				int *arr = NULL;
				arr = (int *)malloc(sizeof(int)*len);




			}break;
		}

		printf("���������� 1-�� 2-���: ");
		scanf("%d", &quit);int *Get_Memmory(int col)


	} while (quit == 1);

}
