#include<bits/stdc++.h>
using namespace std;
// merging;
void merging(int a[],int p,int q,int r){
    int n1=q-p+1,n2=r-q;
    int temp1[n1];
    int temp2[n2];
    for(int i=0;i<n1;i++){
        temp1[i]=a[p+i];
    }
    for(int i=0;i<n2;i++)temp2[i]=a[q+1+i];
    int i=0,j=0,x=p;
    while(i<n1 && j<n2){
            if(temp1[i]<temp2[j]){
                a[x]=temp1[i];
                i++;
            }else{
                  a[x]=temp2[j];
                  j++;
            }
            x++;
    }
    while(i<n1){
        a[x++]=temp1[i];
        i++;
    }
    while(j<n2){
        a[x++]=temp2[j];
        j++;
    }
}
void mergesort(int a[],int p,int r ){
    if(p>=r)return;
    // dividing the left part of array
    mergesort(a,p,(p+r)/2);
    // dividing the right part of array
    mergesort(a,(p+r)/2 + 1,r);
    merging(a,p,(p+r)/2,r);
    
}

int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    return 0;
}
