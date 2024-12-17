#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,x1,x2;
	printf("Nhap vao so a: ");	
	scanf("%f", &a);
	printf("Nhap vao so b: ");	
	scanf("%f", &b);
	printf("Nhap vao so c: ");	
	scanf("%f", &c);
	
	float delta = b*b - 4*a*c;
	if(delta < 0)	
	printf("Phuong trinh vo nghiem!");
	
	else if(delta == 0){
		x1=-b/2*a;
		printf("Phuong trinh co nghiem kep x1=x2= %f",x1);
	}
	
	else{
		x1 = (-b + sqrt(delta))/2*a, x2 = (-b - sqrt(delta))/2*a;
		printf("Phuong trinh co x1 = %f , x2 = %f",x1,x2);
	}
return 0;
}
