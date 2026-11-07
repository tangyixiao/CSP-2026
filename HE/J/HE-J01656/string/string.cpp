#include <bits/stdc++.h>
using namespace std;
const int MAXN=2e5+10;
struct D{
	long long l; char c;
}; vector<D> d;
int n,l,r,tot=0;
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1,ln;i<=n;i++){
		char c; cin>>ln>>c;
		if(i==1||c!=d[tot].c) d.push_back({ln,c}),tot++; 
		if(i!=1&&c==d[tot].c) d[d.size()-1].l+=ln;
	} l=0; r=d.size()-1;
	while(l<r){
		if(d[l].c==d[r].c){
			int spl=min(d[l].l,d[r].l);
			d[l].l-=spl; d[r].l-=spl;
			if(!d[l].l) l++;
			if(!d[r].l) r--;
		} else{
			int spl=min(d[l].l,d[r].l);
			ans+=spl;
			d[l].l-=spl; d[r].l-=spl;
			if(!d[l].l) l++;
			if(!d[r].l) r--;
		}
	} cout<<ans;
	return 0;
}
