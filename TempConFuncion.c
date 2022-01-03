#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float temperatura(float celsius, int choice);
int menu();

main()
{
    int opcion;
    float temp, fahr, cel;

    do
    {
        system("cls");
        opcion = menu();

        if (opcion == 1)
        {
            system("cls");
            printf("De Fahrenheit a Celsius.\n\n");
            printf("Ingrese el valor en Celsius: ");
            scanf("%d", &temp);
            fahr = temperatura(temp, opcion);
            printf("En Fahrenheit es: %2.1f\n\n", fahr );
            system("pause");

        }
        if (opcion == 2)
        {
            system("cls");
            printf("De Celsius a Fahrenheit.\n\n");
            printf("Ingrese valor en Fahrenheit: ");
            scanf("%d", &temp);
            cel = temperatura(temp, opcion);
            printf("En Celsius es: %2.1f\n\n", cel);
            system("pause");

        }
    }while(opcion != 0);


}

float temperatura(float celsius, int choice)
{
    float fahr;
    if(choice == 1)
        fahr = (celsius * (9.0 / 5.0)) + 32.0;
    if(choice == 2)
        fahr = (9.0/5.0) * (celsius - 32.0);

    return fahr;
}

int menu()
{
    int opcion;
    printf("Conversor de Celsius a Fahrenheit.\n\n");
    printf("Menu.\n");
    printf("1-Fahrenheit a Celsius.\n");
    printf("2-Celsius a Fahrenheit.\n");
    printf("0-Exit.\n\n");
    printf("Su opcion: ");
    scanf("%d", &opcion);
    return opcion;
}
