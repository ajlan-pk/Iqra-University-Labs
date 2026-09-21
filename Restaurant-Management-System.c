#include <stdio.h>
int main() {
int choice;
int cart_total=0;
int cart_item=0;
int cart_quantities[10]={0};
char menu_names[10][20]={"Burger","Pizza","Zinger Burger","Fries","Shawarma","Sandwich","Pasta","Coffee","Cold Drink","Ice Cream"};
    
do{	    
printf("\n========================================= WELCOME TO BEAST RESTAURANT========================================\n1. View Food Menu\n2. Order Food\n3. View Cart\n4. Remove Item\n5. Generate Bill\n6. Exit\nEnter Choice:");
scanf("%d",&choice);
switch(choice){
 case 1:
    printf("1: Burger        Rs.450  \n2 :Pizza         Rs.1200 \n3: Zinger Burger Rs.650   \n4: Fries         Rs.300 \n5: Shawarma      Rs.250\n6: Sandwich      Rs.500\n7: Pasta         Rs.850\n8: Coffee        Rs.280\n9: Cold Drink    Rs.180\n10: Ice Cream    Rs.350\n");
    break;
 case 2:
 	printf("========== ORDER FOOD ==========\nEnter Food Number:");
 	int FoodChoice;
 	scanf("%d",&FoodChoice);
 	int quantity;
 	printf("\nEnter Quantity:");
 	scanf("%d",&quantity);
 	int price;
    int totalprice; 
 	switch(FoodChoice){
 		case 1:
 			printf("\nYou Selected burger\n");
 			price=450;
 			totalprice=price*quantity;
            printf("Price: Rs.%d\n", price);
printf("Quantity:%d\n", quantity);
printf("Total Price: Rs.%d\n", totalprice);
 			break;
 			case 2:
 				printf("You Selected Pizza\n");
 				price=1200;
 				totalprice=price*quantity;
 				printf("Price: Rs.%d\n", price);
printf("Quantity:%d\n", quantity);
printf("Total Price: Rs.%d\n", totalprice);
 				break;
 				case 3:
 					printf("You Selected Zinger Burger\n");
 					price=650;
 					totalprice=price*quantity;
 					printf("Price: Rs.%d\n", price);
printf("Quantity:%d\n", quantity);
printf("Total Price: Rs.%d\n", totalprice);
 					break;
 					case 4:
 						printf("You Selected Fries\n");
 						price=300;
 						totalprice=price*quantity;
 						printf("Price: Rs.%d\n", price);
printf("Quantity:%d\n", quantity);
printf("Total Price: Rs.%d\n", totalprice);
 						break;
 						case 5:
 							printf("You Selected Shawarma\n");
 							price=250;
 							totalprice=price*quantity;
 							printf("Price: Rs.%d\n", price);
printf("Quantity:%d\n", quantity);
printf("Total Price: Rs.%d\n", totalprice);
 							break;
 							case 6:
 								printf("You Selected Sandwich\n");
 								price=500;
 								totalprice=price*quantity;
 								printf("Price: Rs.%d\n", price);
printf("Quantity:%d\n", quantity);
printf("Total Price: Rs.%d\n", totalprice);
 								break;
 								case 7:
 									printf("You Selected Pasta\n");
 									price=850;
 									totalprice=price*quantity;
 									printf("Price: Rs.%d\n", price);
printf("Quantity:%d\n", quantity);
printf("Total Price: Rs.%d\n", totalprice);
 									break;
 									case 8:
 										printf("You Selected Coffee\n");
 										price=280;
 										totalprice=price*quantity;
 										printf("Price: Rs.%d\n", price);
printf("Quantity:%d\n", quantity);
printf("Total Price: Rs.%d\n", totalprice);
 										break;
 										case 9:
 											printf("You Selected Cold Drink\n");
 											price=180;
 											totalprice=price*quantity;printf("Price: Rs.%d\n", price);
printf("Quantity:%d\n", quantity);
printf("Total Price: Rs.%d\n", totalprice);
 											
 											break;
 											case 10:
 												printf("You Selected Ice Cream\n");
 												price=350;
 												totalprice=price*quantity;
 												printf("Price: Rs.%d\n", price);
                                                printf("Quantity:%d\n", quantity);
                                                printf("Total Price: Rs.%d\n", totalprice);
 												break;
 												default:
 													printf("Invalid Food Choice\n");
	 }
	 
	 cart_total=cart_total+totalprice;
	 cart_item=cart_item+quantity;
	 cart_quantities[FoodChoice - 1]= cart_quantities[FoodChoice - 1] + quantity;
 	break;
 case 3:
 	printf("\n===== YOUR CART =====\n");
 	if (cart_item==0){
 		printf("Your Cart Is Empty ! Please order something First.\n");
    }
    else{
    	 printf("\n--- Ordered Items List ---\n");
    	 int i;
        for(i = 0; i < 10; i++) {
            if(cart_quantities[i] > 0) {
                printf("%s -> Quantity: %d\n",menu_names[i], cart_quantities[i]);
            }
        }
        printf("\n--------------------------\n");
    	printf("Total Items in Cart: %d\n",cart_item);
    	printf("Current Subtotal: RS:%d\n",cart_total);
	}
	printf("===========================================\n");
	 
    break;
 case 4:{
   cart_total=0;
   cart_item=0;
   int j;
   for(j=0;j<10;j++){
   	cart_quantities[j]=0;
   }
printf("\nCart has beeen reset succesfully!\n");
 	
    break;
	}
 case 5:{
 	float tax;
 	float final_bill;
    if(cart_item==0){
    	printf("Cart Is Empty !");
	}
	else
	{
	tax=cart_total*0.05;
	final_bill=cart_total+tax;
	    printf("\n===================================\n");
   printf("       BEAST RESTAURANT INVOICE      \n");
    printf("===================================\n");
    int k;
    for(k=0;k<10;k++){
    	if(cart_quantities[k]>0){
    		printf("%s --> %d\n",menu_names[k],cart_quantities[k]);
		}
	}
    printf("Total Items:      %d\n", cart_item);
    printf("Subtotal:         Rs.%d\n", cart_total);
        printf("GST Tax (5%%):     Rs.%.2f\n", tax);
    printf("-----------------------------------\n");
    printf("TOTAL PAYABLE:    Rs.%.2f\n", final_bill);
        printf("===================================\n");
	}
    break;}
 case 6:
    printf("Thank You! Visit Again.\n");
    break;
 default:		  
    printf("Invalid Choice\n"); 
    
}

}
while(choice!=6);

return 0;
}
