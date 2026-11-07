#include <bits/stdc++.h>
using namespace std;
int a1[2000001],n,ans=0,m=0,tp=1;
string w;
char s[2000001];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i =1;i<=n;i++){
		cin>>a1[i]>>s[i];
	m+=a1[i];
	}
	for(int i =1;i<=n;i++){
		for(long long j =tp;j<=a1[i];j++){
			w[j]=s[i];
		}
		tp=a1[i];
	}
	for(long long i =1;i<=m/2+1;i++){
		if(w[i]!=w[m+1-i]){
			ans+=1;
		}
	}
	cout<<ans;
	return 0;

}