#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],ll[200010],rr[200010],siz,ans;
char c[200010];
int mi(){
	for(int i=1;i<=n;i++){
		if(ll[i]<=(siz+1)/2 && rr[i]>=(siz+1)/2) return i;
	}
	return 0;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		ll[i]=siz+1;
		siz+=a[i];
		rr[i]=siz;
	}
	int m=mi();
	if(siz%2){
		long long l=m,r=m,mid=(siz+1)/2;
		if(mid-ll[l]>rr[r]-mid) a[m]-=2*(rr[r]-mid),a[m]--,r++;
		else if(mid-ll[l]<rr[r]-mid) a[m]-=2*(mid-ll[l]),a[m]--,l--;
		else if(mid-ll[l]==rr[r]-mid) l--,r++;
		while(l!=0 && r!=n+1){
			if(c[l]==c[r]){
				if(mid-ll[l]>rr[r]-mid) a[l]-=a[r],r++;
				else if(mid-ll[l]<rr[r]-mid) a[r]-=a[l],l--;
				else if(mid-ll[l]==rr[r]-mid) l--,r++;
			}
			else{
				if(mid-ll[l]>rr[r]-mid) a[l]-=a[r],ans+=a[r],r++;
				else if(mid-ll[l]<rr[r]-mid) a[r]-=a[l],ans+=a[l],l--;
				else if(mid-ll[l]==rr[r]-mid) ans+=a[l],l--,r++;
			}
		}
	}
	else{
		long long l=m,r=m,mid=(siz+1)/2;
		if(ll[m+1]==mid+1) r=m+1;
		else{
			if(mid+1-ll[l]>rr[r]-mid) a[m]-=2*(rr[r]-mid),r++;
			else if(mid+1-ll[l]<rr[r]-mid) a[m]-=2*(mid+1-ll[l]),l--;
			else if(mid+1-ll[l]==rr[r]-mid) l--,r++;
		}
		while(l!=0 && r!=n+1){
			if(c[l]==c[r]){
				if(mid-ll[l]>rr[r]-mid) a[l]-=a[r],r++;
				else if(mid-ll[l]<rr[r]-mid) a[r]-=a[l],l--;
				else if(mid-ll[l]==rr[r]-mid) l--,r++;
			}
			else{
				if(mid-ll[l]>rr[r]-mid) a[l]-=a[r],ans+=a[r],r++;
				else if(mid-ll[l]<rr[r]-mid) a[r]-=a[l],ans+=a[l],l--;
				else if(mid-ll[l]==rr[r]-mid) ans+=a[l],l--,r++;
			}
		}
	}
	cout<<ans;
	return 0;
}
