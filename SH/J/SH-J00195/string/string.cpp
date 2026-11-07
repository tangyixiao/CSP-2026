#include<bits/stdc++.h>
using namespace std;
const int maxn=3e5+338;
long long n,nw=0,x,tot=0,ans=0;
char ct;
struct node{
	long long l;
	char c;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	vector<node> a(maxn);
	for (int i=1;i<=n;i++){
		cin>>x>>ct;
		nw+=x;
		a[i].l=x;a[i].c=ct;
	}
	tot=nw;nw=0;
	long long j=n;
	for (int i=1;i<=n;i++){
		if (nw>tot/2) break;
		while (a[i].l>a[j].l){
			if (a[i].c!=a[j].c){
				if (nw+a[j].l>tot/2){
					ans+=tot/2-nw;
					break;
				}
				ans+=a[j].l;
			}
			if (nw+a[j].l>tot/2) break;
			nw+=a[j].l;
			a[i].l-=a[j].l;
			j--;
		}
		if (nw>tot/2) break;
		if (a[i].c!=a[j].c){
			if (nw+a[i].l>tot/2){
				ans+=tot/2-nw;
				break;
			}
			ans+=a[i].l;
		}
		nw+=a[i].l;
		a[j].l-=a[i].l;
	}
	cout<<ans<<'\n';
	return 0;
}
