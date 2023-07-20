#include <stdio.h>
int main() {
	int a,b,sum=0;
	float mean,cnt=0.00 ;
	while(a>0){
	printf("enter a number : ");	
	scanf("%d",&a);
	b=a;
	sum += b;
	cnt++;
	}
	mean = sum/(cnt-1);
	if (a<=0){
	printf("summation = %d\n",sum);
	printf("mean : %f\n", mean);}
	return 0;
	}	
