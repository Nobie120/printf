#include "main.h"

/**
 * handle_rot13 - Encrypts string using the ROT13 cipher.
 * @args: Arguments containing the string to be encrypted.
 *
 * Return: The number of characters processed.
 */
int handle_rot13(va_list args)
{
    char *original = va_arg(args, char *);
    int characters = 0;

    while (*original)
    {
        char ciphered = *original;
        
        if ('a' <= ciphered && ciphered <= 'z')
        {
            ciphered = 'a' + (ciphered - 'a' + 13) % 26;
        }
        else if ('A' <= ciphered && ciphered <= 'Z')
        {
            ciphered = 'A' + (ciphered - 'A' + 13) % 26;
        }
        
        write(1, &ciphered, 1);
        original++;
        characters++;
    }

    return characters;
}
