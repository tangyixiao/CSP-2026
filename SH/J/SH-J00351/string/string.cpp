#include <bits/stdc++.h>
using namespace std;
int n,a[200010];
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	long long nn=0,ans=0;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i],nn+=a[i];
	for(long long i=1,ti=1,j=n,tj=nn;ti<tj&&i<j;){
		if(c[i]==c[j]){
			if(a[i]<a[j]){
				ti+=a[i],tj-=a[i],a[j]-=a[i],i++;
			}
			else if(a[i]==a[j]){
				ti+=a[i],tj-=a[i],i++,j--;
			}
			else if(a[i]>a[j]){
				ti+=a[j],tj-=a[j],a[i]-=a[j],j--;
			}
		}
		else{
			if(a[i]<a[j]){
				ans+=a[i];
				ti+=a[i],tj-=a[i],a[j]-=a[i],i++;
			}
			else if(a[i]==a[j]){
				ans+=a[i]; 
				ti+=a[i],tj-=a[i],i++,j--;
			}
			else if(a[i]>a[j]){
				ans+=a[j];
				ti+=a[j],tj-=a[j],a[i]-=a[j],j--;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
