#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int MAXN=2e5+5;
int n,m;
bool a[MAXN][32];
struct NUM{
	int len,cur,num;
	ll tmp;
}f[MAXN];
bool cmp(NUM a,NUM b){
	if(!(a.len==b.len)){
		return a.len>b.len;
	}else if(!(a.cur==b.cur)){
		return a.cur>b.cur;
	}else{
		return a.tmp>b.tmp;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		ll t;
		int cnt=1;
		cin>>t;
		f[i].tmp=t;
		while(t>0){
			if(t&1){
				a[i][cnt]=1;
				f[i].cur++;
			}
			t>>=1;
			cnt++;
		}
		f[i].len=cnt-1;
		f[i].num=i;
	}
	
	if(m==1){
		cout<<*max_element(a+1,a+n+1)<<'\n';
		return 0;
	}//special
	
	sort(f+1,f+n+1,cmp);
	
	bool tag[MAXN];
	memset(tag,0,sizeof(tag));
	ll t=f[1].tmp;
	for(int i=2;i<=m;i++){
		ll maxx=-0x3f3f3f3f3f3f3f3f;
		for(int j=2;j<=n;j++){
			if(!tag[j]){
				if(maxx<((ll)t&f[j].tmp)){
					maxx=(ll)t&f[j].tmp;
					tag[j]=true;
				}
			}
		}
		t=maxx;
	}
	cout<<t<<'\n';
	return 0;
}