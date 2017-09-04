#include<stdio.h>
void power(int x,int n){
	int p=1;
	for(int i=0;i<n;i++)	p*=x;
	printf("%d",p);
}
int main(){
	int x,n;
	scanf("%d",&x);
	scanf("%d",&n);
	power(x,n);
	return 0;
}
