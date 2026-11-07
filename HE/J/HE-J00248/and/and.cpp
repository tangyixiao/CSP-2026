#include<bits/stdc++.h>
using namespace std;
const int N =2e5+10;
int n,m; 
int a[N],ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+1+n,greater<int>());
    ans=a[1];
    m--;
    int i=2;
    while(i-1<=m)
    {
    	ans=(ans&a[i]);
    	i++;
	}
	cout<<ans<<endl;
	return 0;
}
 
