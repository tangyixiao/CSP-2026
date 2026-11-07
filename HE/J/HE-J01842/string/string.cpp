#include<bits/stdc++.h>
using namespace std;
struct S {
	long long s;
	string id;
};
S a[200010];
int n;
int ans;
int main(){
	freopen ("string.in","r",stdin);
	freopen ("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i].s>>a[i].id;
	}
	int l=1,r=n;
	while (l<r){
		int p=0;
		int maxa=0,mina=0;
		if (a[l].s>a[r].s){
			maxa=l;
			mina=r;
		}else if(a[l].s==a[r].s){
			p=1;
		}else{
			maxa=r;
			mina=l;
		}
		if (a[l].id==a[r].id){
			if (p==1){
				a[l].s=0;
				a[r].s=0;
				l++;
				r--;
			}else{
				a[maxa].s-=a[mina].s;
				a[mina].s=0;
				if (a[l].s==0) l++;
				else r--;
			}
		}else {
			if (p==1){
				ans+=a[l].s;
				a[l].s=0;
				a[r].s=0;
				l++;
				r--;
			}else{
				ans+=a[mina].s;
				a[maxa].s-=a[mina].s;
				a[mina].s=0;
				if (a[l].s==0) l++;
				else r--;
			}
		}
	}
	cout<<ans;
	return 0;
}
