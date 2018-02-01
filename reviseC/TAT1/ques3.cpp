/* ===================================== */
/* ===== Solution to TAT problem 3 ===== */
/* ===================================== */

#include<iostream>
#include<math.h>
using namespace std;

long int sum_pow(int n, int m=0);

int main()
{
	long int sum,n,m;
	cin>>n>>m;
	if(m<0)
	cout<<"Invalid input";
	else
	{
	if(m!=0)
	sum=sum_pow(n, m);
	else
	sum=sum_pow(n);
	cout<<sum;
	}
}

long int sum_pow (int n, int m) {
    long int sum=0;
    int i;
    if (m==0) {
        for(i=1;i<=n;i++) {
            sum += pow(i,i);
        }
    } else {
        for(i=1;i<=n;i++) {
            sum += pow(i,m);
        }
    }
    return sum;
}
