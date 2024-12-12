#include<stdio.h>
struct cbill
{
	int nou;
	float rpu,bill;
}c;
void cbill()
{
	printf("enter the nou");
	scanf("%d",&c.nou);	
}
int main()
{
	cbill();
	printf("enter rateper unit");
	scanf("%f",&c.rpu);
	c.bill=c.nou*c.rpu;
	printf("%f",c.bill);
	return 0;
}
