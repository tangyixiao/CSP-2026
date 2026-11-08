#include <bits/stdc++.h>
using namespace std;
int n,a[200005];
char b[200005];
long long s,e,ans,k;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i] >> b[i];
		e+=a[i];
	}
	k=e;
	int x=1,y=n;
	while(x<=n/2&&y>n/2){
		if(a[x]>a[y]){
			if(b[x]!=b[y]) ans+=a[y];
			a[x]-=a[y];
			y--;
			
		}else if(a[x]<a[y]){
			if(b[x]!=b[y]) ans+=a[x];
			a[y]-=a[x];
			x++;
			
		}else if(a[x]==a[y]){
			if(b[x]!=b[y]) ans+=a[y];
			a[x]-=a[y];
			y--;
			x++;
			
		}
	}
	cout << ans;
	return 0;
}
