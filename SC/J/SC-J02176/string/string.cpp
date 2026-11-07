#include<bits/stdc++.h>
using namespace std;
long long n,a[1000005],ans,sum;
char c[1000005];
string str;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i],sum+=a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++)str+=c[i];
	}
	long long len=str.size(),zd=(len+1)/2;
	str="*"+str;
	for(long long i=1;i<=zd;i++){
		long long r=len-i+1;
		if(str[i]!=str[r])ans++;
	}
	cout<<ans;
	return 0;
}