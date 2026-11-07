#include<bits/stdc++.h>
using namespace std;
string s;
int n,x[200001];
long long cnt,ans;
char a[200001];
int main(){
	freopen("string.in","s",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i]>>a[i];
		cnt+=x[i];
		for(int j=1;j<=x[i];j++){
			s+=a[i];
		}
	}
	string s1,s2;
	for(long long i=0;i<cnt/2;i++){
		s1+=s[i];
	}
	for(long long i=cnt-1,t=0;t<cnt/2;i--,t++){
		if(s[i]!=s1[t])ans++;
	}
	cout<<ans;
	return 0;
}
