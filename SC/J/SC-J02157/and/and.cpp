#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long a[N];
bool v[N];
int n;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long maxx=-1;
	int m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
	cin>>a[i];
	maxx=max(maxx,a[i]);
	}
	if(maxx<=4){
		cout<<0;
		return 0;
	}
	long long t=a[1];
	for(int i=2;i<=n;i++)t&=a[i];
	if(m==1)cout<<maxx;
	else if(m==n) cout<<t;
	else if(m==n-1){
		maxx=-1;
		long long t=2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(a[j]==a[i])continue;
				t&=a[j];
			}
			maxx=max(maxx,t);
		}cout<<maxx;
	}
	return 0;
}