#include <stdio.h>
int main(){
	int a;	
	printf("nhap so a : ");
	scanf("%d",&a);
	for(int i = 1;i >=1;i++){
		if(a % i == 0){
			printf("%d ",i);
		}
	}
	
	return 0;
}
