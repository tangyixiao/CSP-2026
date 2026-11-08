#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
char c[maxn];
long long n,a[maxn],ans,num=1,cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int x=1,y=n;
	while(x!=y){
		if(a[x]!=0&&c[x]!=c[y]){
			if(a[x]>a[y]){
				ans+=a[y];
				a[x]-=a[y];
				y--;
				if(x==y) break;
			}
			if(a[x]<a[y]){
				ans+=a[y]-a[x];
				a[y]-=a[x];
				x++;
				if(x==y) break;
			}
			if(a[x]=a[y]){
				ans+=a[y];
				x++;
				y--;
				if(x==y) break;
			}
		}else{
			if(a[x]>a[y]){
				y--;
				a[x]-=a[y];
			}
			if(a[x]<a[y]){
				x++;
				a[y]-=a[x];
			}
			if(a[x]==a[y]){
				x++;
				y--;
			}
		}
	}
	cout<<x<<' '<<y<<' ';
	cout<<ans<<endl;
	return 0;
}
