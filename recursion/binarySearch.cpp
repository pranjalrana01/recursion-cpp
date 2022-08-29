#include<iostream>
using namespace std;

bool binarySearch(int arr[],int s,int e,int key){

    //base case
    if(s>e){
        return false;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==key){
        return true;
    }
    
     if(arr[mid]>key){
        return binarySearch(arr,s,mid-1,key);
    }

    else{
        if(arr[mid]<key){

            return binarySearch(arr,mid+1,e,key);
                        
        }
    }
}

int main(){

    int arr[6]={2,4,6,7,8,9};
    int size=6;
    int key=5;
    int start=0;
    int end=5;

    bool ans= binarySearch(arr,start,end,key);

    if(ans){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }
    return 0;
}
