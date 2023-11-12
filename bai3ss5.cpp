#include<stdio.h>
int main(){
	int minute_call, month_call = 25000;
	printf("nhap so phut goi:");
	scanf("%d", &minute_call);
	if(minute_call>200){
		printf("cuoc dien thoai la: %d", minute_call*200+month_call);
	}else if(minute_call>150){
		printf("cuoc dien thoai la: %d", minute_call*400+month_call);
	}else if(minute_call>50){
		printf("cuoc dien thoai la: %d", minute_call*600+month_call);
	}else{
		printf("cuoc dien thoai la: %d", minute_call*100+month_call);
	}
}	
