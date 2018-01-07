include <stdio.h>
void  swapByPointer(int *A, int *B);
int main(){
int a,b,*n,*m;
scanf("%d",&a);
scanf("%d",&b);
n =
&a;
 m=&b;
 swapByPointer(n,m);


	
	return 0;
}
void swapByPointer(int *A, int *B){
	
	 int t;
	t=*A;
	*A=*B;
	*B=t;
	 printf("%d %d",*A,*B);
}
