#include<bits/stdc++.h>
using namespace std;
long long a[200010];char c[200010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	long long sumn=0; 
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
		sumn+=a[i];
	}
	
	long long halfn=sumn/2,cnt=0;//cout<<halfn<<"\n";
	long long l=1,r=n,now=0;
	while(now<halfn){
		if(a[l]==0) l++;
		if(a[r]==0) r--;
//		if(l==r){
//			
//		}
		long long aa=min(a[l],a[r]);
		if(now+aa>halfn){
			aa=halfn-now;
		}
		
		if(c[l]==c[r]){
			cnt+=aa;
		} 
		a[l]-=aa;
		a[r]-=aa;
		now+=aa;
	} 
	cout<<halfn-cnt;
	return 0;
}

