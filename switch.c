#include<stdio.h>
int main(){
	int i=10;
	int j=20;
	switch(i)
	{
		case 10:
			printf("Value of i in outer switch:%d \n ,i");
		case 20:
			printf("Value of j in switch: %d \n ,j");
}
printf("EXACT VALUE OF i IS:%d \n,i");
printf("EXACT VALUE OF j IS:%d \n",j);
return 0;
}
