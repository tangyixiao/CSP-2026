#include<bits/stdc++.h>
using namespace std;
int a[200005];
char c[200005];
int main(){
	ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	int i=0,j=n+1;
	long long cnti=0,cntj=0,ans=0;
	while(i<=j){
		while(cnti>=cntj){
			cntj+=a[--j];
			if(i>j)break;
			if(cnti>=cntj)ans+=(c[i]!=c[j])?a[j]:0;
			else ans+=(c[i]!=c[j])?(cnti-cntj+a[j]):0;
		}
		while(cntj>=cnti){
			cnti+=a[++i];
			if(i>j)break;
			if(cntj>=cnti)ans+=(c[i]!=c[j])?a[i]:0;
			else ans+=(c[i]!=c[j])?(cntj-cnti+a[i]):0;
		}
	}
	cout<<ans;
	return 0;
}
