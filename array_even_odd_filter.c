#include <stdio.h>
int main() {
    // 10 mixed numbers ka ek simple array
    int numbers[10] = {12, 7, 45, 22, 9, 18, 33, 40, 5, 50};
    int i;

    printf("--- EVEN NUMBER GATEKEEPER ---\n");
    for(i=0;i<10;i++){
      if(numbers[i] % 2 == 0){
        printf("%d is an Even Number!\n",numbers[i]);
      }
      else{
        printf("ODD\n");

      }



    }

    return 0;
}
;
