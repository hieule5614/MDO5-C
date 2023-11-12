#include<stdio.h>
int main(){
	float total;
	printf("nhap tong doanh thu");
	scanf("%f", &total);
	if(total>300){
		printf("hoa hong la:%f trieu", total*0.2);
	}else if(total>100){
		printf("hoa hong la:%f trieu", total*0.1);
	}else if(total>0){
		printf("hoa hong la:%f trieu", total*0.05);
		}
	}	
