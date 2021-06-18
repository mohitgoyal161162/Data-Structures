#include<iostream>
using namespace std;

void Bubble_Sort(int arr[],int n){
    for(int itr=1;itr<=n-1;itr++){
        for(int j=0;j<=n-itr-1;j++){
            if(arr[j+1]<arr[j]){
               swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
   int n;
   cin>>n;
 
   int arr[n]={0};
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

    Bubble_Sort(arr,n);
    for(int i=0;i<n; i++){
        cout<<arr[i]<<",";
    }

   return 0;

}