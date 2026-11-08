#include<bits/stdc++.h>
#define Is_inky_ya ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sofree freopen("and.in","r",stdin);freopen("and.out","w",stdout);
#define endl '\n'
using namespace std;
using lint = long long ;
using doubao = long double;
const lint N = 2e5+5;
lint n,m;
lint a[N];
inline lint _pow_(lint a,lint n){
	lint ans = 1;
	while(n){
		if(n&1) ans*=a;
		a*=a;
		n>>=1;
	}
	return ans;
}
int main(){
#ifndef AKIOI
	Is_inky_ya
#endif
	sofree
	cin>>n>>m;
	for(lint i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=20){
		lint maxn = -1;
		for(lint i=1;i<(1<<n);i++){
			lint s = i,cnt = 1;
			lint ans = -1;
			while(s){
				if(s&1&&ans<0) ans=a[cnt];
				else if(s&1) ans&=a[cnt];
				s>>=1;
				cnt++;
			}
			maxn = max(maxn,ans);
		}
		cout<<maxn<<endl;
	}else if(n<=2000){
		if(m==1){
			lint maxn = 0;
			for(lint i=1;i<=n;i++){
				maxn = max(a[i],maxn);
			}
			cout<<maxn<<endl;
		}else if(m==n){
			lint maxn = a[1];
			for(lint i=1;i<=n;i++){
				maxn&=a[i];
			}
			cout<<maxn<<endl;
		}else{
			lint maxn = 0;
			for(lint i=1;i<=n;i++){
				for(lint i=1;i<=m;i++){
					maxn = max(maxn,a[i]&a[j]);
				}
			}
			cout<<maxn<<endl;
		}
	}else{
		if(m==n-1){
			lint maxn = 0;
			for(lint i=1;i<=n;i++){
				lint cnt = -1;
				for(lint j=1;j<=n;j++){
					if(j==i) continue;
					if(cnt==-1) cnt = a[j];
					cnt&=a[j];
				}
				maxn = max(maxn,cnt);
			}
			cout<<maxn<<endl;
		}else{
			lint nn = n-1;
			lint cnt = 0;
			while(nn){
				if(nn&1) cnt++;
				nn>>=1;
			}
			if(_pow_(2,cnt)==n){
				lint maxn = a[n];
				for(lint i=n;i>=n-m+1;i--){
					maxn&=a[i];
				}
				cout<<maxn<<endl;
			}else{
				sort(a+1,a+1+n);
				cout<<a[m-1]<<endl;
			}
		}
	}
	return 0;
}

