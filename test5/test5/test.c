#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("为奇数");
//	else
//		printf("为偶数");
//
//	return 0;
//}
//输出1-100的奇数。
//int main()
//{
//	int num = 0;
//
//	while (num <= 99)
//	{
//		num++;
//		if (num % 2 == 1)
//			printf("%d\n", num);
//	}
//		
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	/*if (1 == day)
//		printf("星期一\n");
//	else if (2 == day)
//		printf("星期二\n");
//	else if (2 == day)*/
//	/*switch (day)
//	{
//	case 1:
//		printf("星期一\n"); 
//		break;
//	case 2:
//		printf("星期二\n"); 
//		break;
//	case 3:
//		printf("星期三\n"); 
//		break;
//	case 4:
//		printf("星期四\n"); 
//		break;
//	case 5:
//		printf("星期五\n"); 
//		break;
//	case 6:
//		printf("星期六\n"); 
//		break;
//	case 7:
//		printf("星期日\n"); 
//		break;
//
//	}*/
//	switch (day)
//	{
//	case 1:	
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("选择错误");
//		break;
//	}
//	return 0;
//}
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{
		case 1:n++;
		case 2:n++, m++;
			break;
		}
	case 4:m++;
		break;
	default:
		break;

	}
	printf("m = %d,n = %d\n", m, n);
	return 0;

}



