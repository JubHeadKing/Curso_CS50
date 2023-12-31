// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include "string.h"
#include "stdlib.h"
#include "strings.h"
#include "stdio.h"

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;
int countWord = 0;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    int hashNum = hash(word);
    node *cursor = table[hashNum];

    while (cursor != NULL)
    {
        if (strcasecmp(cursor-> word, word) == 0)
        {
            return true;
        }
        cursor = cursor-> next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    FILE *DictFile = fopen(dictionary, "r");

    if (DictFile == NULL)
    {
        return false;
    }

    char str[LENGTH + 1];
    while (fscanf(DictFile, "%s", str) != EOF)
    {
        node *temp = malloc(sizeof(node));
        if (temp == NULL)
        {
            return false;
        }

        strcpy(temp-> word, str);
        int hashNum = hash(str);

        if (table[hashNum] == NULL)
        {
            temp-> next = NULL;
        }
        else
        {
            temp-> next = table[hashNum];
        }
        table[hashNum] = temp;

        countWord += 1;
    }
    fclose(DictFile);

    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return countWord;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    for (int i = 0; i < N; i++)
    {
        node *nodePtr = table[i];

        while (nodePtr != NULL)
        {
            node *deleteMe = nodePtr;
            nodePtr = nodePtr-> next;
            free(deleteMe);
        }
        table[i] = NULL;
    }
    return true;
}
