#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200003],l[200003],r[200003];
char c[200003];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	r[0]=-1;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i],l[i]=r[i-1]+1,r[i]=l[i]+a[i]-1;
	ll ans=0,len=r[n];
	int l1=1,r1=n;
	while(l1<=r1){
		if(c[l1]!=c[r1])ans+=min(min(r[l1]-(len-r[r1]),len-l[r1]-l[l1])+1,min(a[l1],a[r1]));
		if(r[l1]>(len-l[r1]))r1--;
		else if(r[l1]<(len-l[r1]))l1++;
		else if(r[l1]==(len-l[r1]))l1++,r1--;
	}
	cout<<ans;
	return 0;
}
