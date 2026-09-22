#include <stdio.h>
int main() {
	int x;
    int sub;
    int Withdraw;
    int sum;
    int choice;
    int deposit;
int balance=10000;    
int ______________________;
while(x<=3){
printf("ATM MENU\n");
printf("________________________\n");

printf("1:Check Balance\n");

printf("2:Deposit Money\n");

printf("3:Withdraw Money\n");

printf("4:Exit\n");

printf("________________________\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice) {
case 1:{
printf("Your's Current Balance :%d\n",balance);
break;
}
case 2:{
printf("Enter the Amount:"); 
scanf("%d",&deposit);
sum=balance+deposit;
printf("Deposit Succesfully!\n Current Balance = Rs.%d",sum);
break;
    
}
case 3:{
    printf("Enter the Amount:");
scanf("%d",&Withdraw);
if(Withdraw>balance){
    printf("Insufficient Balance!\n");    
}
else {
    sub=balance-Withdraw;
    printf("Withdrawal Successful!\n");
    printf("Remaining Balance = %d",sub);
    break;
}
}
case 4:{
printf("Program Exited Succesfully.\n");
return 0;
}
}
}
    return 0;
}
