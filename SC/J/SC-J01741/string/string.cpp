#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
const int maxn=2e5+5;
int n;
ll ans;
int a[maxn];
char c[maxn];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	bool f=1;
	while(f){
		if(c[l]==c[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];;
				--r;
			}
			else if(a[l]<a[r]){
				a[r]-=a[l];;
				++l;
			}
			else{
				++l;
				--r;
			}
		}
		else{
			if(a[l]>a[r]){
				a[l]-=a[r];
				ans+=a[r];
				--r;
			}
			else if(a[l]<a[r]){
				a[r]-=a[l];
				ans+=a[l];
				++l;
			}
			else{
				ans+=a[l];
				++l;
				--r;
			}
		}
		if(r<=l){
			f=0;
		}
	}
	cout<<ans;
    fclose(stdin);
    fclose(stdout);
	return 0;
}