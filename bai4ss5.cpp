#include<stdio.h>
int main(){
	float salary;
	printf("nhap  luong cua nhan vien");
	scanf("%f", &salary);
	if(salary>80000000){
		printf("tien thue la:%f\n luong la:%f trieu\n", salary*0.35, salary-salary*0.35);
	}else if(salary>52000000){
		printf("tien thue la:%f\n luong la:%f trieu\n", salary*0.3, salary-salary*0.3);
	}else if(salary>32000000){
		printf("tien thue la:%f\n luong la:%f trieu\n", salary*0.25, salary-salary*0.25);
	}else if(salary>18000000){
		printf("tien thue la:%f\n luong la:%f trieu\n", salary*0.2, salary-salary*0.2);
	}else if(salary>10000000){
		printf("tien thue la:%f\n luong la:%f trieu\n", salary*0.15, salary-salary*0.15);
	}else if(salary>5000000){
		printf("tien thue la:%f\n luong la:%f trieu\n", salary*0.1, salary-salary*0.1);
	}else if(salary>0){
		printf("tien thue la:%f\n luong la:%f trieu\n", salary*0.05, salary-salary*0.05);
		}
	}				
