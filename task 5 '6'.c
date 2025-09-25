#include <stdio.h>
int main()
{
	int x,qun1,qun2,qun3,qun4,tot1,tot2,tot3,tot4,total;
	int b=200,f=50,p=500,s=150;
	char sn1,sn2,sn3,sn4,nam,nam2,nam3,nam4;
	printf("~~~~~~~~~~|Menu|~~~~~~~~~~\n");
	printf("B = Burger         (Rs:200)\n");
	printf("F = French Fries   (Rs:50)\n");
	printf("P = Pizza          (Rs:500)\n");
	printf("S = Sandwiches     (Rs:150)\n");
	printf("Enter types of snacks you want to order:  ");
	scanf("%d", &x);
	switch (x)
	{
	case 1:
		printf("Enter code of first snack (b,f,p,s): ");
		scanf(" %c", &sn1);
		printf("Enter quantity of %c ", sn1);
		scanf("%d", &qun1);
		switch (sn1){
			case 'b':
				printf("%d) Total Burger Price: %d\n", qun1, qun1 * b);
				tot1 = qun1 * b;
				break;
			case 'f':
				printf("%d) Total French Fries Price: %d\n", qun1, qun1 * f);
				tot1 = qun1 * f;
				break;
			case 'p':
				printf("%d) Total Pizza price: %d\n", qun1, qun1 * p);
				tot1 = qun1 * p;
				break;
			case 's':
				printf("%d) Total Sandwiches Price: %d\n", qun1, qun1 * s);
				tot1 = qun1 * s;
				break;
		}
		total = tot1;
		break;
	case 2:
		printf("Enter code of first snack (b,f,p,s): ");
		scanf(" %c", &sn1);
		printf("Enter quantity of %c ", sn1);
		scanf("%d", &qun1);
		printf("Enter code of second snack (b,f,p,s): ");
		scanf(" %c", &sn2);
		printf("Enter quantity of %c ", sn2);
		scanf("%d", &qun2);
		switch (sn1)
		{
		case 'b':
			printf("%d) Total Burger Price: %d\n", qun1, qun1 * b);
			tot1 = qun1 * b;
			break;
		case 'f':
			printf("%d) Total Fernch Fries Price: %d\n", qun1, qun1 * f);
			tot1 = qun1 * f;
			break;
		case 'p':
			printf("%d) Total Pizza Price: %d\n", qun1, qun1 * p);
			tot1 = qun1 * p;
			break;
		case 's':
			printf("%d) Total Sandwhiches Price: %d\n", qun1, qun1 * s);
			tot1 = qun1 * s;
			break;
		}
		switch (sn2)
		{
		case 'b':
			printf("%d) Total Burger Price: %d\n", qun2, qun2 * b);
			tot2 = qun2 * b;
			break;
		case 'f':
			printf("%d) Total French Fries Price: %d\n", qun2, qun2 * f);
			tot2 = qun2 * f;
			break;
		case 'p':
			printf("%d) Total Pizza Price: %d\n", qun2, qun2 * p);
			tot2 = qun2 * p;
			break;
		case 's':
			printf("%d) Total Sandwhiches Price: %d\n", qun2, qun2 * s);
			tot2 = qun2 * s;
			break;
		}
		total = tot1 + tot2;
		break;
	case 3:
		printf("Enter code of first snack (b,f,p,s): ");
		scanf(" %c", &sn1);
		printf("Enter quantity of %c ", sn1);
		scanf("%d", &qun1);
		printf("Enter code of second snack (b,f,p,s): ");
		scanf(" %c", &sn2);
		printf("Enter quantity of %c ", sn2);
		scanf("%d", &qun2);
		printf("Enter code of second snack (b,f,p,s): ");
		scanf(" %c", &sn3);
		printf("Enter quantity of %c ", sn3);
		scanf("%d", &qun3);
		switch (sn1)
		{
		case 'b':
			printf("%d) Total Burger Price: %d\n", qun1, qun1 * b);
			tot1 = qun1 * b;
			break;
		case 'f':
			printf("%d) Total French Fries Price: %d\n", qun1, qun1 * f);
			tot1 = qun1 * f;
			break;
		case 'p':
			printf("%d) Total Pizza Price: %d\n", qun1, qun1 * p);
			tot1 = qun1 * p;
			break;
		case 's':
			printf("%d) Total Sandwiches Price: %d\n", qun1, qun1 * s);
			tot1 = qun1 * s;
			break;
		}
		switch (sn2)
		{
		case 'b':
			printf("%d) Total Burger Price: %d\n", qun2, qun2 * b);
			tot2 = qun2 * b;
			break;
		case 'f':
			printf("%d) Total French Fries Price: %d\n", qun2, qun2 * f);
			tot2 = qun2 * f;
			break;
		case 'p':
			printf("%d) Total Pizza Price: %d\n", qun2, qun2 * p);
			tot2 = qun2 * p;
			break;
		case 's':
			printf("%d) Total Sandwiches Price: %d\n", qun2, qun2 * s);
			tot2 = qun2 * s;
			break;
		}
		switch (sn3)
		{
		case 'b':
			printf("%d) Total Burger Price: %d\n", qun3, qun3 * b);
			tot3 = qun3 * b;
			break;
		case 'f':
			printf("%d) Total French Fries Price: %d\n", qun3, qun3 * f);
			tot3 = qun3 * f;
			break;
		case 'p':
			printf("%d) Total Pizza Price: %d\n", qun3, qun3 * p);
			tot3 = qun3 * p;
			break;
		case 's':
			printf("%d) Total Sandwiches Price: %d\n", qun3, qun3 * s);
			tot3 = qun3 * s;
			break;
		}
		total = tot1 + tot2 + tot3;
		break;
	case 4:
		printf("Enter code of first snack (b,f,p,s): ");
		scanf(" %c", &sn1);
		printf("Enter quantity of %c ", sn1);
		scanf("%d", &qun1);
		printf("Enter code of second snack (b,f,p,s): ");
		scanf(" %c", &sn2);
		printf("Enter quantity of %c ", sn2);
		scanf("%d", &qun2);
		printf("Enter code of second snack (b,f,p,s): ");
		scanf(" %c", &sn3);
		printf("Enter quantity of %c ", sn3);
		scanf("%d", &qun3);
		printf("Enter code of first snack (b,f,p,s): ");
		scanf(" %c", &sn4);
		printf("Enter quantity of %c ", sn4);
		scanf("%d", &qun4);
		switch (sn1)
		{
		case 'b':
			printf("%d) Total Burger Price: %d\n", qun1, qun1 * b);
			tot1 = qun1 * b;
			break;
		case 'f':
			printf("%d) Total French Fries Price: %d\n", qun1, qun1 * f);
			tot1 = qun1 * f;
			break;
		case 'p':
			printf("%d) Total Pizza Price: %d\n", qun1, qun1 * p);
			tot1 = qun1 * p;
			break;
		case 's':
			printf("%d) Total Sandwiches Price: %d\n", qun1, qun1 * s);
			tot1 = qun1 * s;
			break;
		}
		switch (sn2)
		{
		case 'b':
			printf("%d) Total Burger Price: %d\n", qun2, qun2 * b);
			tot2 = qun2 * b;
			break;
		case 'f':
			printf("%d) Total French Fries Price: %d\n", qun2, qun2 * f);
			tot2 = qun2 * f;
			break;
		case 'p':
			printf("%d) Total Pizza Price: %d\n", qun2, qun2 * p);
			tot2 = qun2 * p;
			break;
		case 's':
			printf("%d) Total Sandwiches Price: %d\n", qun2, qun2 * s);
			tot2 = qun2 * s;
			break;
		}
		switch (sn3)
		{
		case 'b':
			printf("%d) Total Burger Price: %d\n", qun3, qun3 * b);
			tot3 = qun3 * b;
			break;
		case 'f':
			printf("%d) Total French Fries Price: %d\n", qun3, qun3 * f);
			tot3 = qun3 * f;
			break;
		case 'p':
			printf("%d) Total Pizza Price: %d\n", qun3, qun3 * p);
			tot3 = qun3 * p;
			break;
		case 's':
			printf("%d) Total Sandwiches Price: %d\n", qun3, qun3 * s);
			tot3 = qun3 * s;
			break;
		}
		switch (sn4)
		{
		case 'b':
			printf("%d) Total Burgers Price: %d\n", qun4, qun4 * b);
			tot4 = qun4 * b;
			break;
		case 'f':
			printf("%d) Total French Fries Price: %d\n", qun4, qun4 * f);
			tot4 = qun4 * f;
			break;
		case 'p':
			printf("%d) Total Pizza Price: %d\n", qun4, qun4 * p);
			tot4 = qun4 * p;
			break;
		case 's':
			printf("%d) Total Sandwiches Price: %d\n", qun4, qun4 * s);
			tot4 = qun4 * s;
			break;
		}
		total = tot1 + tot2 + tot3 + tot4;
		break;
	}
	printf("Total Charges %d\n", total);
	printf("Thank You");
	return 0;
}