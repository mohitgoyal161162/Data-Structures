#include<iostream>
using namespace std;

void Selection_sort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int min_term=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min_term]){
                min_term=j;
            }
        }
        swap(arr[i],arr[min_term]);
        

    }
   

}



int main() {
   int n;
   cin>>n;
 
   int arr[n]={0};
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

   Selection_sort(arr,n);
    for(int i=0;i<n; i++){
        cout<<arr[i]<<endl;
    }

   return 0;

}