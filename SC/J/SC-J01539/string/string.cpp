#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n;
int a[N];
string c[N];
int sum,ans;
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int l=0,r=0,li=1,ri=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	int x=a[1],y=a[n];
	int mid=sum/2;
	while(li<ri){
		int o=min(x,y),na=0;
		if(c[li]!=c[ri]) na=o;
		if(l+o<mid&&r+o<mid)l+=o,r+=o;
		x-=o,y-=o;
		a[li]-=o,a[ri]-=o;
		if(x==0) ++li, x=a[li];
		if(y==0) --ri, y=a[ri];
		ans+=na;
	}
	cout<<ans;
	return 0;
}
