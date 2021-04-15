#include"myLib.h"
#include<stdio.h>
int main(int argc ,char* argv[])
{
	int sum,difference,multiplication,division,value1,value2;
	value1=atoi(argv[1]);
	value2=atoi(argv[2]);
	sum=addi(value1,value2);
	printf("\n Sum=%d",sum);
	difference=sub(value1,value2);
	printf("\n Diff=%d",difference);
	multiplication=multi(value1,value2);
	printf("\n Multiplication=%d",multiplication);
	division=divi(value1,value2);
	printf("\n Division=%d",division);
}
