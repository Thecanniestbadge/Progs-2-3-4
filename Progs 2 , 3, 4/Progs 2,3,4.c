// Programmer:		Thecanniestbadge
// Date:			7/12/2023
// Program Name:	Progs 2, 3, 4
// Chapter:			Functions
// Description:		This program provides a menu to choose and run programs 
//                  from chapters 2, 3, and 4. It will continue to show the menu 
//                  until the user chooses to exit.

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

// Function to split a double into integer and decimal parts
void SplitDouble() {
    double num;
    printf("\n"); // Blank line
    printf("Enter a number that includes a decimal point: ");
    scanf("%lf", &num);
    int integerPart = (int)num;
    double decimalPart = num - integerPart;
    printf("The integer part of %.6f is %d.\n", num, integerPart);
    printf("The decimal part of %.6f is %.6f.\n\n", num, decimalPart);
}

// Function to convert seconds into minutes and hours
void MinutesHoursDays() {
    double seconds;
    printf("\n"); // Blank line
    printf("Enter the number of seconds: ");
    scanf("%lf", &seconds);
    printf("\n"); // Blank line
    if (seconds <= 0) {
        printf("Invalid input. Number of seconds must be greater than 0.\n");
        return;
    }
    double minutes = seconds / 60;
    double hours = minutes / 60;
    printf("The number of seconds you entered, %.0f, is %.2f minutes.\n", seconds, minutes);
    printf("The number of seconds you entered, %.0f, is %.2f hours.\n\n", seconds, hours);
}

// Function to calculate calories burned
void CaloriesBurned() {
    int minutes;
    printf("\n"); // Blank line
    printf("You burn 3.9 calories every minute you run.\n");
    printf("This shows how many calories you burn if you ran for 10 to 30 minutes.\n");

    // Using a while loop
    printf("\n\tMinutes Calories\n");
    printf("Using a while loop\n");
    minutes = 10;
    while (minutes <= 30) {
        printf("\t   %d      %.2f\n", minutes, minutes * 3.9);
        minutes += 5;
    }

    // Using a do-while loop
    printf("\n"); // Blank line
    printf("Using a do-while loop\n");
    minutes = 10;
    do {
        printf("\t   %d      %.2f\n", minutes, minutes * 3.9);
        minutes += 5;
    } while (minutes <= 30);

    // Using a for loop
    printf("\n"); // Blank line
    printf("Using a for loop\n");
    for (minutes = 10; minutes <= 30; minutes += 5) {
        printf("\t   %d      %.2f\n", minutes, minutes * 3.9);
    }

    printf("\n");
}

// Function to display the menu and return the user's choice
int displayMenu() {
    int choice;
    printf("\nProgs 2, 3, 4 Menu\n");
    printf("------------------------\n");
    printf("2 - Split Double\n");
    printf("3 - Minutes, Hours, Days\n");
    printf("4 - Calories Burned\n");
    printf("\n"); // Blank line
    printf("Enter a choice (-1 to quit): ");
    scanf("%d", &choice);
    return choice;
}

// Function to execute the selected program
void runProgram(int choice) {
    switch (choice) {
    case 2:
        SplitDouble();
        break;
    case 3:
        MinutesHoursDays();
        break;
    case 4:
        CaloriesBurned();
        break;
    default:
        break;
    }
}

int main(void)
{
    int choice;
    do {
        choice = displayMenu();
        runProgram(choice);
    } while (choice >= 0);
    printf("\nGood bye!\n");
    printf("\n"); // Blank line
    return 0;
} // end main()
