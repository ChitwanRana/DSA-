#include<iostream>
using namespace std;

int bubblesort(int arr[],int n){

     // 13 46 24 52 20 9 
     // 

          for(int i=n-1;i>=0;i--)  
          {
               int swap=0;
               for(int j=0;j<=i-1;j++)
               {
                    if(arr[j]>arr[j+1]){
                         int temp=arr[j];
                         arr[j]=arr[j+1];
                         arr[j+1]=temp;
                         swap=1;
                    }
               }
               if(swap==1){
                    break;    
               }
          }
}

int main(){
     cout<<"enter size";
     int n,arr[10];
     cin>>n;
     cout<<"enter array ";
     for (int i=0;i<n;i++)
     {
          cin>>arr[i];
     }
     bubblesort(arr,n);
     for (int i=0;i<n;i++)
     {
          cout<<arr[i]<< " ";
     }
     }