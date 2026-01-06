#include <stdio.h>
#include <stdlib.h>
int binary_search(int arr[], int size, int target);

int binary_search(int arr[], int size, int target){
    int low = 0;
    int high = size-1;
    while(low <= high) {
        int mid = (low + high)/2; //mid = 
        printf("\n mid :%d, target = %d, arr[mid]: %d", mid, target, arr[mid]);
        if(arr[mid] == target) {
            printf("\n mid :%d, arr[mid]: %d", mid, arr[mid]);
            return mid;
        }
        
        // If target greater, ignore left half
        if (arr[mid] < target) {
            low = mid + 1;
        }

        // If target is smaller, ignore right half
        else {
            printf("\n high :%d", high);
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10,1,2,5,4,6};
    int search_val = 5;
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    //print the arr size
    printf("%d\n",arr_size);
    int result;
    result = binary_search(arr,arr_size, search_val);
    if (result != -1)
    {
        printf("search is succsed");
    }else {
        printf("search is not succsed");
    }
}