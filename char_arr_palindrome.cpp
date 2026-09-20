#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(char *word, int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        if (word[start] != word[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    char word[] = "racecar";
    int n = strlen(word);

    cout << isPalindrome(word, n);
    return 0;
}