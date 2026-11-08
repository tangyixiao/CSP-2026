#include<bits/stdc++.h>
using namespace std;
long long n,cnt=0,ans=0;
long long a[200005]={0};
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int u;
		cin>>u;
		cnt+=u;
		a[i]=u;
		cin>>b[i];
	}
	long long mid=(cnt)/2;
	long long c=0,r=n;
	for(int i=1;i<=n;i++){
		if(c+a[i]>mid){
			
			while(a[r]<=a[i]&&r!=i){
				
				if(b[i]!=b[r]){
					ans+=a[r];
				}
				a[i]-=a[r];
				a[r]=0;
				r--;
			}
			
//			long long uu=mid-c;
//			long long vv=a[i]-uu;
//			if(cnt%2==1){
//				vv--;
//			}
////			cout<<uu<<" "<<vv<<'\n';
//			if(uu>=vv){
//				ans+=(uu-vv);
//			}
//			else{
//				ans+=(vv-uu);
//			}
			break;
		}
		
		c+=a[i];
		while(a[r]<=a[i]){
			if(b[i]!=b[r]){
				
				ans+=a[r];
			}
			a[i]-=a[r];
			a[r]=0;
			r--;
		}
		if(b[i]!=b[r]){
			ans+=a[i];
		}
		a[r]-=a[i];
		a[i]=0;
		
	}
	
	cout<<ans;
	return 0;
}
