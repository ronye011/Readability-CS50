#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int word(string a);
int letter(string b);
int sentence(string c);
int n;
int main(void)
{
    string Text = get_string("Text: ");
    n = strlen(Text);
    // Descobre o numero de letras, palavras e frases.
    int l = letter(Text);
    int w = word(Text);
    int s = sentence(Text);
    // Realiza o calculo final
    float L = (float) l / (float) w * 100;
    float S = (float) s / (float) w * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    printf("%f\n", index);
    if (index <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index <= 2.5)
    {
        printf("Grade 2\n");
    }
    else if (index <= 3.5)
    {
        printf("Grade 3\n");
    }
    else if (index <= 4.5)
    {
        printf("Grade 4\n");
    }
    else if (index <= 5.5)
    {
        printf("Grade 5\n");
    }
    else if (index <= 6.5)
    {
        printf("Grade 6\n");
    }
    else if (index <= 7.5)
    {
        printf("Grade 7\n");
    }
    else if (index <= 8.5)
    {
        printf("Grade 8\n");
    }
    else if (index <= 9.5)
    {
        printf("Grade 9\n");
    }
    else if (index <= 10.5)
    {
        printf("Grade 10\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
}
// Palavras
int word(string a)
{
    int w = 0;
    for (int i = 0; i < n; i++)
    {
        if (isblank(a[i]))
        {
            w++;
        }
    }
    w++;
    return w;
}
// Letras
int letter(string b)
{
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        if (isupper(b[i]))
        {
            l++;
        }
        else if (islower(b[i]))
        {
            l++;
        }
    }
    return l;
}
// Frases
int sentence(string c)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i] == '?' || c[i] == '.' || c[i] == '!')
        {
            s++;
        }
    }
    return s;
}
