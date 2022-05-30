
    #include <iostream>

    using namespace std;

    int main()
    {
        int no;
        int height;
        int ans=0;
        cin>> no>> height;
        int hs[no];
        for(int i= i=0; i<no;i++){ cin>>hs[i];}
          for(int i= i=0; i<no;i++)
            {if (hs[i]<=height){ans++;}
             else {ans+=2;}}
    cout<<ans;
        return 0;
    }
