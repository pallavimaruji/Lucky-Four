#include <iostream>

using namespace std;

int main()
{
    int t,cnt=0,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for( ; n!=0;n=n/10)
           {
            i=n%10;
        if(i==4)
            cnt++;
           }

    cout << cnt << endl;
    cnt=0;
    }
    return 0;
}
