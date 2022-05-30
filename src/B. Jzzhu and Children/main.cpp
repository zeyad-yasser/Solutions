#include<bits/stdc++.h>

using namespace std;
int main()
{


ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;double m;
    cin>>n>>m;
    int arr[n];
double arrz=0;
    int z=0;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
      //  if (arr[i]<=m)

              //  arr[i]=0;


    }

for (int i=0;i<n;i++)
    {

        if (ceil(arr[i]/m)>=arrz)
            {
                arrz=ceil(arr[i]/m);
                z=i;

            }
           // cout <<z<<endl;
    }




    cout <<z+1<< endl;
    return 0;
}
