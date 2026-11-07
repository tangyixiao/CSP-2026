#include<bits/stdc++.h>
#define int long long
using namespace std;
const int  N = 5e5 + 5; 
int a[N],ans[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ok=0,ui=0,q=0;
	for(int p = 1;p<=n;p++){
		if(p!=1) q = 1;
		for(int i=p;i<=n;i++){
			for(int j=p;j<i;j++){
				if(a[i]==a[i-j+q]){
					ok=1;
					ui = i - j;
				}
			}
			if(ok==0){
				ans[a[i]-1]++;
			}else{
				for(int j = ui;j < i;j++){
					ans[a[j]-1]--;
				}
				ans[a[i] - 1]++;
			}
			ok = 0;
		} 
	}
	for(int i=0;i<m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}