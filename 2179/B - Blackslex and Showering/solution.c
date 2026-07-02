#include <stdio.h>
#include <stdlib.h> // for abs
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        int n;
        scanf("%d", &n);
 
        int* arr = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
 
        int sum = 0;
        for (int i = 0; i < n - 1; i++) {
            sum += abs(arr[i] - arr[i + 1]);
        }
 
        int y = sum;
 
        for (int i = 0; i < n; i++) {
            int x = sum;
 
            if (i > 0)
                x -= abs(arr[i - 1] - arr[i]);
            if (i < n - 1)
                x -= abs(arr[i] - arr[i + 1]);
            if (i > 0 && i < n - 1)
                x += abs(arr[i - 1] - arr[i + 1]);
 
            if (x < y)
                y = x;
        }
 
        printf("%d
", y);
        free(arr);
    }
 
    return 0;
}