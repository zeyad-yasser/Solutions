#include <iostream>

using namespace std;

int main()
{
    int z=0;

    bool p=true;
    int serjia =0;
    int dema =0;
    int n;cin>>n;
     int x=n-1;
    int arr[n];
     for (int i=0;i<n;i++)
    {

        cin>>arr[i];

    }

    while (z<=x)
    {


        if (arr[z]>=arr[x])
        {

            if (p)
            {
                serjia+=arr[z];

            }
            else
            {
                dema+=arr[z];
            }
              z++;
        }
        else //if (arr[z]<arr[x])
        {
            if (p)
            {
                serjia+=arr[x];

            }
            else
            {
                dema+=arr[x];

            }
             x--;
        }


        if (p)
        p=false;

       else {p=true;}



    }



cout <<serjia<<" "<<dema;









    return 0;
}
