#include <stdio.h>

int busca_binaria(int arr[], int n, int x, int *iterations) {
    int left = 0, right = n - 1;
    *iterations = 0;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }

        (*iterations)++;
    }
    
    return -1;
}

int main() {
    int arr[] = {2, 5, 7, 9, 11, 13, 15, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 11;
    int iterations;

    int position = busca_binaria(arr, n, target, &iterations);

    if (position != -1) {
        printf("O valor %d foi encontrado na posição %d\n", target, position);
        printf("Número de iterações: %d\n", iterations);
    } else {
        printf("O valor %d não foi encontrado no vetor\n", target);
        printf("Número de iterações: %d\n", iterations);
    }

    return 0;
}
