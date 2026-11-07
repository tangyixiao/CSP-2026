#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long ans,n,a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
	}
	int x=1,y=n;
	while(x!=y){
		if(c[x]!=c[y]){
			ans+=min(a[x],a[y]);
		}
		if(a[x]>a[y]){
			a[x]-=a[y];
			y--;
		}else if(a[y]>a[x]){
			a[y]-=a[x];
			x++;
		}else{
			y--;
			x++;
		}
		if(x>y){
			break;
		}
	}
	cout<<ans;
	return 0;
} 
