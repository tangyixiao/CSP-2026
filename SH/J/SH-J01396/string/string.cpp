#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct node{
	int l;
	char num;
}a[200020];
ll n,ans=0,sum=0;
int main(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].l>>a[i].num;
		sum+=a[i].l;
	}
	int x=1,y=n;
	while(x<y){
		if(a[x].num!=a[y].num) ans+=min(a[x].l,a[y].l);
		if(a[x].l>a[y].l){
			a[x].l-=a[y].l;y--;
		}
		else if(a[x].l==a[y].l){
			x++; y--;
		}
		else{
			a[y].l-=a[x].l;x++;
		}
	}
	cout<<ans;
	return 0;
}
