#include<bits/stdc++.h>
#define var long long
using namespace std;
const var N = 2e5+10;
var n,a[N],x[N],y[N],sa[N],sx[N],cha[N*5];
char c[N];
//struct node{
//	var typ,idx,val;
//	bool operator<(node b){
//		return val<b.val;
//	}
//};
//vector<node> nd;
vector<var> li,ql,qr;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(var i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		//cerr<<a[i]<<" ";
		x[n+1-i]=a[i]; y[n+1-i]=c[i];
	}
	for(var i=1;i<=n;i++){
		sa[i]=sa[i-1]+a[i]; sx[i]=sx[i-1]+x[i];	
		//cerr<<sx[i-1]+1<<"-"<<sx[i]<<endl;
		li.push_back(sa[i]); li.push_back(sa[i-1]+1);
		li.push_back(sx[i]); li.push_back(sx[i-1]+1);
		qr.push_back(sa[i]); ql.push_back(sa[i-1]+1);
		qr.push_back(sx[i]); ql.push_back(sx[i-1]+1);
	} 
	sort(li.begin(),li.end()); li.erase(unique(li.begin(),li.end()),li.end());
	sort(ql.begin(),ql.end()); ql.erase(unique(ql.begin(),ql.end()),ql.end());
	sort(qr.begin(),qr.end()); qr.erase(unique(qr.begin(),qr.end()),qr.end());
	for(var i=1;i<=n;i++){
		var l=lower_bound(li.begin(),li.end(),sa[i-1]+1)-li.begin();
		var r=lower_bound(li.begin(),li.end(),sa[i])-li.begin();
		//cerr<<l<<" "<<r<<endl;
		cha[l]+=c[i]; cha[r+1]-=c[i];
	}
	for(var i=1;i<=n;i++){
		var l=lower_bound(li.begin(),li.end(),sx[i-1]+1)-li.begin();
		var r=lower_bound(li.begin(),li.end(),sx[i])-li.begin();
		cha[l]-=y[i]; cha[r+1]+=y[i];
	}
	for(var i=0;i<li.size();i++) {
		cha[i]=cha[i-1]+cha[i];
		//cerr<<cha[i]<<" ";
	}
	var ans=0;
	for(var i=0;;i++){
		var r=qr[i],l=ql[i];
		if(l>(sa[n])/2) break;
		if(r>(sa[n])/2) r=(sa[n])/2;
		if(cha[lower_bound(li.begin(),li.end(),l)-li.begin()]!=0){
			ans+=r-l+1; //cerr<<l<<" "<<r<<endl;
		} 
	}
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
