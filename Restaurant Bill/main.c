#include <stdio.h>
int main(){
    float mealCost,tax,tip,totalCost;
    float Salad = 9.95;
    float Soup = 4.55;
    float Sandwich = 13.25;
    float Pizza = 22.35;
    //Ask user enter the cost of the meal from the four meals
    printf("Enter the cost of the meal (cost of the Salad, Soup, Sandwich, or Pizza): ");
    scanf("%f", &mealCost); 
    printf("Enter tax percent: ");
    scanf("%f",&tax);
    printf("Enter tip percent: ");
    scanf("%f", &tip);
    printf("\nTotal Bill\n");
    printf("mealCost: $%.2f\n",mealCost); 
    float tax_amount = (tax/100)*mealCost;
    printf("Tax: $%.3f\n", tax_amount); //print tax amount = tax% / 100, result * mealCost
    float tip_amount = (tip/100)*mealCost;
    printf("Tip: $%.3f \n", tip_amount); // print tip amount same as tax amount
    totalCost = mealCost + tax_amount + tip_amount; // calculate total
    printf("Total Cost: %.2f", totalCost);//print total
    return 0;
}
