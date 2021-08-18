#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    
    float value;
    int count = 0;
    
    do
    {
        
        value = get_float("What's the value?? ");
    }
    while (value < 0);
        
    
    int cent = round(value * 100);
    
    
    while (cent >= 25)
    {
        
        cent -= 25;
        count ++;
    }
    
    while (cent >= 10)
    {
        
        cent -= 10;
        count ++;
    }
        
    while (cent >= 5)
    {
        
        cent -= 5;
        count ++;
    }
    
    while (cent >= 1)
    {
        
        cent -= 1;
        count ++;
    }
        
    printf("%i\n", count);
}