#include<iostream>
#define ll long long
using namespace std;
 ll ans=0;
void solve(ll x,ll l,ll r,ll xl,ll xr)
{
  if(r<xl||l>xr||x==0) return ;
  if(x==1)
  {
    ans++;
    return ;
  }
  ll mid=(l+r)/2;
  solve(x/2,l,mid-1,xl,xr);// x / 2 on the left
  solve(x%2,mid,mid,xl,xr);// x% 2 middle
  solve(x/2,mid+1,r,xl,xr);// x / 2 on the right
}
int main()
{
  ll n,r,l;
  cin>>n>>l>>r;
  ll len=1,x=n;
  while(x>1)// Length of
  {
    len=len*2+1;
    x/=2;
  }

  solve(n,1,len,l,r);
  cout<<ans;
  return 0;
}