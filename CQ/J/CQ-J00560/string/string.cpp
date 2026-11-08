#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,ans;
struct node{
	int a;
	char c;
}a[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].a>>a[i].c;
	}
	int l=1,r=n;
	while(l<r){
		if(a[l].a>a[r].a){
			if(a[l].c!=a[r].c){
				ans+=a[r].a;
			}
			a[l].a-=a[r].a;
			r--;
		}
		else if(a[l].a<a[r].a){
			if(a[l].c!=a[r].c){
				ans+=a[l].a;
			}
			a[r].a-=a[l].a;
			l++;
		}
		else{
			if(a[l].c!=a[r].c){
				ans+=a[l].a;
			}
			l++,r--;
		}
	}
	cout<<ans;
	return 0;
}
