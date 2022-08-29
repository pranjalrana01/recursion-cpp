#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remainingPart = linearSearch(arr+1,size-1,key);
        return remainingPart;
    }
}

int main(){
    int arr[5]={2,4,6,3,9};
    int size=5;
    int key=1;

    bool ans= linearSearch(arr,size,key);

    if(ans){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }

    return 0;
}
