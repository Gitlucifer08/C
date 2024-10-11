// // find the second largest element in the given array

#include <stdio.h>
#include <limits.h> // Include this header for INT_MIN

int main() {
    int n;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int max = INT_MIN; // Initialize max to the smallest possible value
    int smax = INT_MIN; // Initialize second max similarly

    for (int i = 0; i < n; i++) {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] > max) {
            smax = max; // Update second max
            max = arr[i]; // Update max
        } else if (arr[i] > smax && arr[i] != max) {   // dont use if as we dont want to check the condition  when the above if is true and else too as we want to specify the condition
            smax = arr[i];     // Update second max              
                                                       
                                
        }
    }

    printf("Second largest element: %d\n", smax);

    return 0;
}

