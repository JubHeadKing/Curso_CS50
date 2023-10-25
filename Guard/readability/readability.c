#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string textos);
int count_words(string words);
int count_sentences(string sentences);

float promedioLetters(float Letras, float Palabras);
float promedioSentences(float Oraciones, float Palabras);

int grado(int index);

int main(void)
{
    float index;

    string texto = get_string("Texto: ");

    int Letters = count_letters(texto);
    int Words = count_words(texto);
    int Sentences = count_sentences(texto);

    float L = promedioLetters(Letters, Words);
    float S = promedioSentences(Sentences, Words);

    index = (0.0588 * L) - (0.296 * S) - 15.8;
    grado(round(index));

}

int count_letters(string textos)
{
    int sumaLetra = 0;
    int cont = 0;
    for (int i = 0; i < strlen(textos); i++)
    {
        if (isalpha(textos[i]))
        {
            cont = tolower(textos[i]) / 'a';
            sumaLetra = sumaLetra + cont;
        }
    }

    return sumaLetra;
}

int count_words(string words)
{
    int sumawords = 0;
    for (int i = 0; i < strlen(words); i++)
    {
        if (isspace(words[i]))
        {
            sumawords++;
        }
        else
        {
            continue;
        }
    }
    sumawords += 1;
    return sumawords;
}


int count_sentences(string sentences)
{
    int sumaSentences = 0;

    for (int i = 0; i < strlen(sentences); i++)
    {
        if (sentences[i] == '.' || sentences[i] == '!' || sentences[i] == '?')
        {
            sumaSentences++;
        }
    }

    return sumaSentences;
}

float promedioLetters(float Letras, float Palabras)
{
    return (Letras / (float) Palabras) * 100;
}

float promedioSentences(float Oraciones, float Palabras)
{
    return (Oraciones / (float) Palabras) * 100;
}

int grado(int index)
{
    if (index > 15)
    {
        printf("Grade 16+\n");
    }
    else if (index < 16 && index > 0)
    {
        printf("Grade %d\n", index);
    }
    else
    {
        printf("Before Grade 1\n");
    }
    return 0;
}
