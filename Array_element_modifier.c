#include<stdio.h>
int main (){
	int my_lockers[5]={10,20,30,40,50};
	int i;
	printf("-----ARRAY SCANNER PLAYGROUND-----\n");
	for(i=0;i<5;i++){

    
	my_lockers[i]=my_lockers[i]*2;
	   }
	for(i=0;i<5;i++){
		printf("LOCKER INDEX[%d] ----> CONTAINS VALUE :%d\n",i,my_lockers[i]);
	}
	
	return 0;
}
