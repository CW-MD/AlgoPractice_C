#include <stdio.h>;
#include <stdlib.h>;


int main()
{
    #define arraySize 5
    int size = 5;
    int dataSet [arraySize];
    //dataSet[1, 9, 5, 3, 2];
    dataSet[0] = 1;
    dataSet[1] = 9;
    dataSet[2] = 5;
    dataSet[3] = 3;
    dataSet[4] = 2;
    
    bubbleSort(&dataSet, arraySize);
    return 0;
}

int bubbleSort(int arr[], int size) {
    //n^2 solution, for every elem i in array, compare against i + 1 and swap as needed.

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[i]) {
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;

            }
        }
        printf("%d",arr[i]);

    }
    return 0;
}

