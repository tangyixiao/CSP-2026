#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005]; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,s=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		s+=a[i];
	}
	long long cnt=0,l=1,r=s,lj=1,rj=n,lk=a[1],rk=a[n];
	while(l<r){
		if(lk>rk){
			if(c[lj]!=c[rj]){
				cnt+=rk;
			}
			l+=rk;
			r-=rk;
			lk-=rk;
			rj--;
			rk=a[rj];
			
		}else if(lk<rk){
			if(c[lj]!=c[rj]){
				cnt+=lk;
			}
			l+=lk;
			r-=lk;
			rk-=lk;
			lj++;
			lk=a[lj];
			
		}else if(lk==rk){
			if(c[lj]!=c[rj]){
				cnt+=lk;
			}
			l+=lk;
			r-=lk;
			rj--;
			rk=a[rj];
			lj++;
			lk=a[lj];
		}
	}
	cout<<cnt;
	return 0;
}
