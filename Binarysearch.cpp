#include <iostream>
using namespace std;
int Binary_search(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            s=mid+1;
        }
        if(arr[mid]>key){
            e=mid-1;
        }

    }
    return -1;
}
int main() {
   int n,key;
   cin>>n;
 
   int arr[n]={0};
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cin>>key;
   cout<<Binary_search(arr,n,key);

   return 0;
}