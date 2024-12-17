#include <stdio.h>

int main(){
	float tiengui,laisuat,tienbandau;	
	int month;
	printf("Moi nhap vao so tien ban dau: ");	
	scanf("%f",&tiengui);	
	
	tienbandau = tiengui;
	printf("Moi nhap vao lai suat thang: ");	
	scanf("%f%%",&laisuat); 
	
	laisuat/=100;
	printf("Moi nhap vao so thang gui: ");	
	scanf("%d",&month);
	
	float lai;
	while(month--){
		lai =tiengui*laisuat;
		tiengui += lai;
	}
	lai = tiengui - tienbandau;
	printf("Tien lai: %.3f \nTien nhan duoc: %.3f",lai,tiengui);
return 0;
}
