//heap sort
#include <bits/stdc++.h>
using namespace std;
void Max_Heapify(int arr[], int N, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < N && arr[left] > arr[largest])
		largest = left;
	if (right < N && arr[right] > arr[largest])

		largest = right;
	if (largest != i) {

		swap(arr[i],arr[largest]);
		Max_Heapify(arr, N, largest);
	}
}
 void Build_Max_Heap(int arr[],int N){
         for (int i = N / 2 - 1; i >= 0; i--)
                   Max_Heapify(arr, N, i);
}
void Max_HeapSort(int arr[], int N)
{
	Build_Max_Heap(arr,N);
	for (int i = N - 1; i >= 0; i--) {
		swap(arr[0],arr[i]);
		Max_Heapify(arr,i,0);
	}
}
int main()
{   int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
	Max_HeapSort(arr, N);
	for (int i = 0; i < N; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
