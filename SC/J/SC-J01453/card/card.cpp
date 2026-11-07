#include<bits/stdc++.h>
using namespace std;
int ans[1000000];
int c[100000],s[10000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,cnt;
	cin >> n >> m;
	for(int i=1;i<=n;i++) cin >> s[i];
	for(int i=n;i>=1;i--){
		int cnt1=n;
		for(int j=1;j<=i;j++){
			int ss=s[j],f=0;
			for(int k=1;k<=cnt1;k++){
				if(c[k]==ss) f=1;
				if(f==2) c[k]--;
			}
			if(!f) c[++cnt1]=ss;
		}
		for(int j=1;j<=cnt1;i++) if(c[j])ans[j]++;
	}
	for(int i=1;i<=m;i++) cout << ans[i] << " ";
	return 0;
} 