// This is the main function page. Gets user input for the bleep function and displays the result.
#include <iostream>
#include <string>
#include "Bleep Function_functions.h"
using namespace std;

int main()
{

    string word,
        text;

    // Get a word that will be sensored from the user and convert the string to lowercase.
    cout << "Enter the word you would like sensored from your text: ";
    getline(cin, word);

    // Get a statement from the user and convert the string to lowercase.
    cout << "Enter the text that will be checked for your word and sensored: ";
    getline(cin, text);

    cout << "Before:\n\n" << text << "\n\n";

    bleep(word, text);

    cout << "After:\n\n" << text << "\n\n";

}