#include <stdio.h>
#include <stdlib.h>
int is_prime(int);
int main(int argc, char *argv[])
{
	int number;
	scanf("%d",&number);
	if(is_prime(number)){
		printf("此數是質數\n");
	}else{
		printf("此數不是質數\n");
	}
  
  system("PAUSE");	 
  return 0;
}
int is_prime(int num){
	int i;
	if(num==1){
		return 0;
	}else{
		for(i=2;i<num;i++){
			if(num%i==0){
				return 0;
			}
		}
	}
	return 1;
}
