#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+7;
struct s{
	int l;
	char c;
}lf[N],ri[N],al[N];
int idxl,idxr;
int n;
int nwl;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>al[i].l>>al[i].c;
		sum+=al[i].l;
	}
	for(int i=1;i<=n;i++){
		nwl+=al[i].l;
		if(nwl<=sum/2){
			lf[++idxl]=al[i];
		}
		else if(nwl-al[i].l>=sum/2){
			ri[++idxr]=al[i];
		}
		else {
			s l,r;
			r.l=nwl-sum/2;
			l.l=al[i].l-r.l;
			l.c=r.c=al[i].c;
			lf[++idxl]=l;
			ri[++idxr]=r;
		}
	}
	int lflen=lf[idxl].l;
	int rilen=ri[1].l;
	int i=idxl,j=1,ans=0;
	if(sum%2==1){
		rilen--;
	}
	while(i>=1||j<=idxr){
		if(lflen==0){
			i--;
			lflen=lf[i].l;
		}
		if(rilen==0){
			j++;
			rilen=ri[j].l;
		}
		if(lflen>rilen){
			ans+=(lf[i].c!=ri[j].c)*(rilen);
			lflen-=rilen;
			rilen-=rilen;
		}
		if(lflen<=rilen){
			ans+=(lf[i].c!=ri[j].c)*(lflen);
			rilen-=lflen;
			lflen-=lflen;
		}
	}
	cout<<ans;
	return 0;
} 

