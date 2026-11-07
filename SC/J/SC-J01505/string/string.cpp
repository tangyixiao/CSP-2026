#include<bits/stdc++.h>
using namespace std;
long long n,m,e,s,ans;
struct node{
	long long x;
	char c;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i].x);cin>>a[i].c;
		m+=a[i].x; 
	}
	long long x=1,y=n;e=m;
	while(x<y){
		long long t=min(a[x].x,a[y].x);
		if(a[x].c!=a[y].c){
			ans+=t;
		}
		a[x].x-=t;
		a[y].x-=t;
		if(a[x].x<a[y].x){
			x++;
		}
		else{
			y--;
			if(a[x].x==a[y].x)x++;
		}
	}
	cout<<ans;
	return 0;
} 