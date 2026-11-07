#include<bits/stdc++.h>
using namespace std;
#define N 222222
#define int long long
void open(string s){
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}
int n,a[N],sl[N],sr[N],ans,ans0;
char c[N];
signed main(){
	open("string");
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i],sl[i]=sl[i-1]+a[i];
	int mid=sl[n]/2,len=sl[n];
	for(int i=1;i<=n;i++)sr[i]=sr[i-1]+a[n-i+1];
	for(int i=1;i<=n;i++)
		if(sl[i]>=mid){
			sl[i]=mid,sl[i+1]=-1;
			break;
		}
	for(int i=1;i<=n;i++)
		if(sr[i]>=mid){
			sr[i]=mid,sr[i+1]=-1;
			break;
		}
	for(int l=1,r=1;sl[l]!=-1;++l){
		while(sr[r]<sl[l]&&sr[r]!=-1){
			if(c[l]!=c[n-r+1])ans+=sr[r]-max(sr[r-1],sl[l-1]);
			++r;
		}
		if(sr[r]==-1)break;
		if(c[l]!=c[n-r+1])ans+=sl[l]-max(sr[r-1],sl[l-1]);
	}
	cout<<ans<<endl;
}