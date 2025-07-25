int read1(int a[], int n){
	printf("Enter %d elements : ",n);
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
}

int binarySearch(int arr[], int low, int high, int target){
	if(low>high){
		return -1;
	}
	int mid = low+(high - low)/2;
	if(arr[mid]==target){
		return mid;
	}
	else if(arr[mid]>target){
		return binarySearch(arr,low, mid-1,target);
	}
	else{
		return binarySearch(arr, mid+1, high, target);
	}
	return 0;
}

void bubbleSort(int arr[], int n){
	int i, j, temp;
	int swapped;
	for(i=0; i<n-1 ; i++){
		swapped=0;
		for(j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swapped=1;
			}
		}
		if(!swapped){
			break;
		}
	}
}
void display(int a[], int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
