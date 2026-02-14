// Write a Program to print 1 to N using recursion in Java.

import java.util.Scanner;

public class Print1toN {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        printNumbers(n);
        sc.close();
    }

    public static void printNumbers(int n) {
        if (n > 0) {
            printNumbers(n - 1); // Recursive call with n-1
            System.out.print(n + " "); // Print the current number after the recursive call
        }
    }
}

/*
 * In this program, we define a method `printNumbers` that takes an integer `n`
 * as an argument. The method uses recursion to print numbers from 1 to `n`. The
 * base case for the recursion is when `n` is less than or equal to 0, at which
 * point the method simply returns without doing anything. For each call to
 * `printNumbers`, it first makes a recursive call with `n-1`, which continues
 * until it reaches the base case.
 * 
 * After the recursive call returns, it prints the current value of `n`. This
 * way, the numbers are printed in ascending order from 1 to `n`. The main
 * method prompts the user for input and calls the `printNumbers` method with
 * the provided number.
 * //
 */
