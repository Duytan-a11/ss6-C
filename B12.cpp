#include <stdio.h>

int main(){
	int n;	printf("Nhap vao so nguyen N: ");	
	scanf("%d", &n);
	long long f0=0,f1=1,fn=0;
	if(n > 0){
		printf("Day la %d so Fibonaci: ",n);
		while(n--){
			printf("%lld ",fn);
			f0=f1;
			f1=fn;
			fn=f0+f1;
		}
	}
	else	
	printf("So khong hop le!");
	
return 0;
}
