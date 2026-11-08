#include<bits/stdc++.h>
#define wef(i,l,r) for(int i=l;i<=r;i++)
#define few(i,r,l) for(int i=r;i>=l;i--)
#define pii pair<int,int>
#define endl cout<<"\n"
using namespace std;
using ll=long long;
const int N=2e5+5;
int a[N];
inline bool cmp(const int &a,const int &b){
	return a>b;
}
inline bool check(int x,int p){
	return (x>>p)&1;
}
bool ch[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n,m;
	cin>>n>>m;
	wef(i,1,n) cin>>a[i];
	sort(a+1,a+1+n,cmp);
	int maxn=0;
	few(i,30,0) if(check(a[1],i)){
		maxn=i;
		break;
	}
	int res=0;
	memset(ch,1,sizeof ch);
	few(j,maxn,0){
		int s=0;
		wef(i,1,n) if(ch[i]) s+=check(a[i],j);
		if(s>=m){
			res+=(1<<j);
			wef(i,1,n) if(!check(a[i],j)) ch[i]=0;
		}
	}
	cout<<res;
	return 0;
}

