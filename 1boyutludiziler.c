#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include<stdio.h>


int main()
{

	char mesaj[5];

	printf("5 karakterlik bir mesaj giriniz :");

	for (int i = 0; i < 5; i++)
	{
		scanf(" %c", &mesaj[i]);	// burada %c nin basina bir bosluk koyuyoruz neden ? cunku koymaz isek scanf komutu calistiginda bir harf girip
									// enter tusuna bastigimizda enter karakteri (\n) de dizimizin icinde atanmis olucak yani h karakteri girsek 
									// ornek olarak sonra da enter tusuna bassak dizinin birinci elemani h ikinci elemani \n olucaktir 
									// bunu onlemek icin ise scanf komutundaki %c komutunun basina bir bosluk birakmak yeterlidir 
									
						//*** ama mesela bosluk birakmaz isek ve program calistiginda tek enter tusunu kullanmadan tek seferde kelimeyi yazsak 
						//birsey olmaz scanf komutu satiri tek tek okur ve bu kod icin bes tane harfi alir ve liste icine atar 
						// biz burada enter kullanirsak diye bu onlemi almis oluyoruz 

	}

	for (int i = 0; i < 5; i++)
	{
		printf("%c", mesaj[i]);

	}

	printf("\n");





	system("pause");

	return 0;
}





