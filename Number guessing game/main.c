#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int max = 10;
	int choice;
	do{
		printf("\nMenu");
		printf("\n Press 1 to play a game.");
		printf("\n Press 2 to change the max number.");	
		printf("\n Press 3 to quit.\n");
		scanf("%d" , &choice);
		if (choice != 1 && choice != 2 && choice != 3){
			printf("Enter a number between 1-3.\n");
		}
		if (choice == 1){
			// Using the formula randomNo = (rand() % (upper - lower + 1)) + lower;
			int randomNumber = rand() % (max + 1); 
			int user_number;
			do{
				printf("\n Enter a number : ");
				scanf("%d", &user_number);
				
				if (user_number < randomNumber){
					printf("\n You are too low.");
				}
				
				if (user_number > randomNumber){
					printf("\n You are too high");
				}
				if (randomNumber == user_number){
					printf(" Correct Answer! You won!.\n");
					break;
				}
			}
			while(user_number != randomNumber || user_number != 'q');
		}
		if (choice == 2){
			// Using the formula randomNo = (rand() % (upper - lower + 1)) + lower;
			int randomNumber = rand() % (max + 1);
			int user_choice;
			do{
				printf("\nThe maximum value is %d", max);
        printf("\n Enter a number : ");
				scanf("%d", &user_choice);
				if (user_choice > max) {
          printf("\nWrong number choose number less than %d", max);
        }
        if (user_choice < 0) {
          printf("Choose potive number!");
        }
				if (user_choice < randomNumber){
					printf("\n You are too low.");
				}
				
				if (user_choice > randomNumber){
					printf("\n You are too high");
				}
				
				if (randomNumber == user_choice){
					printf(" Correct Answer! You won!.\n");
					break;
				}
			}
			while(user_choice != randomNumber);
		}
		
	}while (choice != 3);
	if (choice == 3){
    printf("Thank you for playing!");
  }
	return 0;
  if (choice == 3){
    printf("Thank you for playing!");
  }
}
