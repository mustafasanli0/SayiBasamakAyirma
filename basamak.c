  
#include<stdio.h>
#include <stdlib.h>
void main()
{
	bitti:
	system("color 9f");
	int y, x, z, m = 0;
	char a = "mustafa",b;
	printf("Bir Sayi Girin: ");
	scanf_s("%d", &x);//alınan sayi x
	printf("Girdiginiz Sayi %d Islem Basliyor...\n", x);
	_getch();
	
	while (a = "mustafa")
	{
		while (x != 0)
		{
			y = x % 10;  
			x = x / 10;
			z = y*y;
			m += z;
		}
		x = m;
		printf("Sonuc: %d\n", m);
		_getch();
		switch (m)
		{
		case 89:
			printf("89 ile dongu basliyor\n");
			goto bitti;
			break;
        case 16:
			printf("16 ile dongu basliyor\n");
			goto bitti;
			break;
		case 145:
			printf("145 ile dongu basliyor\n");
			goto bitti;
			break;
		case 1:
			printf("1 ile dongu basliyor\n");
			goto bitti;
			break;
		case 58:
			printf("58 ile dongu basliyor\n");
			goto bitti;
			break;
		}
	m = 0;
		}
}
	
	

		


