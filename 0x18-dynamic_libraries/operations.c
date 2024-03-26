#include <stdio.h>
/**
 * add - adds two integer
 * @a: one of the integers to be added
 * @b: second integer to be added
 * Return: 1 0n success, 0 if not
 */
int add(int a, int b) {
    return a + b;
}
/**
 * sub - does the subtraction of two integers
 * @a: one of the intergers
 * @b: the second
 * Return: result
 */
int sub(int a, int b) {
    return a - b;
}
/**
 * mul - does the multiplication of two integers
 * @a: first integer
 * @b: seconde integer
 * Return: result
 */
int mul(int a, int b) {
    return a * b;
}
/**
 * div - does division of two integers
 * @a: first integer
 * @b: second integer
 * Return: result or Error if divided by 0
 */
int div(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b;
}
/**
 * mod - does modulo calculations of two integers
 * @a: first integer
 * @b: second integer
 * Return: result or Error if modulo by 0
 */
int mod(int a, int b) {
    if (b == 0) {
        printf("Error: Modulo by zero\n");
        return 0;
    }
    return a % b;
}
