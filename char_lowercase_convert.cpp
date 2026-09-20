#include <bits/stdc++.h>
using namespace std;
void toLower(char * word, int n)
{
    for(int i = 0; i < n; i++)
    {
        char ch = word[i];
        if(ch >= 'a' && ch <= 'z')
        {
            continue;
        }
        else
        {
            word[i] = ch - 'A' + 'a';
        }
    }

    cout<< word;
}
int main()
{
    char word[] = "ApPle";
    int n = strlen(word);

    toLower(word, n);

    return 0;
}