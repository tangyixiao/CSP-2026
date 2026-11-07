#include<bits/stdc++.h>
using namespace std;
long long n=0,m,sum=0,ans=0,l[100010],r[100010],b=0,ll,rr;
char a,c[100010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<=100008;i++){
		l[i]=0;
		r[i]=0;
	}
	for(int i=1;i<=n;i++){
		cin>>m>>a;
		l[sum]=b+1;
		r[sum]=b+m;
		c[sum]=a;
		b+=m;
		sum+=1;
	}
	ll=0,rr=sum-1;
	while(ll!=rr){
		if(r[ll]-l[ll]>r[rr]-l[rr]){
			if(c[ll]==c[rr]){
				l[ll]+=r[rr]-l[rr]+1;	
				rr-=1;
			}
			else{
				ans+=r[rr]-l[rr]+1;
				l[ll]+=r[rr]-l[rr]+1;
				rr-=1;
			}
		}
		else if(r[ll]-l[ll]<r[rr]-l[rr]){
			if(c[ll]==c[rr]){
				r[rr]-=r[ll]-l[ll]+1;
				ll+=1;
				
			}
			else{
				ans+=r[ll]-l[ll]+1;
				r[rr]-=r[ll]-l[ll]+1;
				ll+=1;
			}
		}
		else{
			if(rr-ll==1)
				if(c[ll]==c[rr]){
					ll+=1;
				}
				else{
					ans+=r[ll]-l[ll]+1;
					ll+=1;
				}
			else
				if(c[ll]==c[rr]){
					ll+=1;
					rr-=1;
				}
				else{
					ans+=r[ll]-l[ll]+1;
					ll+=1;
					rr-=1;
				}
		}
	}
	cout<<ans;
}
