#include <iostream>
#include<cmath>
#include <algorithm>
using namespace std;

int main()
{
    long double sum = 1;
    long double m=0;
    int p=1;
    int n;
    int q;cin >> q;

    for (int i = 0;i < q;i++)
    {
        cin >> n;
           while (sum<=n)
           {
         for(int i =0;i<27;i++)
         {
            m=sum;
            if (m<=n)
            cout<<sum<<"*1"<<endl;
            m=2*sum;
             if (m<=n)
            cout<<sum<<"*2"<<endl;
            m=3*sum;
             if (m<=n)
           cout<<sum<<"*3"<<endl;
            m=4*sum;
             if (m<=n)
            cout<<sum<<"*4"<<endl;
            sum+=pow(5,i)*p;
        }
           }
           cout <<m<<endl;
    }

    return 0;
}
