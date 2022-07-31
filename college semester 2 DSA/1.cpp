#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMean(int a[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
 
    return (int)sum / (int)n;
}
 
int findMedian(int a[], int n){
    sort(a, a + n);
 

    if (n % 2 != 0)
        return (int)a[n / 2];
 
    return (int)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}

int main(){

    int a[] = { 1, 3, 4, 2, 7, 5, 8, 6 };
    int n = sizeof(a) / sizeof(a[0]);
   
    // Function call
    cout << "Mean = " << findMean(a, n) << endl;
    cout << "Median = " << findMedian(a, n) << endl;
    return 0;
}