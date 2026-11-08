#include<bits/stdc++.h>
using namespace std;
int n,m,gss;
string ss;
const int N=2e5+10;
struct node {
	string s;
	int t,g;
}b[N];
bool cmp(node x,node y){
	return x.t>y.t;
}
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int gs=0;
		while(a[i]!=1){
			if(a[i]%2==0){
				b[i].s='0'+b[i].s;
			}else{
				b[i].s='1'+b[i].s;
				b[i].t++;
			}
			a[i]/=2;
			gs++;
		}
		b[i].s='1'+b[i].s;
		b[i].t++;
		b[i].g=gs;
		gss=max(gss,gs);
	}
	sort(b+1,b+n+1,cmp);
	for(int i=1;i<=m;i++){
		if(b[i].g != gss){
			for(int i=1;i<=gss-b[i].g;i++){
				b[i].s='0'+b[i].s;
			}
		}
	}
	bool f=true;
	for(int i=0;i<gss;i++){
		for(int j=1;j<=m;j++){
			if(b[j].s[i]=='0'){
				ss=ss+='0';
				f=false;
				break;
			}
		}
		if(f){
			ss=ss+='1';
		}else{
			f=true;
		}
	}
	int lens=ss.size(),j=0;
	long long ans;
	for(int i=lens-1;i>=0;i--){
		ans+=int(ss[i])*pow(2,j);
		j++;
	}
	cout<<ans;
	return 0;
}
