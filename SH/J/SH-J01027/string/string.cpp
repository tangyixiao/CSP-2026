#include<bits/stdc++.h>
using namespace std;
struct chint{
	long long a;
	char c;
};
chint nuc[300999];
stack <chint> L,R;
long long n,ans,sum,a,b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>nuc[i].a>>nuc[i].c;
		sum+=nuc[i].a;
	}
	while(b<(sum+1)/2){
		a++;
		b+=nuc[a].a;
	}
	b-=nuc[a].a;
	int k=1;
	for(;k<a;k++) L.push(nuc[k]);
	k=n;
	for(;k>a;k--) R.push(nuc[k]);
	L.push({sum/2-b,nuc[a].c});
	b+=nuc[a].a;
	R.push({b-sum/2-sum%2,nuc[a].c});
	while(!R.empty() and !L.empty()){
		int l=L.top().a;
		int r=R.top().a;
		char lc=L.top().c;
		char rc=R.top().c;
		bool c=(L.top().c!=R.top().c);
		R.pop();L.pop();
		if(l>r){
			L.push({l-r,lc});
			ans+=c*r;
		}
		if(l<r){
			R.push({r-l,rc});
			ans+=c*l;
		}
		if(l==r) ans+=c*l;
	}
	cout<<ans;
}
