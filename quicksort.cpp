#include<bits/stdc++.h>
using namespace std;
int partition(int *a,int start,int end)
{
    int pivot=a[end];
    //pivot value index

    int P_index=start;
    int i,t; //t is temporary variable

    //Here we will check if array value is 
    //less than pivot
    //then we will place it at left side
    //by swapping 

    for(i=start;i<end;i++)
    {
    	if(a[i]<=pivot)
        {
            t=a[i];
            a[i]=a[P_index];
            a[P_index]=t;
            P_index++;
        }
     }
     //Now exchanging value of
     //pivot and P-index
      t=a[end];
      a[end]=a[P_index];
      a[P_index]=t;

     //at last returning the pivot value index
     return P_index;
 }
 void Quicksort(int *a,int start,int end)
 {
    if(start<end)
    {
         int P_index=partition(a,start,end);
             Quicksort(a,start,P_index-1);
             Quicksort(a,P_index+1,end);
    }
}
int main()
{
    int n;
        cout<<"Enter number of elements: ";
        cin>>n;
        int a[n];
        cout<<"Enter the array elements:\n";
        for(int i=0;i<n;i++)
       {
    	 cin>>a[i];
       }
      Quicksort(a,0,n-1);
      cout<<"After Quick Sort the array is:\n";
      for(int i=0;i<n;i++)
      {
    	 cout<<a[i]<<" ";
      }
    return 0;
}
