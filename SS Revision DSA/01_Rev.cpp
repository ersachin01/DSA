// // Write a program to print 1 to N natural number

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         cout << i << " ";
//     }
// }

// Write a program to print N to 1 natural number

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     for (int i = n; i >= 1; i--)
//     {
//         cout << i << " ";
//     }
// }

// Write a program tp print sum of n natural numbers

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     cout << "The sum of first " << n << " natural numbers is: " << sum;
// }

// Write a program to print sum of n natural numbers using formula
// Sum = n * (n + 1) / 2

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, sum;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     sum = n * (n + 1) / 2;

//     cout << "The sum of first " << n << " natural number is: " << sum;
// }

// Syntax of while loop
// while (condition)
// {
//     // body of loop
// }

// Write a program to print 1 to N natural number using while loop

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         cout << i << " ";
//         i++;
//     }
// }

// Write a program to print the square pattern using for loop

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         cout << "****" << endl;
//     }
// }

// Write a program to frint the sum digits of a number using while loop 10589

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, sum = 0;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     while (n > 0)
//     {
//         int lastdigit = n % 10;
//         sum += lastdigit;
//         n /= 10; //  n = n / 10
//     }
//     cout << "The sum of digits is: " << sum;
// }

// Write a program to frint the sum digits of a number last digit is odd using while loop 10589

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, sum = 0;
//     cout << "enter the value of n: ";
//     cin >> n;

//     while (n > 0)
//     {
//         int lastdigit = n % 10;
//         if (lastdigit % 2 != 0)
//         {
//             sum += lastdigit;
//         }
//         n /= 10; // n = n / 10
//     }
//     cout << "The sum of odd digits is: " << sum;
// }

// Write a program to print the reverse of a number using while loop

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, reverse = 0;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     while (n > 0)
//     {
//         int lastdigit = n % 10;
//         reverse = reverse * 10 + lastdigit;
//         n /= 10; // n = n / 10
//     }
//     cout << "The reverse of the number is: " << reverse;
// }

// Also print only reverse digits

//     while (n > 0)
//     {
//         int lastdigit = n % 10;
//         cout << lastdigit; // print only reverse digits
//         n /= 10; // n = n / 10
//     }
// }

// Write the concepts of do while loop

// Syntax of do while loop
// do
// {
//     // body of loop
// } while (condition);

// Write a program to print 1 to N natural number using do while loop

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     int i = 1;
//     do
//     {
//         cout << i << " ";
//         i++;
//     } while (i <= n);
// }

// Break statement in loop

// Write a program where user can keep entering a number till they enter multiple of 10 ising do while loop

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     do
//     {
//         cout << "Enter a number: ";
//         cin >> n;

//         if (n % 10 == 0)
//         {
//             break; // exit the loop if the number is a multiple of 10
//         }
//     } while (true); // infinite loop

//     cout << "You entered a multiple of 10. Exiting the program.";
// }

// Continue statement in loop

// Write a program where user can keep entering a number and skip it till they enter multiple of 10 ising do while loop

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     do
//     {
//         cout << "Enter a number: ";
//         cin >> n;

//         if (n % 10 != 0)
//         {
//             continue; // skip the rest of the loop if the number is not a multiple of 10
//         }

//         cout << "You entered a multiple of 10. Exiting the program.";
//         break; // exit the loop if the number is a multiple of 10
//     } while (true); // infinite loop

//     return 0;
// }

// Write a program  to check if a number is prime or composite bruite force method

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     bool isPrime = true;

//     cout << "Enter a number: ";
//     cin >> n;

//     if (n <= 1)
//     {
//         cout << n << " is neither prime nor composite.";
//         return 0;
//     }

//     for (int i = 2; i <= n - 1; i++)
//     {
//         if (n % i == 0)
//         {
//             isPrime = false;
//             break;
//         }
//     }

//     if (isPrime)
//     {
//         cout << n << " is a prime number.";
//     }
//     else
//     {
//         cout << n << " is a composite number.";
//     }

//     return 0;
// }

// WAP It for optimized method prime  or composite

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int n;
//     bool isPrime = true;

//     cout << "Enter a number: ";
//     cin >> n;

//     if (n <= 1)
//     {
//         cout << n << " is neither prime nor composite.";
//         return 0;
//     }

//     for (int i = 2; i <= n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             isPrime = false;
//             break;
//         }
//     }

//     if (isPrime)
//     {
//         cout << n << " is a prime number.";
//     }
//     else
//     {
//         cout << n << " is a composite number.";
//     }

//     return 0;
// }

//                              Loops
//                      (Assignment Questions)
// Question 1 : WAP to find the Factorial of a number entered by the user.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, factorial = 1;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     if (n < 0)
//     {
//         cout << "Factorial is not defined for negative numbers.";
//         return 0;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         factorial *= i; // factorial = factorial * i
//     }
//     cout << "The factorial of " << n << " is: " << factorial;
// }
//

