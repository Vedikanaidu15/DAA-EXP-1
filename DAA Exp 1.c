#include<stdio.h>
void read1(int arr[], int n){
	printf("Enter %d elements : ",n);
	for(int i=0;i<n;i++){
	scanf("%d", &arr[i]);
	}
}
int linearSearch(int arr[], int low, int high, int key){
	if (low>high)
		return -1;
	if(arr[low] == key)
		return low;
	return linearSearch(arr,low+1,high,key);
}
