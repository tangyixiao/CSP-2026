#include<bits/stdc++.h>
using namespace std;
long long len,mid,l,r,ans,la,ra;
long long a[200005][2],n;
char c[200005],lc,rc;
int main(){
	freopen(stdin,"string.in",r);
	freopen(stdout,"string.out",w);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i][0]>>c[i];
		len+=a[i][0];
		a[i][0]=len-a[i][0];
	}
	for(int i=0;i<n-1;i++){
		a[i][1]=a[i+1][0]-1;
	}
	a[n-1][1]=n;
	mid=len/2;
	l=0,r=len;
	la=0,ra=n-1;
	while(l<mid||r>mid+1){
		if(c[la]!=c[ra]){
			ans+=min(min(a[la+1][0],mid)-l,r-max(mid,a[ra-1][1]));
		}
		if(a[la+1][0]>len-a[ra][0]){
			r=max(a[ra-1][1],mid);
			l=len-r;
			if(r>mid+1){
				ra--;
			}
		}
		else if(a[la+1][0]<len-a[ra][0]){
			l=min(a[la+1][0],mid);
			r=len-l;
			if(l<mid){
				la++;	
			}
		}else{
			l=min(a[la+1][0],mid);
			r=len-l;
			if(l!=mid){
				la++;	
			}
			if(r!=mid){
				ra++;	
			}
		}		
	}
	cout<<ans;
	return 0;
}
