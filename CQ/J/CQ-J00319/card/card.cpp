#include<bits/stdc++.h>
using namespace std;
#define int long long
const int RP=LLONG_MAX; 
int a[500005];
struct node{
	int l,r;
	int x;
}b[500005];
unordered_map<int,int> mp;
int cnt[500005];
int xxx[300005];
signed main(){
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,ch=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) ch=0;
	}
	if(ch==1){
		for(int i=1;i<=n;i++) xxx[a[i]]=i;
		for(int i=1;i<=m;i++) cout<<xxx[i]<<' ';
		return 0;
	}
	for(int k=1;k<=n;k++){
		mp.clear();
		for(int i=1;i<=n;i++) b[i]={0,0,0};
		int lst=0;
		for(int i=k;i<=n;i++){
			if(mp.find(a[i])!=mp.end()){
			    lst=b[mp[a[i]]].l;
			    //cout<<"(ct:>"<<lst<<")";
			    int x=lst;
			    while(x!=n+1){
					x=b[x].r;
					mp.erase(b[x].x);
				}
			}
			b[lst].r=i;
			b[i]={lst,n+1,a[i]};
			mp[a[i]]=i;
			//cout<<b[lst].r<<' '<<b[i].l<<' '<<b[i].r<<' '<<b[i].x<<"  @@  ";
			lst=i;
		}
		//cout<<'\n';
		int x=0;
		while(x!=n+1){
			x=b[x].r;
			cnt[b[x].x]++;
			//cout<<b[x].x<<' ';
		}
		//cout<<"\n\n";
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<' ';
	return 0;
} 
