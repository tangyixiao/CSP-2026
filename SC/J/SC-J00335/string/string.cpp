#include<bits/stdc++.h>
using namespace std;
int n,a[200005],ans;
char c[200005];
long long l;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
	}int x=1;
	for(long long i=1;i<=l/2+l%2;i++){
		int p=i,u=0;
		while(p>0){
			u++;
			p-=a[u];
		}
		if(c[u]==c[n-u+1]){
			i+=min(a[x],a[n-x+1])-1;
			continue;
		}	
		x=min(a[x],a[n-x+1]);
		ans+=x;
		i+=x-1;
	}cout<<ans;
	return 0;
} 