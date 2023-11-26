#include <stdio.h>
#include <math.h>

double myPow(double a, double b) {
    return pow(a, b);
}


double mySqrt(double x) {
    return sqrt(x);
}

double calculate(int arr[], int n) {
    double sum = 0, aver, num = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    aver = sum / n;

    for (int i = 0; i < n; i++) {
        num += myPow(arr[i] - aver, 2);
    }

    return mySqrt(num / n);
}

int main() {
    int arr[5];
    
    printf("Enter 5 real arr: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &arr[i]);
    }

    double result = calculate(arr, 5);
    printf("Standard Deviation = %.3lf\n", result);

    return 0;
}
