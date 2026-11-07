#include<bits/stdc++.h>
using namespace std;
const int N=200009;
typedef long long ll;
ll n,a[N],cnt,maxa;
char c[N];
string s;
void solvebf(){
	ll ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	ll len=s.size();
	for(int i=0;i<=len-1;i++){
		if(s[i]!=s[len-i-1]){
			s[i]=s[len-i-1];
			ans++;
		}
	}
	cout<<ans<<endl;
}
void solve(){
	for(int i=1;i<=n/2+1;i++){
		if(a[i]==0){
			continue;
		}
		if(a[i]==a[n-i+1]&&c[i]==c[n-i+1]){
			continue;
		}
		else if(a[i]==a[n-i+1]&&c[i]!=c[n-i+1]){
			cnt+=a[i];
			continue;
		}
		else if(a[i]!=a[n-i+1]&&c[i]==c[n-i+1]){
			cnt+=max(a[n-i+1],a[i])-min(a[n-i+1],a[i]);
			if(a[n-i+1]>a[i]){
				a[i+1]-=cnt;
			}
			else{
				a[n-i]-=cnt;
			}
		}
		else{
			cnt+=min(a[n-i+1],a[i]);
			int las=max(a[n-i+1],a[i])-min(a[n-i+1],a[i]);
			if(a[n-i+1]>a[i]){
				a[i+1]-=las;
				if(c[i]!=c[n-i+1]){
					cnt+=las;
				}
			}
			else{
				a[n-i]-=las;
				if(c[i]!=c[n-i+1]){
					cnt+=las;
				}
			}
		}
	}
	cout<<cnt;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		maxa=max(maxa,a[i]);
	}
	solve();
	return 0;
}
