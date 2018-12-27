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

//Handle:cyber_rajat

void insertion_sort(int a[],int n)
{
    int j,temp;
    for(int i=0;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;a[j]>temp && j>=0;j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
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
    
    //insertion short
    insertion_sort(a,n);
    
    cout<<"Sorted Array::";
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    //4 3 2 10 12 1 5 6
}
