#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int h){
        int pivot=arr[l];
        int i=l,j=h;
        while(i<j){
            do{
                i++;
            }while(arr[i]<=pivot);
            do{
                j--;
            }while(arr[j]>pivot);
            if(i<j)swap(arr[i],arr[j]);
        }
        swap(arr[j],arr[l]);
        return j;
}
void QuickSort(int arr[],int l,int h){
    if(l<h){
          int p=partition(arr,l,h);
          QuickSort(arr,l,p);
          QuickSort(arr,p+1,h);
    }
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    QuickSort(arr,0,n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}
