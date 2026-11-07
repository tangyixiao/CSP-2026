#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define F_up(x,y,z) for(int x=y;x<=z;x++)
#define F_down(x,y,z) for(int x=y;x>=z;x--)
#define F_in(x,y) for(auto x:y)
#define W(t) while(t--)
#define WALL while(1)
using namespace std;
int n;
struct node{
	int x;
	char c;
}a[200005];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int N=0;
	F_up(i,1,n){
		cin>>a[i].x>>a[i].c;
		N+=a[i].x;
	}if(N%2==1){
		int now=0;
		int fnd=(N+1)/2;
		F_up(i,1,n){
			if(fnd>=now+1&&fnd<=now+a[i].x){
				a[i].x++;
				break;
			}now+=a[i].x;
		}N++;
	}int lst=0,ans=0,hvlst=0;
	for(int l=0,r=N+1,nowl=0,nowr=n+1;l!=r&&(nowl+1!=nowr-1);){
		int hvl=l-0;
		int hvr=N+1-r;
		char lc,rc;
		int nxtlst,hvnxtlst;
		if(hvl+a[nowl+1].x<=hvr+a[nowr-1].x){
			nowl++;
			l+=a[nowl].x;
			lc=a[nowl].c;
			rc=a[nowr-1].c;
			nxtlst=l;
			hvnxtlst=l;
		}else{
			nowr--;
			r-=a[nowr].x;
			lc=a[nowl+1].c;
			rc=a[nowr].c;
			nxtlst=r;
			hvnxtlst=N+1-r;
		}if(lc!=rc){
			ans+=(hvnxtlst-hvlst);
		}lst=nxtlst;
		hvlst=hvnxtlst;
	}cout<<ans;
	return 0;
}