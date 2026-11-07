#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,len,ta,ans;
struct node{
	int x;char c;
}a[200005];
signed main(){
	ios::sync_with_stdio(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) {
		int x;char y;
		cin>>x>>y;
		len+=x;
		if(ta==0) a[++ta]={x,y};
		else {
			if(a[ta].c==y) a[ta].x+=x;
			else a[++ta]={x,y};
		}
	}
	if(ta==1) {
		cout<<0;
		return 0;
	}
	//for(int i=1;i<=ta;i++) cout<<a[i].x<<" "<<a[i].c<<endl;
	int r=ta,l=1;
	while(l<r){
		if(a[l].x<a[r].x && a[l].c==a[r].c){
			a[r].x-=a[l].x;
			l++;
		}
		else if(a[l].x>a[r].x && a[l].c==a[r].c) {
			a[l].x-=a[r].x;
			r--;
		}
		else if(a[l].x==a[r].x && a[l].c==a[r].c) {
			r--;
			l++;
		}
		else if(a[l].x<a[r].x && a[l].c!=a[r].c){
			ans+=a[l].x;
			a[r].x-=a[l].x;
			l++;
		}
		else if(a[l].x>a[r].x && a[l].c!=a[r].c){
			ans+=a[r].x;
			a[l].x-=a[r].x;
			r--;
		}
		else if(a[l].x==a[r].x && a[l].c!=a[r].c){
			ans+=a[l].x;
			r--;
			l++;
		}
	}
	cout<<ans;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/