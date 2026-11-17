// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int sum = 0;
//     int n;
//     cin>> n;

//     // for(int i = 1; i <= n; i++)
//     // {
//     //     sum = sum + i;
//     // }

//     int i = 1;
//     while(i <= n)
//     {
//         sum = sum + i;
//         i++;
//     };

//     cout<< sum;
//     return 0;
// }

// #include <bits/stdc++.h>
// #define PI 3.1416
// using namespace std;
// int main()
// {
//     cout<<PI;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;

//     for(int i = n; i >= 1; i--)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int age = 21;
//     cout<< sizeof(age) << endl;

//     char letter;
//     cout<< sizeof(letter) << endl;

//     string name = "shakib Uz Zaman";
//     cout<< sizeof(name)<< name << endl;

//     bool isadult = true;
//     cout<< sizeof(isadult) << endl;

//     float num = 3.1416;
//     cout<< sizeof(num) << endl;

//     double number;
//     cout<< sizeof(double);

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     const float PI = 3.1416;
//     cout << PI << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long    // Macrows
// using namespace std;
// int main()
// {
//     ll a;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char letter = 'A';
//     cout<<(int)letter << endl;

//     cout<< letter + 1;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cin>> a >> b >> c;

//     int maximum = max(a,max(b,c));
//     cout<< maximum;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cin>> a >> b>> c;
//     if( a > b && a > c)
//     {
//         cout<< a;
//     }
//     else if(b > a && b > c)
//     {
//         cout<< b;
//     }
//     else
//     {
//         cout<< c;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cin>> a >> b >> c;
//     int max = a;
//     if(b > max)
//     {
//         max = b;
//     }
//     if(c > max)
//     {
//         max = c;
//     }

//     cout << max;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;
//     int sum = 0;

//     for(int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }

//     cout<< sum;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int  n;
//     cin>> n;

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= n; j++)
//         {
//             cout<<"*";
//         }
//         cout<< endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;

//     int sum = 0;

//     while(n > 0)
//     {
//         int rem = n % 10;
//         n = n / 10;
//         sum = sum + rem;
//     }

//     cout<< sum;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;

//     int res = 0;
//     while(n > 0)
//     {
//         int rem = n % 10;
//         n = n / 10;

//         res = res * 10 + rem;
//     }

//     cout<< res;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     int i = 1;
//     cin>> n;
//     do
//     {
//         cout<<i++;
//     }
//     while(i <= n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     do
//     {
//         cout<< "Enter number : ";
//         cin>> n;
//         if(n % 10 == 0)
//         {
//             break;
//         }
//         else{
//             cout<<" You enter "<< n << " number. " << endl;
//         }
//     }while(true);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;
//     int prime = 1;
//     for(int i = 2; i < n; i++)
//     {
//         if(n % i == 0)
//         {
//             prime = 0;
//             break;
//         }
//     }

//     if(prime)
//     {
//         cout<< "Prime";
//     }
//     else
//     {
//         cout<<"Not Prime";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;

//     bool isPrime = true;
//     for(int i = 2; i <= sqrt(n); i++)
//     {
//         if(n % i == 0)
//         {
//             isPrime = false;
//             break;
//         }
//     }

//     if(isPrime)
//     {
//         cout<<"Prime";
//     }
//     else
//     {
//         cout<<"Not Prime";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int  n;
//     cin>>n;
//     long long fact = 1;
//     for(int i = n; i > 0; i--)
//     {
//         fact = fact * i;
//     }

//     cout<< fact;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             cout<< "*";
//         }
//         cout<< endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;

//     for(int i = 4; i > 0; i--)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<< endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         cout << "*";

//         if (i == 1 || i == n)
//         {
//             cout<< "***";
//         }
//         else
//         {
//             cout<< "   ";
//         }

//         cout << "*";
//         cout<< endl;

//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;
//     for(int i = n; i > 0; i--)
//     {
//         for(int j = 1; j < i; j++)
//         {
//             cout<<" ";
//         }

//         for(int j = i; j <= n; j++)
//         {
//             cout<< "*";
//         }

//         cout<< endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;
//     int  num = 1;

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             cout<<num++;
//         }
//         cout<< endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= n - i; j++)
//         {
//             cout<< " ";
//         }
//         for(int j = 1; j <= 2*i - 1; j++)
//         {
//             cout<< "*";
//         }

//         cout<< endl;
//     }

//     for(int i = n; i > 0; i--)
//     {
//         for(int j = 1; j <= n - i; j++)
//         {
//             cout<< " ";
//         }
//         for(int j = 1; j <= 2*i - 1; j++)
//         {
//             cout<< "*";
//         }

//         cout<< endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;

//     for(int i = 1; i <= n; i++)
//     {

//         cout<< "*";

