#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200010],cnt[200010],s[200010];
char c[200010];
int re(int i){
	i=s[n]+1-i;
	int l=1,r=n,ans=0;
	while(l<=r){
		int mid=(l+r)/2;
		if(i<=s[mid])ans=mid,r=mid-1;
		else l=mid+1;
	}
	return ans;
}
string str;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		s[i]=s[i-1]+a[i];
	}
//	if(s[n]<=100000000){
int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i];j++)str+=c[i];
		}
		str=" "+str;
		for(int i=1;i<=s[n];i++){
			if(str[s[n]+1-i]!=str[i])ans++;
		}
		cout<<ans/2;
		return 0;
//	}
//	int sum=0;
//	for(int i=1;i<=n;i++){
//		int l=re(s[i]),r=re(s[i-1]+1);
//		if(l==r){
//			if(c[i]!=c[l])sum+=a[r];
//			continue;
//		}
//		if(c[i]!=c[l])sum+=s[n]-s[i]-s[l-1];
//		for(int j=l+1;j<=r-1;j++){
//			if(c[i]!=c[j])sum+=a[j];
//		}
//		if(r>l&&c[i]!=c[r])sum+=s[r]-s[n]+s[i-1]+1;
//	}
//	cout<<sum/2;
	return 0;
}
/*
aabbc
   aa
3
2 a
2 b
1 c
6
100 a
100 a
100 a
100 b
100 b
100 b
*/
