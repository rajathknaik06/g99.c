/*Microbiologist Samantha needs a quick way to study microbe populations. Create a program that takes the current microbe count, and figures out its natural logarithm using the log() function from the math.h library, and shows the result with two decimal places.



This tool will help Samantha analyze microbial growth intricacies faster and more accurately.

Input format :
The input is a positive double-point value n, representing the current microbe count.

Output format :
The output prints the log of the given number as a double-point value, rounded off to two decimal places.*/

#include <stdio.h>
#include <math.h>

int main() {
    double num, log_val;
    scanf("%lf", &num);
    log_val = log(num);
    printf("%.2lf", log_val);
    return 0;
}
