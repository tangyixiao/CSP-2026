#include<bits/stdc++.h>
using namespace std;
#define int long long 
struct node{
	char a;
	int l;
}a[200010];
int n; 
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i].l>>a[i].a;
	int l=1,r=n,ans=0;
	while(1){
		if(l>=r)break;
		if(a[l].a!=a[r].a){
			if(a[l].l<a[r].l){
				ans+=a[l].l;
				a[r].l-=a[l].l;
				l++;
			}else if(a[l].l==a[r].l){
				ans+=a[r].l;
				l++;
				r--;
			}else{
				ans+=a[r].l;
				a[l].l-=a[r].l;
				r--;
			}
		}else{
			if(a[l].l<a[r].l){
				a[r].l-=a[l].l;
				l++;
			}else if(a[l].l==a[r].l){
				l++;
				r--;
			}else{
				a[l].l-=a[r].l;
				r--;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
} 

