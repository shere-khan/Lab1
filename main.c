#include <stdio.h>

#define CALS_PER_GR_PROTEIN 4
#define CALS_PER_GR_CARB 4
#define CALS_PER_GR_FAT 9

int main() {
    int calories_from_protein;
    int calories_from_carbs;
    int calories_from_fat;
    printf("Please enter the amount of protein (in grams) you've consumed: ");
    scanf("%d", &calories_from_protein);
    printf("\n");
    printf("Please enter the number of carbs (in grams) you've consumed: ");
    scanf("%d", &calories_from_carbs);
    printf("\n");
    printf("Please enter the amount of fat (in grams) you've consumed: ");
    scanf("%d", &calories_from_fat);
    printf("\n");

    int total_calories = calories_from_carbs*CALS_PER_GR_CARB +
                         calories_from_fat*CALS_PER_GR_FAT +
                         calories_from_protein*CALS_PER_GR_PROTEIN;

    printf("You ate %d calories of food!", total_calories);

    return 0;
}
