#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int a[N],n,ans,num,cnt;
char s[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		num+=a[i];
	}
	for(int i=1,j=n;i<=n&&j>=1;){
//		if(a[i]==0) {i++;}
//		if(a[j]==0) {j--;}
		cnt+=min(a[i],a[j]);
		if(cnt>num/2) break;
		if(s[i]!=s[j]){
			ans+=min(a[i],a[j]);
			int p=min(a[i],a[j]);
			a[i]-=p;
			a[j]-=p;
		}
		else{
			int p=min(a[i],a[j]);
			a[i]-=p;
			a[j]-=p;
		}
//		cout<<i<<" "<<j<<" "<<ans<<"\n";
		if(a[i]==0) i++;
		if(a[j]==0) j--;
	}
	cout<<ans;
	return 0;
}
/*
普及-/普及
我去，双指针神力！
9：45拿下
*/