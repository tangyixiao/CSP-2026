#include<bits/stdc++.h>
using namespace std;
long long a[200005];
long long s[200005];
char x[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int t;
	long long sum=0;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>a[i]>>x[i];
		s[i]=a[i]+s[i-1];
	}
	for(int i=1;i<=t;i++){
		int l=i,r=t,ans=-1;
		if(s[i-1]>=s[t]/2) break;
		//cout<<i<<' ';
		while(l<=r){
			int mid=l+(r-l)/2;
			if(s[t]-s[mid-1]<=s[i-1]){
				ans=mid;
				r=mid-1;
			}else l=mid+1;
		}
		ans--;
		if(i==1) ans=t;
		//cout<<ans<<" ";
		if(ans<=-1){
			cout<<1;
			break;
		}
		long long u1=a[ans];
		long long sss=u1-s[i-1];
		if(sss>=a[i]){
			if(x[i]!=x[ans]) sum+=a[i];
			//cout<<666<<i;
		}else{
			if(ans!=t) ans++;
			long long ll=ans,o=0;
			l=i,r=t,ans=i+1;
			while(l<=r){
				int mid=l+(r-l)/2;
				if(s[t]-s[mid-1]>=s[i]){
					ans=mid;
					l=mid+1;
				}else r=mid-1;
			}
			//cout<<i<<" ";
			//cout<<ans<<" ";
			//cout<<ll<<" "<<i<<'-';
			for(int j=ll;j>ans;j--){
				if(x[i]!=x[j]){
					//cout<<i<<" "<<j<<"\n";
					sum+=a[j];
					
				}
				o+=a[j];
			}
			//cout<<o<<" ";
			if(x[i]!=x[ans]){
				sum+=a[i]-o;
			}//aaabbcoooooaa
		}
		//cout<<sum<<" ";
	}
	cout<<sum;
	return 0;
}