#include<bits/stdc++.h>
using namespace std;
const int maxn=2e7+5;
char c[maxn];
long long n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	long long x,cnt=0,cnt1=0;
	char y;
	for(int i=1;i<=n;i++){
		cin>>x>>y;
		cnt1+=x;
		for(int i=1;i<=x;i++){
			c[cnt+i]=y;
		}
		cnt+=x;
	}
	long long cnt2=cnt1/2+cnt%2;
	long long ans=0;
	for(int i=1;i<=cnt2;i++){
		if(c[i]!=c[cnt1-i+1]){
			ans++;
		} 
	}
	cout<<ans<<endl;
	return 0;
}

