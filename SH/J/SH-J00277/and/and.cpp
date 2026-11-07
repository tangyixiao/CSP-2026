#include <bits/stdc++.h>
using namespace std;
bool b[30];
int a[200005];
int p,sum=0;
void t_2(int t){
	p=0;
	sum=0;
	while (t){
		b[++p]=t%2;
		sum+=t%2;
		t/=2;
	}
}
void solve1(int n,int m){
	int ans=0;
	bool fg=0;
	for (int i=1;i<=n;i++){
		cin >>a[i];
	}
	for (int i=0;i<=pow(2,n+1);i++){
		t_2(i);
		int t;
		if (sum!=m) continue;
		fg=0;
		for (int j=1;j<=p;j++){
			if (b[j]){
				if (fg)t&=a[j];
				else t=a[j];
				fg=1;
			}
		}
		ans=max(ans,t);
	}
	cout <<ans;
}
void solve(int n,int m){
	int ans;
	for (int i=1;i<=n;i++){
		cin >>a[i];
	}
	if (m==1){
		for (int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
	}
	else{
		ans=a[1];
		for (int i=1;i<=n;i++){
			ans&=a[i];
		}
	}
	cout <<ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >>n>>m;
	if (n<=20){
		solve1(n,m);
	}
	else{
		solve(n,m);
	}
	return 0;
}
