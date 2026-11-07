#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200005],t[200005];
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		t[i]=t[i-1]+a[i];
	}//c[i]<-t[i-1]+1
	int l=1,r=n,ll=1,rr=t[n],cnt=0;
	while(l<=r && ll<=rr){
		//cout<<l<<" "<<r<<" "<<ll<<" "<<rr<<" "<<cnt<<"\n";
		//cout<<a[l]<<" "<<a[r]<<"\n";
		if(a[l]>a[r]){
			ll+=a[r];
			rr-=a[r];
			if(c[l]!=c[r]){
				cnt+=a[r];
			}
			a[l]-=a[r];
			r--;
		}else if(a[l]<a[r]){
			ll+=a[l];
			rr-=a[l];
			//cout<<c[l]<<" "<<c[r]<<"\n";
			if(c[l]!=c[r]){
				cnt+=a[l];
			}
			a[r]-=a[l];
			l++;
		}else{
			ll+=a[l];
			rr-=a[l];
			if(c[l]!=c[r]){
				cnt+=a[l];
			}
			l++,r--;
		}
	}
	cout<<cnt;
	return 0;
}
//Trick||Treat! 9:17