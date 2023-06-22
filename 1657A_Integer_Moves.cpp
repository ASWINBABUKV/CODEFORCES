#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        float x = pow(((pow(a,2) + pow(b,2))),0.5);
        if(a == 0 && b == 0)
        {
            cout<<0<<endl;
        }
        else if(x == int(x))
        {
            cout<<1<<endl;
        }
        else 
        {
            cout<<2<<endl;
        }
    }
	return 0;
}