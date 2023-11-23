#include<stdio.h>
int sum(int a, int b){
	int result=a+b;
	printf("%d + %d = %d\n",a,b,result);
	return result;
}
int signal(int a,int b){
	if(a>b){
		int result=a-b;
		printf("%d - %d = %d\n",a,b,result);	
		return result;
	}else{
		int result=b-a;
		printf("%d - %d = %d\n",b,a,result);
		return result;
	}
}
int main(){
	int a,b,c;
	printf("Nhap vao ba so a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);
	int total1=sum(a,b);
	int total2=sum(b,c);
	int total3=sum(c,a);
	int signal1=signal(a,b);
	int signal2=signal(b,c);
	int signal3=signal(c,a);
}

