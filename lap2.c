#include<stdio.h>
void main(void)
{	
    int  age;
	char name[15];
	char university[15];
	char email[15];
	
	printf("please enter your age  ");
	scanf("%d", &age);
	printf("please enter your name ");
	scanf("%s", &name);
	printf("please enter your university ");
	scanf("%s", &university);
	printf("please enter your email ");
	scanf("%s", &email);
	
	printf("your age is %d\n", age);
	printf("your name is %s\n", name);
	printf("your university is %s\n", university);
	printf("your email is %s\n", email);
	
}