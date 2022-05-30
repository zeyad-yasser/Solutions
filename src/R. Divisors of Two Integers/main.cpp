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

int n,arr[10000]= {0},x=-1,grid[10000]= {0};



    cin>>n;


        for(int i=0; i<n; i++)

            {cin>>arr[i];    x=max(arr[i],x);}


        sort(arr,arr+n);

       // x=arr[n-1];

        grid[arr[n-1]]=1;

        cout<<x<<" ";

        arr[n-1]=0;

        for(int i=0;i<n-1;i++)

        {

            if((grid[arr[i]]==0)&&(x%arr[i]==0))

            {

                grid[arr[i]]=1;

                arr[i]=0;

            }

        }

        sort(arr,arr+n);

        cout<<arr[n-1]<<endl;






    return 0;
}
