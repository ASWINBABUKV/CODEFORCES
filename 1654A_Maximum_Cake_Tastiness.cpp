#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        ll max=0, max1= 0,n;
        cin>>n;
        ll arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr + n);
        cout<<arr[n-1]+arr[n-2]<<endl;
        
    }
	return 0;
}