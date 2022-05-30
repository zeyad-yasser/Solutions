#include <bits/stdc++.h>
using namespace std;
#define ff  first
#define ss second
#define mod  1000000007
#define MAX  9999999999
#define endl '\n'
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define p push


#define mk(arr,n,type)  type *arr=new type[n];
void c_p_c()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    c_p_c();

int x=-200;int y=200;
int n;cin>>n;int arr[n+100];
int c=0,d=0; bool flag=0;

for (int i=1;i<=n;i++)
{
    cin>> arr[i];
	if(arr[i]>x) {
	x= arr[i];
	c= i;
	}
	if(arr[i]<=y) {
	y = arr[i];
	d = i;
	}
}

 if(c-d>0) {
	cout << (n-d) + (c-1) -1;
    }
    else {
    cout << (n-d) + (c-1);
    }
	return 0;
}
