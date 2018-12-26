#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define mp make_pair
#define PI 3.14159265358979323
#define debug(x) cout<<"Case "<<x<<": "
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long int           ll;
typedef long double             ld;
typedef unsigned long long int ull;
typedef vector <int>            vi;
typedef vector <ll>            vll;
typedef pair <int, int>        pii;
typedef pair <ll, ll>          pll;
typedef vector < pii >        vpii;
typedef vector < pll >        vpll;
typedef vector <string>         vs;

//handle:cyber_rajat

void merge(int *a,int *l,int left,int *r,int right) {
	int i=0,j=0,k=0;
	
	while(i<left && j< right) {
		if(l[i]  < r[j]) 
		  a[k++] = l[i++];
		else a[k++] = r[j++];
	}
	while(i < left)
	    a[k++] = l[i++];
	while(j < right) 
	   a[k++] = r[j++];
}
void merge_sort(int *a,int n)
{
    int mid,*l,*r,i;
    if(n<2)
    return ;
    
    mid=n/2;
    l=new int[mid];
    
    r=new int[n-mid];

    for(i=0;i<mid;i++)
    l[i]=a[i];
    for(i=mid;i<n;i++)
    r[i-mid]=a[i];
   
    merge_sort(l,mid);
    merge_sort(r,n-mid);
    merge(a,l,mid,r,n-mid);
}
int main()
{
    int n;
    cout<<"Size of Array::";
    cin>>n;
    int a[n];
    cout<<"Enter Sequence::";
    for(int i=0;i<n;i++)
    cin>>a[i];
   
    //merge short
    merge_sort(a,n);
    cout<<"Sorted Array::";
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    //6 2 3 1 9 10 15 13 12 17
}
