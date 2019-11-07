#include <stdio.h>
int main()
{
    // обьявление и определение некоторых переменных
    char firstIntial, middeInitial;
    int number_of_pencils;
    int number_of_notebooks;
    float pencils=0.23;
    float notebooks=2.89;
    float lunchbox=4.99;
    // информация для первого ребенка
    firstIntial = 'J';
    middeInitial = 'R';
    number_of_pencils =7;
    number_of_notebooks=4;

    printf("%c%c need %d pencils, %d notebooks, and 1 lunchbox\n", firstIntial,middeInitial,number_of_pencils,number_of_notebooks); 
    printf("The total cost is $%.2f\n\n", number_of_pencils*pencils+number_of_notebooks*notebooks+lunchbox);
    // информация для второго ребенка
   firstIntial ='A';
   middeInitial = 'J';
   number_of_pencils = 10;
   number_of_notebooks = 3;

   printf("%c%c need %d pencils, %d notebooks, and 1 lunchbox\n", firstIntial,middeInitial,number_of_pencils,number_of_notebooks); 
   printf("The total cost is $%.2f\n\n", number_of_pencils*pencils+number_of_notebooks*notebooks+lunchbox);

    // информация для третьего ребенка
    firstIntial ='M';
    middeInitial = 'T';
    number_of_pencils = 9;
    number_of_notebooks = 2;
    printf("%c%c need %d pencils, %d notebooks, and 1 lunchbox\n", firstIntial,middeInitial,number_of_pencils,number_of_notebooks); 
    printf("The total cost is $%.2f\n\n", number_of_pencils*pencils+number_of_notebooks*notebooks+lunchbox);
    return 0;
}