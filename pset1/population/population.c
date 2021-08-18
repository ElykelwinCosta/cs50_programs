#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int initialPopulation, finalPopulation, years = 0, population, borns, deaths;
    do
    {
        initialPopulation = get_int("What's the initial population? ");    
    }
    while (initialPopulation < 9);
    
    
    // TODO: Prompt for end size
    do
    {
        finalPopulation = get_int("What's the final population? ");
    }
    while (finalPopulation < initialPopulation);
    

    // TODO: Calculate number of years until we reach threshold
    population = initialPopulation;
    
    while (population < finalPopulation)
    {
        borns = population / 3;
        deaths = population / 4;
        population += borns - deaths;
        years ++;
    }
    

    // TODO: Print number of years
    printf("Years: %i", years);
}