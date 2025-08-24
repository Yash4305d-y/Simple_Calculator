#include <stdio.h>
#include <math.h>

void print_menu();
double divison(double a, double b);
double modulus(double c, double d);
double multi(double, double);

double multi(double a, double b){
    return a*b;
    
}
double modulus(double c, double d)
{
    if (d == 0)
    {
        printf(" \n");
        printf("\"Invalid Argument\"\n");
        return NAN;
    }
    else
    {
        return (int)c % (int)d;
    }
}

double divison(double a, double b)
{
    if (b == 0)
    {
        printf(" \n");
        printf("\"Invalid Argument\"\n");
        return NAN;
    }
    else
    {
        return a / b;
    }
}

void print_menu()
{
    printf("\n----------------------------------");
    printf("\nWelcome to simple calculator\n");
    printf("\nChoose one of the following options:\n");
    printf("1.Add\n2.Substract\n3.Multiply\n4.Divide\n5.Modulus\n6.Exit\n");
    printf("Now enter your choice:- ");
}

int main()
{
    int choice;
    double first, second, result;
    while (1)
    {
        print_menu();
        scanf("%d", &choice);
        if (choice == 6)
        {
            break;
        }
        if (choice < 1 || choice > 6)
        {
            printf("\'ERORR\' Please choose a valid choice \n");
            continue;
        }

        printf(" \n");

        printf("Enter the first number:- ");
        scanf("%lf", &first);
        printf("Enter the second number:- ");
        scanf("%lf", &second);
        switch (choice)
        {
        case 1:
            result = first + second;
            break; // add
        case 2:
            result = first - second;
            break; // substract
        case 3:
            result = multi(first,second);
            break; // multiply
        case 4:
            result = divison(first, second);
            break; // divide
        case 5:
            result = modulus(first, second);
            break; // modulus
        }

        printf(" \n");
        if (!isnan(result))
        {
            printf("Result of operation is %.2f \n", result);
        }
    }

    return 0;
}
