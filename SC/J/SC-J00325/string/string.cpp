#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int a[maxn],n,ans=0,cnt1[maxn];
char c[maxn],cnt0[maxn];
string s,s1,s2;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	unsigned long long cnt=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		cnt1[i]=cnt+1;
		cnt+=a[i];
		cnt0[i]=c[i];
	}
	if(cnt<90000000){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i];j++){
				s+=c[i];	
				//TODO
			}
			
			//TODO
		}
		unsigned long long l=s.length();
		for(int i=0;i<=l/2-1;i++){
			if(s[i]!=s[l-1-i]){
				ans++;
			}
			
		}
		cout<<ans;
		
	}else{
		cout<<0;
		
		
	}
}