#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n ; cin>>n;
	long long arr[n];
	double cost1=0 , max2=0 , max1=0 ,cost2=0 , x=0 , m=0 ;
	for(long long i= 0 ; i < n ; ++i)
	{
		cin>>arr[i];
	}

	for ( long long i = 0 ; i < n ; ++i)
	{
	max1 = abs(arr[0]-arr[i]);
    max2 = abs(arr[i]-arr[n-1])	;
	cost1 =abs(arr[i]-arr[i+1]);
	cost2=abs(arr[i]-arr[i-1]);
/*if (arr[n-1]==0)
{
   cout<<cost2<<' ';
}*/

if (n==2)
{
	x=abs(arr[0]-arr[1]);
	max1=x;
	max2=x;
	cout<<x<<' '<<x<<endl<<x<<' '<<x<<endl;
	break;
}

if (cost1<=cost2)
{
	cout<<cost1<<' ';
}
else if (cost2<=cost1)
{
	cout<<cost2<<' ';
}
if (max1>=max2)
{
	cout<<max1<<endl;
}
else if (max2>=max1)
{
	cout<<max2<<endl;
}
}

return 0 ;
}
