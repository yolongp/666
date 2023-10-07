//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int opt;
//	double num1, num2;
//	double result;
//	printf("1.µ¡¼À 2.»¬¼À 3.°ö¼À 4.³ª´°¼À \n");
//	printf("¼±ÅÃ? ");
//	scanf("%d", &opt);
//	printf("µÎ °³ÀÇ ½Ç¼ö ÀÔ·Â: ");
//	scanf("%lf %lf", &num1, &num2);
//	
//	if (opt == 1)
//		result = num1 + num2;
//	if (opt == 2)
//		result = num1 - num2;
//	if (opt == 3)
//		result = num1 * num2;
//	if (opt == 4)
//		result = num1 / num2;
//
//	printf("°á°ú: %f \n", result);
//	return 0;
//}
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//
//	for (num = 1; num < 100; num++)
//	{
//		if(num%3==0 || num%4==0)
//			printf("3 ¶Ç´Â 4ÀÇ ¹è¼ö: %d \n", num);
//	}
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//	printf("Á¤¼ö ÀÔ·Â: ");
//	scanf("%d", &num);
//
//	if (num < 0)
//		printf("ÀÔ·Â °ªÀº 0º¸´Ù ÀÛ´Ù. \n");
//	else
//		printf("ÀÔ·Â °ªÀº 0º¸´Ù ÀÛÁö ¾Ê´Ù. \n");
//
//
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int opt;
//	double num1, num2;
//	double result;
//
//	printf("1.µ¡¼À 2.»¬¼À 3.°ö¼À 4.³ª´°¼À \n");
//	printf("¼±ÅÃ? ");
//	scanf("%d", &opt);
//	printf("µÎ °³ÀÇ ½Ç¼ö ÀÔ·Â: ");
//	scanf("%lf %lf", &num1, &num2);
//
//	if (opt == 1)
//		result = num1 + num2;
//	else if (opt == 2)
//		result = num1 - num2;
//	else if (opt == 3)
//		result = num1 * num2;
//	else
//		result = num1 / num2;
//
//	printf("°á°ú: %f \n", result);
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int num, abs;
//	printf("Á¤¼ö ÀÔ·Â: ");
//	scanf("%d", &num);
//
//	abs = num > 0 ? num : num * (-1);
//	printf("Àý´ñ°ª: %d \n", abs);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	for (int i = 1; i < 100; i++)
	{
		if (i % 7 == 0 || i % 9 == 0)
			printf("%d ", i);
	}

}