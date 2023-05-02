#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // check if the arguments are two
    if (argc != 2)
    {
        printf("can not be ciphered\n");
        return 1;
    }
    // declaring that the value of k is the interger value of the second (string) argument
    int k = atoi(argv[1]);
    if (k < 0)
    {
        printf("please enter a valid number\n");
        return 1;
    }

    // prompt the user for the text
    string text = get_string("please Enter your text: ");

    printf("ciphertext:");

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // check if the character is a letter
        if (isalpha(text[i]))
        {
            // check if the letter is uppercase
            if (isupper(text[i]))
            {
                // converting the letter to number and cipher it
                char cipher_num_capital = ((text[i] - 65 + k) % 26) + 65;

                // print the letter of the number as a character
                printf("%c", cipher_num_capital);
            }

            // check if the letter is lowercase
            if (islower(text[i]))
            {
                // converting the letter to number and cipher it
                char cipher_num_small = ((text[i] - 97 + k) % 26) + 97;

                // print the letter of the number as character
                printf("%c", cipher_num_small);
            }
        }
        else
        {
            // in case if the character in not a letter then print it as it is
            printf("%c", text[i]);
        }
    }

    printf("\n");
}