#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int t;cin >> t;
    int n;int x;
     int hour1, hour2, min1, min2, sum1, sum2, result1=0,result;
            char c;
    for (int i = 0;i < t;i++)
    {
        cin>>n;cin>>x;

        for (int j = 0;j <n ;j++)
        {


            cin >> hour1 >> c >> min1 >>  hour2 >>c>> min2;
            if (hour1 > hour2)
            {
                sum1 = hour1 * 3600 + min1 * 60;
                sum2 = (hour2 +24) * 3600 + min2 * 60;
                result = (sum2 - sum1);
                result1 +=result;

            }




          else
            {
                sum1 = hour1 * 3600 + min1 * 60;
                sum2 = hour2  * 3600 + min2 * 60;
                result = (sum2 - sum1);
                result1 +=result;
            }


        }
         cout <<result1<<endl;



        if (result1 >=(x*3600))
        {
            cout <<"YES"<<endl;


        }
        else
        {
            cout<<"NO"<<endl;


        }
        result1=0;






    }







    return 0;
}

