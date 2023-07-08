#include <iostream>
using namespace std;

int main() 
{
    int n, min=0, max=0, a, c=0;
    cin>>n;
    for(int i=0; i<n; i++) 
    {
        cin>>a;
        if(i==0) 
        {
            min=max=a;
        }
        else
        {
            if(a<min) 
            {   
                min=a;
                c++;
            }
            else if(a>max) 
            {
                max=a; 
                c++;
            }
        }
    }
    cout<<c;
    return 0;
}