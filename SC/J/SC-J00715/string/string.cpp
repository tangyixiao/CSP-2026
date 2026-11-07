#include<bits/stdc++.h>
using namespace std;
char c[200009];
long long n,a[200009],l,r,ll,rr,lle,rle,ans;
int main(){
//	ios::sync_with_stdio(0);
//	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(c[i]==c[i-1]){
			a[i-1]+=a[i];
			n--;i--;
		}
	}
	ll=1;
	rr=n;
	lle=a[1];
	rle=a[n];
	l=a[1];
	r=a[n];
	while(ll-rr+1<=0){
		if(c[rr]!=c[ll]){
			if(lle<rle)ans+=lle,ll++,rle-=lle,l+=a[ll],lle=a[ll];
			else{
				ans+=rle;rr--;lle-=rle;r+=a[rr];rle=a[rr];
				if(!lle){
					ll++;l+=a[ll];lle=a[ll];
				}
			}
		}else{
			if(lle<rle)ll++,rle-=lle,l+=a[ll],lle=a[ll];
			else{
				rr--;lle-=rle;r+=a[rr];rle=a[rr];
				if(!lle){
					ll++;l+=a[ll];lle=a[ll];
				}
			}
		}
	}
	cout<<ans;
	return 0;
} 