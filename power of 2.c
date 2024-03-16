#include<stdio.h>
int main(){
	int num,n,a;
	scanf("%d",&num);
	while(n!=0){
		a=num/2;
		if(a%2==0){
			printf("YES");
		}
		n++;
	}
	return 0;
}
