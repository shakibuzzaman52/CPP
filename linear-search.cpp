// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int pos = -1;
//     int key;
//     cin >> key;
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             pos = i + 1;
//             cout << pos;
//             break;
//         }
//     }
//     if(pos == -1)
//     {
//         cout<<"Not found";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int linSearch(int array[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(array[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int pos = -1;
    int key;
    cin >> key;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<linSearch(arr, n, key);

    return 0;
}