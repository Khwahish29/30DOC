#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    char s2[100];
    // Read and save an integer, double, and String to your variables.
    scanf("%d",&i2);
    scanf("%lf",&d2);
     scanf(" %[^\n]", s2);
    
    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + i2);
    printf("%.1lf\n", d + d2);
     printf("%s%s\n", s,s2);
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}