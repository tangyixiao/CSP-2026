#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
const int MAXN = (2e5+5);
int n,m,a[MAXN],sz,cnt,ans = ((1<<30)-1); 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	sz = n;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
	}
	for(int i = 29;i >= 0;i--){
		cnt = 0;
		for(int j = 1;j <= n;j++){
			if((a[j] != (-1)) && (!((a[j]>>i)&1))){
				cnt++;
			}
		}
		if((sz-cnt) >= m){
			for(int j = 1;j <= n;j++){
				if((a[j] != (-1)) && (!((a[j]>>i)&1))){
					a[j] = (-1);
				}
			}
			sz -= cnt;
		} 
	}
	for(int i = 1;i <= n;i++){
		if(a[i] != (-1)){
			ans &= a[i];
		}
	}
	cout<<ans<<endl;
	return 0;
}
