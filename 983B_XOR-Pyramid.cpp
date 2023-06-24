#include<bits/stdc++.h>
using namespace std;
long long int ar[5001][5001],res[5001][5001];
int main()
{
	int n , l , r , q;
	cin>>n;
	
	for (int i = 1; i <= n; i++)
	{   cin>>ar[1][i] ;
	    res[1][i] = ar[1][i];
	}

	for(int i=2;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			ar[i][j] = ar[i-1][j] ^ ar[i-1][j+1];
			res[i][j] = max(ar[i][j] , max(res[i-1][j] , res[i-1][j+1]));
		}
	}
	
	cin>>q;
	
	while(q--){
		cin>>l>>r;
		
		int row = r - l + 1;
		int col = l;
		
		cout<<res[row][col]<<endl;
	}
	return 0;
}