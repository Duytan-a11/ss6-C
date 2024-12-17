#include <stdio.h>
#include <string.h>

int main(){
	char password[10]="ptithcm75",c[10];
	printf("Nhap vao mat khau: ");	
	scanf("%s", &c);
	
	if(strcmp(password,c) == 0)	
	printf("Mat khau %s chinh xac!",c);
	else	
	printf("Mat khau %s khong chinh xac!",c);
return 0;
}
