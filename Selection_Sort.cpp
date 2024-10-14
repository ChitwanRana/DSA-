#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n){       
     int i,j;                                   // 13 46 24 52 9 
                                                 // 9 13 24 46 52 
     for(int i=0;i<=n-2;i++){
          int min=i;
          for( j=i;j<=n-1;j++){
               if(arr[j]<arr[min])
               {
                    min=j;
               }
          }
          int temp=arr[min];
          arr[min]=arr[i];
          arr[i]=temp;
     }
}
int main(){

     int n;
     cout<<"enter size";
     cin>>n;
     int arr[10];


     cout<<"enter array ";
     for (int i=0;i<n;i++){
          cin>>arr[i];
     }
     SelectionSort(arr,n);

     cout<<"enter sorted array ";
     for (int i=0;i<n;i++){
          cout<<arr[i]<<" ";
     }
     return 0;
}