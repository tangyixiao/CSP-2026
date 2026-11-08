#include<bits/stdc++.h>
using namespace std;
int n;
const int N=2e5+10;
long long num[N];
string s[N];
long long sum1[N];
long long sum2[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>num[i];
		cin>>s[i];
	} 
	for(int i=1;i<=n;i++) sum1[i]=sum1[i-1]+num[i];
	for(int i=n;i>0;i--) sum2[i]=sum2[i+1]+num[i];
	long long now=0,ans=0;
	for(int i=1,j=n;;){
		while(i<=n&&sum1[i]<now) i++;
		while(j>0&&sum2[j]<now) j--;
		if(i>n&&j<1) break;
		long long Nxt=min(sum1[i],sum2[j]);
		if(s[i]!=s[j]){
			ans+=(Nxt-now+1);
		}
		now=Nxt+1;
	}
	cout<<ans/2;
	return 0;
}

