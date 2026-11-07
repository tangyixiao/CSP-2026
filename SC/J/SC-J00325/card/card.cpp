#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int a[maxn],n,ans=0,cnt1[maxn];
char c[maxn],cnt0[maxn];
string s,s1,s2;
signed main(){
	//freopen("string3.in","r",stdin);
	//freopen("string.out","w",stdout);
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
	cout<<0;
	int cnt3=1,cnt4=n;
	for(int i=0;i<=cnt/2-1;i++){
		int ls5=cnt-1-i;
		if(i<cnt1[cnt3+1]&&ls5>cnt1[cnt4+1]){
		}else if(i>=cnt1[cnt3+1]){
			cnt3++;
			
			//TODO
		}else if(ls5<cnt1[cnt4+1]){
			cnt4--;
			//TODO
		}
		if(cnt0[i]!=cnt0[ls5]){
			ans++;
			//TODO
		}
	}
	cout<<ans;
}