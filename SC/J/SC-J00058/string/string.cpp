#include <bits/stdc++.h>
using namespace std;
const int N=2e5;
int n;
long long a[N];
char c[N];
int ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long x=1,y=n;
	while(x<=y){
		if(c[x]!=c[y]){
			ans+=min(a[x],a[y]);
		}if(a[x]<a[y]){
			a[y]-=a[x];
			x++;
		}else{
			a[x]-=a[y];
			y--;
		}
	}
	cout<<ans;
	return 0;
} 