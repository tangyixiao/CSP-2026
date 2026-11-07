#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+5;
const int MAXM=3e5+5;
long long n,m,ans[MAXM];
struct x{
	long long num;
	bool use=0;
} a[MAXN];
struct y{
	long long pla;
	bool have=0;
} b[MAXM];
bool spe(){
	for(int i=1;i<n;i++)
		if(a[i].num>a[i+1].num)
			return 0;
	return 1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i].num;
	if(spe()){
		for(int i=1;i<=n;i++){
			set<long long> se;
			for(int j=i;j<=n;j++)
				se.insert(a[j].num);
			for(auto p:se)
				ans[p]++;
		}
		for(int i=1;i<=m;i++)
			cout<<ans[i]<<' ';
		return 0;
	}
	for(int r=1;r<=n;r++){
		for(int i=r;i<=n;i++){
			a[i].use=1;
			if(b[a[i].num].have){
				for(int j=b[a[i].num].pla;j<i;j++){
					a[j].use=0;
					b[a[j].num].have=0; 
				}
			}
			b[a[i].num].pla=i;
			b[a[i].num].have=1;
		}
		for(int i=r;i<=n;i++){
			if(a[i].use)
				ans[a[i].num]++;
		}
		for(int i=1;i<=n;i++)
			a[i].use=0;
		for(int i=1;i<=m;i++)
			b[i].have=0;
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<' ';
	return 0;
} 
