#include stdio.h
#include conio.h

int main()
{
    printf("Let's start coding");
    int first_number, second_number, temp_value;
    printf("Enter first number: ");
    scanf("%d", &first_number);
    printf("Enter second number: ");
    scanf("%d", &second_number);
    printf("Before swap, \nFirst number is: %d,\t Second number is: %d", first_number, second_number);
    temp_value = first_number;
    first_number = second_number;
    second_number = temp_value;
    printf("After swap, \nFirst number is: %d,\t Second number is: %d", first_number, second_number);
    printf("Program ends here..!!");
    return 0;
}