// Question 2 : WAP to print the multiplication table of a number, entered by the user.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     cout << "Multiplication table of " << n << ":" << endl;
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << n << " x " << i << " = " << n * i << endl;
//     }

//     return 0;
// }

// Question 3 : WAP to input a number and check whether the number is an Armstrong
//  number or not. (Armstrong number is a number that is equal to the sum of its own digits raised to the power of the number of digits)

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     int num = n;
//     int cubeSum = 0;

//     while (num > 0)
//     {
//         int lastDig = num % 10;
//         cubeSum += lastDig * lastDig * lastDig;
//         num /= 10;
//     }

//     if (n == cubeSum)
//     {
//         cout << "Armstrong number\n";
//     }
//     else
//     {
//         cout << "NOT an Armstrong number\n";
//     }

//     return 0;
// }

// Question 4 : For a positive N , WAP that prints all the prime numbers from 2 to N.
// (Assume N >= 2)

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     cout << "Prime numbers from 2 to " << n << ":" << endl;
//     for (int i = 2; i <= n; i++)
//     {
//         bool isPrime = true;
//         for (int j = 2; j <= i / 2; j++)
//         {
//             if (i % j == 0)
//             {
//                 isPrime = false;
//                 break;
//             }
//         }
//         if (isPrime)
//         {
//             cout << i << " ";
//         }
//     }

//     return 0;
// }

// Question 5 : For a positive N , WAP that prints the first N Fibonacci numbers.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     int first = 0, second = 1, next;

//     cout << "First " << n << " Fibonacci numbers: ";

//     for (int i = 0; i < n; i++)
//     {
//         if (i <= 1)
//         {
//             next = i;
//         }
//         else
//         {
//             next = first + second;
//             first = second;
//             second = next;
//         }
//         cout << next << " ";
//     }

//     return 0;
// }

//                   Nested Loops

// Question 1 : WAP to print the following pattern for N = 4
// ****
// ****
// ****
// ****

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     // outer loop for rows
//     for (int i = 1; i <= n; i++)
//     {
//         // inner loop for columns
//         for (int j = 1; j <= n; j++)
//         {
//             cout << i; // print the value of i in each column
//         }
//         cout << endl;
//     }

//     return 0;
// }

//      Star Pattern

// Question 1 : WAP to print the following pattern for N = 4
// *
// **
// ***
// ****

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Question 2 : WAP to print the following pattern for N = 4
// ****
// ***
// **
// *

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Question 3 : WAP to print the following pattern for N = 4
//  1
//  12
//  123
//  1234

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << "  ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Write a program to print the following pattern for N;
// A
// BC
// DEF
// GHIJ

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     char ch = 'A';

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << ch << "  ";
//             ch++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Write a program to print the following pattern for N;

//     ****
//     *  *
//     *  *
//     ****

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == 1 || i == n || j == 1 || j == n)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

//  Write a program to print the inverted rotated half pyramid pattern for N;

//     ****
//     ***
//     **
//     *

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Write a program to print floyd's triangle pattern for N;

// 1
// 2 3
// 4 5 6

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, num = 1;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Write a program to print Diamond pattern for N;
//     *
//    ***
//   *****
//    ***
//     *

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     // upper half of the diamond
//     for (int i = 1; i <= n; i++)
//     {
//         // print spaces
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         // print stars
//         for (int k = 1; k <= 2 * i - 1; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     // lower half of the diamond
//     for (int i = n - 1; i >= 1; i--)
//     {
//         // print spaces
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         // print stars
//         for (int k = 1; k <= 2 * i - 1; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Write a program to print the Butterfly pattern for N;

// *      *
// **    **
// ***  ***
// **** ***
// **** ***
// ***  ***
// **    **
// *      *

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     // upper half of the butterfly
//     for (int i = 1; i <= n; i++)
//     {
//         // print left stars
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         // print spaces
//         for (int k = 1; k <= 2 * (n - i); k++)
//         {
//             cout << " ";
//         }
//         // print right stars
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     // lower half of the butterfly
//     for (int i = n; i >= 1; i--)
//     {
//         // print left stars
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         // print spaces
//         for (int k = 1; k <= 2 * (n - i); k++)
//         {
//             cout << " ";
//         }
//         // print right stars
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//              Patterns
//              (AssignmentQuestions)

// Question 1 : Print the 0-1Triangle Pattern.
// For n =5
// 1
// 01
// 101
// 0101
// 10101

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if ((i + j) % 2 == 0)
//             {
//                 cout << "1";
//             }
//             else
//             {
//                 cout << "0";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Question 2 : Print the RhombusPattern.
//  For n =5
//      *****
//     *****
//    *****
//   *****
//  *****

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         // print spaces
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         // print stars
//         for (int k = 1; k <= n; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Question 3 : Print the Palindromic Pattern with Numbers.
//  For n =5
//      1
//     121
//    12321
//   1234321
//  123454321

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // print spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // print increasing numbers
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        // print decreasing numbers
        for (int l = i - 1; l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;
    }

    return 0;
}