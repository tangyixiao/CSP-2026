#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans,s1[200005],s2[200005];
pair<int,char> a[200005],b[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>n;
	s1[0]=1;
	for(int i=1;i<=n;i++){
		cin>>a[i].first>>a[i].second;
		s1[i]=s1[i-1]+a[i-1].first;
		b[i]=a[i];
	}
	reverse(b+1,b+n+1);
	s1[n+1]=s1[n]+a[n].first;
	s2[0]=1;
	for(int i=1;i<=n+1;i++)
		s2[i]=s2[i-1]+b[i-1].first;
	int pa=1,pb=1;
	int i=1;
	while(pa<=n&&pb<=n){
		if(s1[pa+1]<s2[pb+1]){
			int l=s1[pa+1]-i;
			if(a[pa].second!=b[pb].second)ans+=s1[pa+1]-i;
			pa++;
			i=s1[pa];
		}
		else if(s1[pa+1]>s2[pb+1]){
			if(a[pa].second!=b[pb].second)ans+=s2[pb+1]-i;
			pb++;
			i=s2[pb];
		}
		else{
			if(a[pa].second!=b[pb].second)ans+=s1[pa+1]-i;
			pa++,pb++;
			i=s1[pa];
		}
		//cout<<i<<' ';
	}
	cout<<ans/2;
	return 0;
}
