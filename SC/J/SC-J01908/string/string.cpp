#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;

typedef unsigned long long ull;

int n;
ull a[N]; 
char c[N];

ull ans,len,mid,tot,partl,partr;

struct str{
	ull cnt;
	char cc;
};

str ll[N],rr[N];

int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	
	mid=len/2;
	
	int pl=1;
	tot=0;
	while(1){
		ull t=tot+a[pl];
		if(t>mid){
			tot+=a[pl]-(t-mid);
			ll[pl].cnt=a[pl]-(t-mid);
			ll[pl].cc=c[pl];
			break;
		}
		else{
			tot+=a[pl];
			ll[pl].cnt=a[pl];
			ll[pl].cc=c[pl];
		}
		if(tot==mid) break;
		pl++;
	}
	
	
	int pr=n,p=1;
	tot=0;
	
	while(1){
		ull t=tot+a[pr];
		
		if(t>mid){
			tot+=a[pr]-(t-mid);
			rr[p].cnt=a[pr]-(t-mid);
			rr[p].cc=c[pr];
			break;
		}
		else{
			tot+=a[pr];
			rr[p].cnt=a[pr];
			rr[p].cc=c[pr];
		}
		if(tot==mid) break;
		pr--;
		p++;
	}
	
	
	int tl=1,tr=1;
	ull cl=ll[1].cnt,cr=rr[1].cnt;
	while(1){
		
		if(tl>pl||tr>p) break;
		
		if(ll[tl].cc!=rr[tr].cc){
			ans+=min(cl,cr);
		}
		
		if(cl>=cr){
			cl-=cr;
			cr=0;
		}
		else{
			cr-=cl;
			cl=0;
		}
		
		if(cl==0){
			tl++;
			cl=ll[tl].cnt;
		}
		if(cr==0){
			tr++;
			cr=rr[tr].cnt;
		}
		
	}
	
	cout<<ans;
	
	return 0;
}