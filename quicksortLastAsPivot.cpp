#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int h){
        int pivot=arr[h];
        int i=l-1,j=h;
        while(i<j){
            do{
                ++i;
            }while(arr[i]<pivot);
            do{
                --j;
            }while(j>=l&&arr[j]>=pivot);
            if(i<j)swap(arr[i],arr[j]);
        }
        swap(arr[i],arr[h]);
        return i;
}
void QuickSort(int arr[],int l,int h){
    if(l<h){
          int p=partition(arr,l,h);
          QuickSort(arr,l,p-1);
          QuickSort(arr,p+1,h);
    }
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}
