#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=4e5+5;
int n,m,res,rq,cnt,cnt2,vis,ans;
struct node{
	int value=0;char idx;
}su[N],val[N],val2[N],now;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>su[i].value>>su[i].idx,m+=su[i].value;
	rq=1;
	while(res+su[rq].value<=m/2)
		val[++cnt]=su[rq],res+=su[rq++].value;
	if(res<m/2)val[++cnt]={m/2-res,su[rq].idx};res=0,rq=n;
	
	while(res+su[rq].value<=m/2)
		val2[++cnt2]=su[rq],res+=su[rq--].value;
	if(res<m/2)val2[++cnt2]={m/2-res,su[rq].idx};
	rq=1;
	for(int i=1;i<=cnt;i++){
		if(val[i].value<=now.value){
			ans+=val[i].value*(val[i].idx!=now.idx);
			now.value-=val[i].value;vis=0;
		}else{
			ans+=now.value*(val[i].idx!=now.idx);
			vis=val[i].value-now.value;
			now.value=0;
		}
		if(vis){
			while(vis>val2[rq].value){
				ans+=val2[rq].value*(val[i].idx!=val2[rq].idx);
				vis-=val2[rq++].value;
			}
			ans+=vis*(val2[rq].idx!=val[i].idx);
			now={val2[rq].value-vis,val2[rq].idx};rq++;
		}
	}
	cout<<ans;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
AC
ÒÑ»ñµÃ 200pts 
*/

