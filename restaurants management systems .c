#include <stdio.h>
int main() {
int choice;
int cart_total=0;
int cart_item=0;

    
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
	 
 	break;
 case 3:
 	printf("\n===== YOUR CART =====\n");
 	if (cart_item==0){
 		printf("Your Cart Is Empty ! Please order something First.\n");
    }
    else{
    	printf("Total Items in Cart: %d\n",cart_item);
    	printf("Current Subtotal: RS:%d\n",cart_total);
	}
	printf("===========================================\n");
	 
    break;
 case 4:
    printf("Remove Item Selected\n");
    break;
 case 5:
    printf("Generate Bill Selected\n");
    break;
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
