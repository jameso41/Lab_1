#include <stdio.h>

int main()
{

// Declare variables and store the user's age, height and grade
int age;
int grade;
float height;
    // ask the user their age
    printf("How old are you?\n"); 
    scanf("%d", &age); // read the users age and %d will use the integer input
     // ask user their height
    printf("How tall are you in inches?\n"); 
    scanf("%f", &height); // This will read and %d will use the float input
    // ask the user what grade they are in 
    printf("What grade are you currently in?\n"); 
    scanf("%d", &grade); // This will read the user's grade and %d will use the integer input
    
    //display all the informationt that the user entered
    printf("You are %d years old, %.2f inches tall and you are in the %d grade!\n", age, height, grade);

    return 0;
}