//         for(int j = 1; j <= i - 1; j++)
//         {
//             cout<<"*";
//         }

//         for(int j = 1; j <= 2*(n - i); j++)
//         {
//             cout<<" ";
//         }

//         for(int j = 1; j <= i - 1; j++)
//         {
//             cout<<"*";
//         }

//         cout<< "*";

//         cout<< endl;
//     }

//     for(int i = n; i > 0; i--)
//     {

//         cout<< "*";

//         for(int j = 1; j <= i - 1; j++)
//         {
//             cout<<"*";
//         }

//         for(int j = 1; j <= 2*(n - i); j++)
//         {
//             cout<<" ";
//         }

//         for(int j = 1; j <= i - 1; j++)
//         {
//             cout<<"*";
//         }

//         cout<< "*";

//         cout<< endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void print()
// {
//     cout<<"Shakib";
// }
// void asistant()
// {
//     print();
//     cout<<"Nishat";
// }
// int main()
// {
//     asistant();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int  sum(int a, int b)
// {
//     int sum = a + b;
//     return sum;
// }
// int main()
// {
//     int a, b;
//     a = 5;
//     b = 6;
//     cout<<sum(a, b);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int fact(int n)
// {
//     int fact = 1;
//     for(int i = n; i > 0; i--)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }
// int main()
// {
//     int n;
//     cin>> n;
//     cout<<fact(n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int fact(int n)
// {
//     int fact = 1;
//     for(int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }

// int calculation(int n, int r)
// {
//     int result = fact(n)/(fact(r)*fact(n - r));
//     return result;
// }
// int main()
// {
//     int n, r;
//     cin>> n >> r;

//     cout<<calculation(n, r);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// bool isPrime(int n)
// {
//     if(n < 2)
//     {
//         return false;
//     }
//     for(int i = 2; i < n; i++)
//     {
//         if(n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// void allPrime(int n)
// {
//     for(int i = 2; i < n; i++)
//     {
//         if(isPrime(i) == true)
//         {
//             cout<<i<<" ";
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin>> n;
//     allPrime(n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int bin(int n)
// {
//     int reverse = 0, decimal = 0;

//     while (n > 0)
//     {
//         int last = n % 10;
//         n = n / 10;
//         reverse = reverse * 10 + last;  // 1101
//     }

//     while (reverse > 0)
//     {
//         int last = reverse % 10;
//         reverse = reverse / 10;
//         decimal = 2 * decimal + last;
//     }
//     return decimal;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << bin(n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int decimal(int n)
// {
//     int rev = 0, count = 0, bin = 0;
//     while(n > 0)
//     {
//         int last = n % 2;
//         n = n / 2;
//         rev = rev * 10 + last;
//         count++;
//     }
//     for(int i = 1; i <= count; i++)
//     {
//         int last = rev % 10;
//         rev = rev / 10;
//         bin = bin * 10 + last;
//     }

//     return bin;
// }
// int main()
// {
//     int n;
//     cin>> n;
//     cout<< decimal(n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int bin(int n)
// {
//     int decimal = 0;

//     int pow = 1;
//     while (n > 0)
//     {
//         int last = n % 10;
//         n = n / 10;
//         decimal = decimal + last * pow;
//         pow = pow * 2;
//     }

//     return decimal;
// }
// int main()
// {
//     int n;
//     cin >> n; // 1011
//     cout << bin(n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int * ptr = &a;
//     int ** pptr = &ptr;
//     cout<< pptr << " = " << &ptr << endl;
//     cout<< ptr << endl;
//     cout<< &a << endl;

//     cout<< *ptr;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void passAdress(int* ptr)
// {
//     *ptr = 20;
//     cout<<*ptr << endl;
// }
// int main()
// {
//     int a = 10;
//     passAdress(&a);
//     cout<< a << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int &b = a;

//     cout<< a << b;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int name[5] = {1, 2, 3, 4, 5};
//     int n = sizeof(name)/ sizeof(int);
//     for(int i = 0; i < n; i++)
//     {
//         cout<<name[i] << " ";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int marks[n];

//     for(int i = 0; i < n; i++)
//     {
//         cin>>marks[i];
//     }

//     int max = INT_MIN;
//     for(int i = 0; i < n; i++)
//     {
//         if(marks[i] > max)
//         {
//             max = marks[i];
//         }
//     }

//     cout<< max;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void func(int arr[])
// {
//     arr[0] = 20;
// }
// int main()
// {
//     int arr[] = {1, 22, 3, 4, 5};
//     func(arr);

//     cout<<arr[0];
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void printarr(int arr[], int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<",";
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr)/ sizeof(int);

//     printarr(arr, n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int linSer(int* arr, int n, int key)
// {
//     for(int i = 0; i< n; i++)
//     {
//         if(key == arr[i])
//         {
//             return true;
//         }
//     }

