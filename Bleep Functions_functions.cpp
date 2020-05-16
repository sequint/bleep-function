// Function that takes in user input, a word and a text, then stars out the given word when it appears in the text.
#include <iostream>
#include <string>
#include <algorithm>
#include "Bleep Function_functions.h"
using namespace std;

void bleep(string word, string &text)
{
    // Make the word and text strings both lowercase.
    transform(word.begin(), word.end(), word.begin(), tolower);
    transform(text.begin(), text.end(), text.begin(), tolower);

    bool match = false;
    for (int x = 0; x < text.length(); x++)
    {
        for (int y = 0; y < word.length(); y++)
        {
            if (text[x+y] == word[y])
            {
                match = true;
            }
            else
            {
                match = false;
                break;
            }
        }
        if (match)
        {
            for (int y = 0; y < word.length(); y++)
            {
                text[x+y] = '*';
            }
        }
        match = false;
    }

}