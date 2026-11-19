
/*
 * File:   main.c
 * Author: Dhanush
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

/*
 * Walking the Walk Programming Assignment
 */
int main(int argc, char** argv)
{
    // IMPORTANT: Only add code in the section
    // indicated below. The code I've provided
    // makes your solution work with the
    // automated grader on Coursera
    char input[MAX_LENGTH];
    fgets(input, MAX_LENGTH, stdin);

    while (input[0] != 'q')
    {
        int n = atoi(input);

        // Add your code between this comment
        // and the comment below.

        // Allocate memory for the array
        int *array = (int *)malloc(n * sizeof(int));

        if (array == NULL)
        {
            return 1;
        }

        // Use pointers to set each element to its index
        int *ptr = array;

        for (int i = 0; i < n; i++)
        {
            *ptr = i;
            ptr++;
        }

        // Use pointers to print each array element
        ptr = array;

        for (int i = 0; i < n; i++)
        {
            printf("%d", *ptr);
            ptr++;
        }

        // Use pointers to calculate the sum
        int sum = 0;
        ptr = array;

        for (int i = 0; i < n; i++)
        {
            sum += *ptr;
            ptr++;
        }

        // Print the sum
        printf("%d\n", sum);

        // Free allocated memory
        free(array);
        array = NULL;

        // Don't add or modify any code below
        // this comment
        fgets(input, MAX_LENGTH, stdin);
    }

    return 0;
}
