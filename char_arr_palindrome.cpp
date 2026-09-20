#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(char *word, int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        if (word[start] != word[end])
        {
            cout<<"Not Palindrome";
            return false;
        }
        start++;
        end--;
    }

    cout<<"Yes, Palindrome";
    return true;
}
int main()
{
    char word[] = "racecar";
    int n = strlen(word);

    isPalindrome(word, n);
    return 0;
}