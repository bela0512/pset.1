#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) 
{
    float input;
    int change;
    int counter = 0;
    
    do {
        printf("How much change is owed? ");
        input = get_float();
    } while(input < 0);
    
    change = round(input * 100);
    
    counter += change / 25;
    change %= 25;
    
    counter += change / 10;
    change %= 10;
    
    counter += change / 5;
    change %= 5;
    
    counter += change / 1;
    change %= 1;
    
    printf("%i\n",counter);

    
}
