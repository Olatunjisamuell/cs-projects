#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int calculate_letters(string text);
int calculate_words(string text);
int calculate_sentences(string text);

int main(void)
{
    // prompt user for text
    string text = get_string("Text: ");


    // compute
    int letters = calculate_letters(text);
    int words = calculate_words(text);
    int sentences = calculate_sentences(text);

    // compute Coleman-Liau index
    float L = (letters / (float)words) * 100;
    float S = (sentences / (float)words) * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);


    // print the text grade
    if (index <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

}

int calculate_letters(string text)
{
    int letters = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

int calculate_words(string text)
{
    int words = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }
    return words + 1;
}

int calculate_sentences(string text)
{
    int sentences = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}
