#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main()
{
    int i, index, key;
    char s[1000];
    cin >> s;
    cin >> key;
    for (i = 0; i < strlen(s); i++)
    {
        if (isalpha(s[i]))
        {
            if (isupper(s[i]))
                index = (int(s[i]) - 65 + key) % 26 + 65;
            else
                index = (int(s[i]) - 97 + key) % 26 + 97;
            cout << (char)index;
        }
        else if (isdigit(s[i]))
        {
            index = (int(s[i]) - 48 + key) % 10 + 48;
            cout << (char)index;
        }
        else
            cout << s[i];
    }
}