//     return false;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int n = sizeof(arr) / sizeof(int);
//     int key = 3;

//     cout<<linSer(arr, n, key);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(int);

//     for(int i = n - 1; i >= 0; i--)
//     {
//         cout<<arr[i];
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(int);

//     int arrcopy[n];

//     for(int i = 0; i < n; i++)
//     {
//         int j = n - 1 - i;
//         arrcopy[i] = arr[j];
//     }

//     for(int i = 0; i< n; i++)
//     {
//         arr[i] = arrcopy[i];
//     }

//     for(int i = 0; i< n; i++)
//     {
//         cout<< arr[i];
//     }

// }

// #include <bits/stdc++.h>
// using namespace std;
// void printarr(int* arr, int n)
// {
//     for(int i = 0; i < n/2; i++)
//     {
//         int j = n - 1 - i;
//         swap(arr[i], arr[j]);

//     }

//     for(int i = 0; i < n; i++)
//     {
//         cout<<arr[i];
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(int);

//     printarr(arr, n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(int);
//     int start = 0;
//     int end = n - 1;

//     while(start <= end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }

//     for(int i = 0; i < n; i++)
//     {
//         cout<<arr[i];
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[] = {2, 5, 7, 9, 11};
//     int n = sizeof(arr) / sizeof(int);
//     int key = 9;

//     int start = 0;
//     int end = n - 1;
//     while(start <= end)
//     {
//         int mid = (start + end)/2;
//         if(arr[mid] == key)
//         {
//             cout<<mid;
//             break;
//         }
//         else if(arr[mid] > key)
//         {
//             end = mid - 1;
//         }
//         else if(arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             cout<<"Not Found";
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void subArrPrint(int *arr, int n)
// {
//     int maxsum = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum = sum + arr[j];
//             if (sum > maxsum)
//             {
//                 maxsum = sum;
//             }
//         }
//     }

//     cout << maxsum;
// }

// int main()
// {
//     int arr[6] = {2, -3, 6, -5, 4, 2};
//     subArrPrint(arr, 6);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void subArrPrint(int * arr, int n)
// {
//     int maxsum = INT_MIN;
//     int sum = 0;
//     for(int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//         maxsum = max(maxsum, sum);
//         if(sum < 0)
//         {
//             sum = 0;
//         }
//     }

//     cout<< sum;
// }
// int main()
// {
//     int arr[6] = {2, -3, 6, -5, 4, 2};
//     subArrPrint(arr, 6);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void bestbuyday(int *arr, int n)
// {
//     int maxProfit = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int buymin = INT_MAX;
//         int sell = arr[i];
//         for (int j = 1; j < i; j++)
//         {
//             if (buymin > arr[j])
//             {
//                 buymin = arr[j];
//             }
//         }

//         int profit = sell - buymin;
//         maxProfit = max(maxProfit, profit);
//     }

//     cout<< maxProfit;
// }
// int main()
// {
//     int arr[] = {7, 1, 5, 3, 6, 4};
//     int n = sizeof(arr) / sizeof(int);

//     bestbuyday(arr, n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void trapwater(int* arr, int n)
// {
//     int maxTrapwater = 0;
    
    

//     for(int i = 0; i < n; i++)
//     {
//         int rightmax = 0;
//         int leftmax = 0;
//         for(int j = i + 1; j < n; j++)
//         {
//             rightmax = max(rightmax, arr[j]);
//         }
//         for(int j = i - 1; j >= 0; j--)
//         {
//             leftmax = max(leftmax, arr[j]);
//         }
//         int trapwater = max(0, min(rightmax, leftmax) - arr[i]);
//         maxTrapwater = maxTrapwater + trapwater;
//     }

//     cout<< maxTrapwater;
// }
// int main()
// {
//         int arr[] = {4, 2, 0, 6, 3, 2, 5};
//         int n = sizeof(arr) / sizeof(int);

//         trapwater(arr, n);
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char str[10];

//     for(int i = 0; i < 5; i++)
//     {
//         cin>>str[i];
//     }
//     for(int i = 0; i < 5; i++)
//     {
//         cout<< str[i] << end;
//     }

//     cout<<str;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char str[] = "code with harry";
//     cout<< strlen(str);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char str[50];
//     cin.getline(str, 50);

//     cout<< strlen(str) << endl;
//     cout<< str;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void toUpper(char * arr, int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         if(arr[i] >= 'A' && arr[i] <= 'Z')
//         {
//             continue;
//         }
//         else
//         {
//             arr[i] = arr[i] - 'a' + 'A';
//         }
//     }
// }
// int main()
// {
//     char str[] = "ApPle";
//     toUpper(str, strlen(str));

//     cout<<  str;
//     return 0;
// }