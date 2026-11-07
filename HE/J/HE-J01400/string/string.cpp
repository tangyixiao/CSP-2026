#include<bits/stdc++.h>
using namespace std;
char s[200005];
long long n,m,a[200005],dp[200005],ans,l,r,mid,sum; 
bool chek(long long x){
	if(x>=sum)return 1;
	ans=0;int las=0;
	for(int i=1;i<=n;i++){
		ans+=abs(a[i]-a[n+1-i])-las;
		if(s[i]==s[n+1-i]){
			las=abs(a[i]-a[n+1-i]);
		}
		else{
			ans+=max(a[i],a[n+1-i]);
			las=abs(a[i]-a[n+1-i]);
		}
	}
	return ans/2<=x;
	
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		sum+=a[i];
	}
	l=0;r=20000000005;
	while(l<r){
		mid=(l+r)/2;
		if(chek(mid)){
			r=mid;
		}
		else{
			l=mid+1;
		}
	}
	cout<<r;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
