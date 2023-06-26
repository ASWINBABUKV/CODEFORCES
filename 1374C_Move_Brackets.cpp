#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	char ar[5000];
    int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i = 1; i <= n; i++)
		cin>>ar[i];
	    stack<char> st;
 
	    for(int i = 1; i <= n; i++)
	    {
		    if(ar[i] == '(')
		    st.push('(');
		    else
		    {
			    if(!st.empty() && st.top() == '(') 
			        st.pop();
			    else
			    st.push(')');
		    }
	    }
 
	    int r =st.size();
	    cout<<r/2<<endl;
    }
return 0;
}