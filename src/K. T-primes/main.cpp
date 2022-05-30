#include <iostream>
#include <cmath>



using namespace std;

int main()
{

    int arr[1000000] = { 0 };
    for (int i = 2;i <= 1000000;i++)
    {

        if (arr[i] == 0)
        {
            for (int j = 2;i * j <= 1000000;j++)
            {
                arr[i * j] = 1;
            }
        }

    }








    int n;cin >> n;
    long long int  sqr_num;
    long long int num;
    for (int i = 0;i < n;i++)
    {
        cin >> num;
        sqr_num = sqrt(num);
        if (num == 1)
        {
            cout << "NO" << endl;
        }

        else  if ((sqr_num * sqr_num == num )&& (arr[sqr_num] == 0))
        {

            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }


    }





    return 0;
}
