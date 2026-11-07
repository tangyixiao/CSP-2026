#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 5e5 + 10;
ll n,m;
ll a[N],s[N],cnt[N];
bool check(){
	for(int i=2;i<=n;i++){
		if( a[i] < a[i-1] )  return false;
	}
	return true;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	if( check() ){
		for(int i=1;i<=n;i++){
			ll k = 0;
			memset(s,0,sizeof(s));
			for(int j=i;j<=n;j++){
				ll t = 0;
				if( s[k-1] == a[j] ){
					k--;
				}  
				s[++k] = a[j];
			}
			for(int f=1;f<=k;f++){
				cnt[s[f]] ++;
			}
		}
		for(int i=1;i<=m;i++){
			cout << cnt[i] << " ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		ll k = 0;
		memset(s,0,sizeof(s));
		for(int j=i;j<=n;j++){
			ll t = 0;
			for(int f=1;f<=k;f++){
				if( s[f] == a[j] ){
					t = f;
				}  
			}
			while( k >= t && t )  k--;
			s[++k] = a[j];
			
		}
		for(int f=1;f<=k;f++){
			cnt[s[f]] ++;
		}
	}
	for(int i=1;i<=m;i++){
		cout << cnt[i] << " ";
	}
	return 0;
} 
