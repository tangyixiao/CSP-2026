#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,l,ans;
struct node{
	int x;
	char c;
}a[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i].x>>a[i].c,l+=a[i].x;
	int cnt=0,cnt1=0,t=1,w=n;
	while(t<=w){
		int d=min(cnt+a[t].x,l/2);
//		cout<<d<<'\n';
		while(1){
			if(cnt1+a[w].x>=d){
				if(a[w].c!=a[t].c)
					ans+=(d-cnt1);
				a[w].x=a[w].x-(d-cnt1);
				cnt1=d;
//				cout<<"partial cnt1&ans "<<a[w].x<<' '<<cnt1<<' '<<ans<<'\n';
				break;
			}
			else{
				if(a[w].c!=a[t].c)
					ans+=a[w].x;
				cnt1+=a[w].x;
//				cout<<"cnt1&ans "<<cnt1<<' '<<ans<<'\n';
				w--;
			}
		}
		cnt+=a[t].x;
		t++;
	}
	cout<<ans;
}

