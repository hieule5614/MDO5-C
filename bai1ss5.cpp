#include<stdio.h>
#include<math.h>
int main(){
	float a ,b ,c ;
	printf("nhap vao 3 so");
	scanf("%f %f %f" ,&a ,&b, &c);
	float delta = b*b-4*a*c;
	float x1 = (-b-sqrt(delta))/2*a, x2 = (-b+sqrt(delta))/2*a;
	if(a == 0){
		printf("day la phuong trinh bac 1");
	    if(b == 0){
	    	if(c == 0){
	    		printf("phuong trinh vo so nghiem");
			}else
			    printf("phuong trinh vo nghiem");
		}else
		    printf("phuong trinh co nghiem kep : -%d/%d" ,&c ,&b);	
	}else
	    printf("phuong trinh co 2 nghiem phan biet la x1=%f va x2=%f", x1, x2);
	    
	
}
