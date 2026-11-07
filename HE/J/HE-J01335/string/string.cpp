#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200005];
char b[200005];
long long ans=0;
string pus;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	long long res=0;
	for(int i=0;i<n;i++){
		res+=a[i];
	}
	int cnt=0;
	for(int i=0;i<res;i++){
		pus.push_back(b[cnt]);
		a[cnt]--;
		if(a[cnt]==0)cnt++;
	}
	long long j=pus.length();
	for(int i=0;i<pus.length()/2;i++){
		if(pus[i]!=pus[j-i-1])ans++;
	}
	cout<<ans;
	return 0;
}
