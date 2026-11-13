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