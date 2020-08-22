#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void isHighLevel(const char* langs[]);
int checkHigh(char* string);

int main()
{
    const char* langs[] = {"Python", "JavaScript", "C", "C++", "Ruby"};
    isHighLevel(langs);
    return 0;
}

void isHighLevel(const char* langs[])
{
    for (int i = 0; sizeof(langs) / sizeof(langs[0]); i++)
    {
        int res = checkHigh(langs[i]);
        switch (res)
        {
        case 1:
            printf("%s is not high level!\n", langs[i]);
            break;
        case 0:
            printf("%s is high level!\n", langs[i]);
            break;
        }
    }
}

int checkHigh(char* string)
{
    const char* highLangs[] = {"Python", "JavaScript", "Ruby", "Java"};
    int i = 0;
    while (i < sizeof(highLangs) / sizeof(highLangs[0]))
    {
        int res = strcmp(highLangs[i], string);
        if (res == 0)
        {
            return 0;
        }
        else
        {
            i++;
        }
    }
    return 1;
}
