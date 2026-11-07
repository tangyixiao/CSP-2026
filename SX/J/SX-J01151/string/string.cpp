#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200005];
char c[200005];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int ans=0;
	for(int i=1,j=n;i<=n,j>=1,i<=j;j--,i++){
		if(a[i]>a[j]){
			int cnt=a[j];
			int an=0;
			if(c[j]!=c[i]){
				an=a[j];
			}
			while(a[i]>=cnt+a[j-1]){
				j--;
				if(c[i]!=c[j])an+=a[j];
				cnt+=a[j];
			}
			if(a[i]!=cnt+a[j-1]){
				a[j-1]-=a[i]-cnt;
				if(c[j-1]!=c[i]){
					an+=a[i]-cnt;
				}
			}
			ans+=an;
		}
		else if(a[i]==a[j]){
			if(c[i]!=c[j]){
				ans+=a[i];
			}
		}
		else{
			int cnt=a[i];
			int an=0;
			if(c[j]!=c[i]){
				an=a[i];
			}
			while(a[j]>=cnt+a[i+1]){
				i++;
				if(c[i]!=c[j])an+=a[i];
				cnt+=a[i];
			}
			if(a[j]!=cnt+a[i+1]){
				a[i+1]-=a[j]-cnt;
				if(c[i+1]!=c[j]){
					an+=a[j]-cnt;
				}
			}
			ans+=an;
		}
	}
	cout<<ans<<endl;
	return 0;
}
