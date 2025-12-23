#include<stdio.h>

int main(void){
	int i,n;
	char c;
	scanf("%c %d",&c,&n);
	for(i=1;i<=n;i++)
		printf("%c",c);
	return 0;		
}
