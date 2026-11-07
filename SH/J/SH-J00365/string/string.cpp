#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int MAXN = (2e5+5);
int n,a[MAXN],ans;
char ch[MAXN]; 
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i <= n;i++){
		cin>>a[i]>>ch[i]; 
	}
	for(int l = 1,r = n;l < r;){
		if(a[l] < a[r]){
			if(ch[l] != ch[r]){
				ans += a[l];
			}
			a[r] -= a[l];
			a[l] = 0;
		}
		else{
			if(ch[l] != ch[r]){
				ans += a[r];
			}
			a[l] -= a[r];
			a[r] = 0;
		}
		if((!a[l])){
			l++;
		}
		if((!a[r])){
			r--;
		}
	}
	cout<<ans<<endl;
	return 0;
}
