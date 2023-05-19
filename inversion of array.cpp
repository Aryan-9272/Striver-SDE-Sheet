#include <bits/stdc++.h> 

void merge(int low,int mid,int high,long long *arr,long long &count,int n){
    vector<int>a,b;
    int i=0,j=0,k=low;
    for(int p=low;p<=mid;p++)
        a.push_back(arr[p]);
    for(int p=mid+1;p<=high;p++)
        b.push_back(arr[p]);
    
    while(i<a.size()&&j<b.size()){
        if(a[i]>b[j]){
            count+=a.size()-i;
            arr[k]=b[j];
            j++;
            k++;
        }
        else{
            arr[k]=a[i];
            i++;
            k++;
        }
    }
    while(i<a.size()){
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<b.size()){
        arr[k]=b[j];
        j++;
        k++;
    }
}

void mergeSort(int low,int high,long long *arr,long long &count,int n){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    mergeSort(low,mid,arr,count,n);
    mergeSort(mid+1,high,arr,count,n);
    merge(low,mid,high,arr,count,n);
}

long long getInversions(long long *arr, int n){
    long long count=0;
    mergeSort(0,n-1,arr,count,n);
    return count;
}