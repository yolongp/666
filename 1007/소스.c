//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int opt;
//	double num1, num2;
//	double result;
//	printf("1.���� 2.���� 3.���� 4.������ \n");
//	printf("����? ");
//	scanf("%d", &opt);
//	printf("�� ���� �Ǽ� �Է�: ");
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
//	printf("���: %f \n", result);
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
//			printf("3 �Ǵ� 4�� ���: %d \n", num);
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
//	printf("���� �Է�: ");
//	scanf("%d", &num);
//
//	if (num < 0)
//		printf("�Է� ���� 0���� �۴�. \n");
//	else
//		printf("�Է� ���� 0���� ���� �ʴ�. \n");
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
//	printf("1.���� 2.���� 3.���� 4.������ \n");
//	printf("����? ");
//	scanf("%d", &opt);
//	printf("�� ���� �Ǽ� �Է�: ");
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
//	printf("���: %f \n", result);
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int num, abs;
//	printf("���� �Է�: ");
//	scanf("%d", &num);
//
//	abs = num > 0 ? num : num * (-1);
//	printf("����: %d \n", abs);
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