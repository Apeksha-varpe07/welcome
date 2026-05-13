#include<stdio.h>

int main() {
    int arr[5] = {10,20,30,40,50};
    int low = 0, high = 4, mid, key = 30;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element Found");
            return 0;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Element Not Found");

    return 0;
}
