#include<bits/stdc++.h>
using namespace std;
struct node{
	long long s,e;
	char c;
}a[200005];
long long cnt;
int n;
long long ans;
int check(long long x){
	int l=1,r=n;
	while(l<r){
		int mid=(l+r)>>1;
		if(x>a[mid].e){
			l=mid+1;
		}
		else{
			r=mid;
		}
	}
	return l;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long w;
		char v;
		scanf("%lld",&w);
		cin>>v;
		a[i].s=cnt+1ll;
		cnt+=w;
		a[i].e=cnt;
		a[i].c=v;
	}
	long long k=cnt/2;
	int f=check(k);
	if(a[f].e!=k){
		long long q=cnt+1ll-a[f].s,p=cnt+1ll-k;
		int z1=check(p),z2=check(q);
		if(z1==z2){
			if(a[z1].c!=a[f].c){
				ans+=(q-p+1ll);
			}
		}
		else{
			if(a[z1].c!=a[f].c){
				ans+=(a[z1].e-p+1ll);
			}
			if(a[z2].c!=a[f].c){
				ans+=(q-a[z2].s+1ll);
			}		
			for(int j=z1+1;j<z2;j++){
				if(a[j].c!=a[f].c){
					ans+=(a[j].e-a[j].s+1ll);
				}
			}	
		}
		f--;
	}
	for(int i=1;i<=f;i++){
		long long ed=cnt+1ll-a[i].s,st=cnt+1ll-a[i].e;
		int y1=check(st),y2=check(ed);
		if(y1==y2){
			if(a[y1].c!=a[i].c){
				ans+=(ed-st+1ll);
			}
		}
		else{
			if(a[y1].c!=a[i].c){
				ans+=(a[y1].e-st+1ll);
			}
			if(a[y2].c!=a[i].c){
				ans+=(ed-a[y2].s+1ll);
			}		
			for(int j=y1+1;j<y2;j++){
				if(a[j].c!=a[i].c){
					ans+=(a[j].e-a[j].s+1ll);
				}
			}	
		}
	}
	cout<<ans;
	return 0;
} 