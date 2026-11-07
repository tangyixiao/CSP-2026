#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
char s[N*500];
char b[N];
int n;
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	long long tot=0;
	for(int i=1;i<=n;i++)cin>>a[i]>>b[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s[++tot]=b[i];
		}
	}
	for(long long i=tot;i>=tot/2+tot%2;i--){
		if(s[i]!=s[tot-i+1])ans++;
	}
	cout<<ans;
	return 0;
}
