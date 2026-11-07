#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
typedef long long ll;
const int mx=2e5+10;
ll n,a[mx],cnt=0;
char c[mx];
ll ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;char s;
		cin>>x>>s;
		if(c[cnt]==s)a[cnt]+=x;
		else{
			a[++cnt]=x;
			c[cnt]=s;
		}
	}
	int l=1,r=cnt;
	while(l<r){
		if(c[l]!=c[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];
				ans+=a[r];
				r--;
			}
			else if(a[r]>a[l]){
				a[r]-=a[l];
				ans+=a[l];
				l++;
			}
			else if(a[r]==a[l]){
				ans+=a[l];
				l++,r--;
			}
		}
		else if(c[l]==c[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}
			else if(a[r]>a[l]){
				a[r]-=a[l];
				l++;
			}
			else if(a[l]==a[r])l++,r--;
		}
	}
	cout<<ans;
	return 0;
} 