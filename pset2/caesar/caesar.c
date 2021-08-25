#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void encrypt();


int main(int argc, string argv[])
{
    
    //Verifica quantidade de argumentos
    if (argc == 2)
    {
        printf("Success\n");
        string arg =  argv[1];
        int key = atoi(arg);
        encrypt(key);
        return 0;
    }
    
    else
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
        
    }
}


void encrypt(int key)
{
    //User input
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    
    //Encryptor
    for (int i = 0, j = strlen(plaintext); i < j; i++)
    {
        
        //Prints symbols and numbers
        if (tolower(plaintext[i]) < 97 || plaintext[i] > 122)
        {
            printf("%c", plaintext[i]);
        }
        
        else
        {
            //Converts uppercase letters to lowercase, chars to ints and applies Caesar's formula
            int form = ((tolower(plaintext[i]) - 97) + key) % 26;
        
            //Calculate letter index in ASCII table and convert to char
            char letter = form + 97;
        
            //Prints capital letters
            if (isupper(plaintext[i]))
            {
                printf("%c", toupper(letter));
        
            }
        
            //Prints lowercase letters
            else
            {
                printf("%c", letter);    
            }    
        }
    }
    printf("\n");
}
