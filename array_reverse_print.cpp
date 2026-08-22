#include <bits/stdc++.h> 
using namespace std; 
void reverseArray(int array[], int n) 
{ 
    for(int i = n - 1; i >= 0; i--) 
    { 
        cout<<array[i]; 
    } 
    cout<< endl;
} 
int main() 
{ 
    int arr[] = {1, 2, 3, 4, 5}; 
    int n = sizeof(arr) / sizeof(int); 
 
    reverseArray(arr, n);
    
    return 0; 
}