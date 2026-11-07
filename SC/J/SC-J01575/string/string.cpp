#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n;
long long a[N],sum[N],ans;
char ch[N];
string s=" ";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>ch[i];
		sum[i]=sum[i-1]+a[i];
	}
	if(sum[n]<=200000){
		for(int i=1;i<=n;i++)
			for(int j=1;j<=a[i];j++)
				s=s+ch[i];
		for(int i=sum[n]/2+sum[n]%2;i<=sum[n];i++)
			if(s[sum[n]+1-i]!=s[i])ans++;
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(sum[i]<=sum[n]/2+n%2)continue;
		int p1=lower_bound(sum+1,sum+n+1,sum[n]+1-sum[i])-sum;
		int p2=lower_bound(sum+1,sum+n+1,sum[n]-sum[i-1])-sum;
		for(int j=p1;j<=p2;j++){
			if(ch[j]==ch[i])continue;
			if(j==p1&&j!=p2)ans+=sum[j]-(sum[n]+1-sum[i])+1;
			else if(j==p1&&j==p2)ans+=sum[n]-sum[i-1]-(sum[n]-sum[i]);
			else if(j!=p1&&j==p2)ans+=sum[n]-sum[i-1]-sum[j-1];
			else ans+=sum[j]-sum[j-1];
		}
	}
	cout<<ans;
	return 0;
}