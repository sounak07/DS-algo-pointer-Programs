#include <bits/stdc++.h>
using namespace std;

char *mychar(char *str, char delim)
{
    static char *input = NULL;
    if (str != NULL)
    {
        input = str;
    }

    if (input == NULL)
    {
        return NULL;
    }

    char *output = new char[strlen(input) + 1];
    int i;

    for (i = 0; i < input[i] != '\0'; i++)
    {
        if (input[i] != delim)
        {
            output[i] = input[i];
        }
        else
        {
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }

    input = NULL;
    output[i] = '\0';
    return output;
}

int main()
{

    char str[] = " Hi, I'm batman.I am a vigilante.";

    char *ptr;

    ptr = mychar(str, '.');

    while (ptr != NULL)
    {
        cout << ptr << endl;
        ptr = mychar(NULL, '.');
    }
}
