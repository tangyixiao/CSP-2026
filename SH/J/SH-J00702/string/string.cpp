#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n;
struct node{
	int k;
	char c;
}a[N];
struct node2{
	int k;
	int i;
	char c;
}l,r;
int sum;
void solve1(int x,int ans){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(cnt+a[i].k>=x){
			l.k=x-cnt-1;
			l.c=a[i].c;
			l.i=i;
			r.k=cnt+a[i].k-x;
			r.c=a[i].c;
			r.i=i;
			break;
		}
		cnt+=a[i].k;
	}
	while(1<=l.i){
		int y=min(l.k,r.k);
		if(l.c!=r.c){
			ans+=min(l.k,r.k);
//				cout<<l.i<<' '<<l.k<<' '<<l.c<<' ';
//				cout<<r.i<<' '<<r.k<<' '<<r.c<<'\n';
//				cout<<ans<<"\n";
		}
		l.k-=y;
		r.k-=y;
		if(l.k==0){
			l.i--;
			l.k=a[l.i].k;
			l.c=a[l.i].c;
		}
		if(r.k==0){
			r.i++;
			r.k=a[r.i].k;
			r.c=a[r.i].c;
		}
	}
	cout<<ans;
}
void solve2(int x,int ans){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(cnt+a[i].k>x){
			l.k=x-cnt;
			l.c=a[i].c;
			l.i=i;
			r.k=cnt+a[i].k-x;
			r.c=a[i].c;
			r.i=i;
			break;
		}
		cnt+=a[i].k;
	}
	while(1<=l.i){
		int y=min(l.k,r.k);
		if(l.c!=r.c){
			ans+=min(l.k,r.k);
//				cout<<l.i<<' '<<l.k<<' '<<l.c<<' ';
//				cout<<r.i<<' '<<r.k<<' '<<r.c<<'\n';
//				cout<<ans<<"\n";
		}
		l.k-=y;
		r.k-=y;
		if(l.k==0){
			l.i--;
			l.k=a[l.i].k;
			l.c=a[l.i].c;
		}
		if(r.k==0){
			r.i++;
			r.k=a[r.i].k;
			r.c=a[r.i].c;
		}
	}
	cout<<ans;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		cin>>a[i].k>>s;
		a[i].c=s[0];
		sum+=a[i].k; 
	}
	int x=(sum+1)/2,ans=0;
//	cout<<x<<"\n\n";
	if(sum&1){//ÆæÊı 
		solve1(x,ans);
	}
	else{//Å¼Êı 
		solve2(x,ans);
	}
	return 0;
} 
/*
3
2 a
2 b
1 c
*/ 
