#include <bits/stdc++.h>
#include <array>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,s;cin>>n>>s;
    int arr[100005]={};
   vector <long long >sum;
    for (long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }


  long long  start =0,end =n,mid ;
  long long ans=0 ,num=0;
   while (start<=end )
   {
       mid =(start+end)/2;


     for (long long i=0;i<n;i++)
    {
        sum.push_back(arr[i]+(1+i)*mid);

    }

      // arr2[k]=cst;


sort(sum.begin(),sum.end());

long long tot=0;
for (long long i=0;i<mid;i++)
{
    tot +=sum[i];
}

 if (tot<=s)
 {
     ans =max(ans ,tot);
     num=max(num,mid);
     start=mid+1;
 }

else
{
    end =mid-1;
}
       sum.clear();
   }





cout<<num<<" "<<ans;





    return 0;
}
