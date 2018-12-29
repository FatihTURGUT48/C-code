#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main()
{

	// iki boyutlu bir diziyi ekran scanf komutu ile alicaz

	int dizi[2][3];


	printf("Lutfen dizinin elemanlarini sirasi ile giriniz :\n");

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			scanf("%d", &dizi[i][j]);
		}


	}

	printf("Dizinin elemanlari :\n");

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			printf("dizi[%d][%d] = %d \n",i,j ,dizi[i][j]);
		}


	}



	system("pause");


	return 0;

}