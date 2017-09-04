#include<stdio.h>
void power(int A[2][2],int n){
	int y[2][2]={{1,0},{0,1}};
	int c[2][2];
	while(n>0){
		if(n%2!=0){
			for(int i=0;i<2;i++)
				for(int j=0;j<2;j++){
					c[i][j]=0;
					for(int k=0;k<2;k++)
						c[i][j]+=A[i][k]*y[k][j];
			}
			for(int i=0;i<2;i++)
				for(int j=0;j<2;j++)
					y[i][j]=c[i][j];
		}
		int d[2][2];
	//	c[2][2]={{0,0},{0,0}};
		for(int i=0;i<2;i++)
			for(int j=0;j<2;j++){
				d[i][j]=0;
				for(int k=0;k<2;k++)
					d[i][j]+=A[i][k]*A[k][j];	
			}
		for(int i=0;i<2;i++)
			for(int j=0;j<2;j++)
				A[i][j]=d[i][j];
		n=n/2;
	}	
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
			printf("%d  ",y[i][j]);
		printf("\n");
	}
}
int main(){
	int A[2][2]={{1,2},{3,4}};
	int n;
	scanf("%d",&n);
	power(A,n);
}
