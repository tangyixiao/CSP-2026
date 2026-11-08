#include<bits/stdc++.h>
using namespace std;
const int N=1e5*2+5;
unsigned long long n,t[N],sum=0,num,ans=0;
int main() {
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	num=n;
	string s;
	int x;
	if(n%2==0)x=n/2;
	else x=n/2+1;
	for(int i=1;i<=n;i++){
		cin>>t[i]>>s[i];
		sum+=t[i];
	}
	for(int i=1;i<=x;i++){
		if(s[i]!=s[num])ans+=t[i];
		num--;
	}
	cout<<ans;
	return 0;
}

