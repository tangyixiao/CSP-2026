#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAXN=2e5+5;
int n,a[MAXN];
char c[MAXN];
ll len,ans;
string s;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	while(l<r){
		if(a[l]==a[r]){
			if(c[l]!=c[r]) ans+=a[l];
			l++;
			r--;
		}else if(a[l]>a[r]){
			if(c[l]!=c[r]) ans+=a[r];
			a[l]-=a[r];
			r--;
		}else{
			if(c[l]!=c[r]) ans+=a[l];
			a[r]-=a[l];
			l++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
