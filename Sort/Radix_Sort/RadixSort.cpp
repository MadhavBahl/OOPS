#include<iostream>
using namespace std;
#define MAX 100000
int getMax(int arr[],int n){
	int max=0;
	for(int i=0;i<n;i++)
		if(arr[i]>max)
			max=arr[i];
	return max;
}
void countSortrad(int arr[],int n,int t){
	int ans[n],count[10]={0};

	for(int i=0;i<n;i++)
		count[(arr[i]/t)%10]++;

	for(int i=1;i<10;i++)
		count[i]+=count[i-1];

	for(int i=n-1;i>=0;i--){
		ans[count[(arr[i]/t)%10]-1]=arr[i];
		count[(arr[i]/t)%10]--;
	}

	for(int i=0;i<n;i++)
		arr[i]=ans[i];
}
void radixSort(int arr[],int n){
	int max=getMax(arr,n);
	for(int t=1;max/t>0;t*=10){
		countSortrad(arr,n,t);
	}
}
int main(){
	int n, arr[MAX];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	radixSort(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<endl;
	return 0;
}
