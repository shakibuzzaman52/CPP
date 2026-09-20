#include <bits/stdc++.h>
using namespace std;
void reverse(char *word, int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(word[start], word[end]);
        start++;
        end--;
    }

    cout << word;
}
int main()
{
    char word[] = "shakib";
    int n = strlen(word);

    reverse(word, n);
    return 0;
}