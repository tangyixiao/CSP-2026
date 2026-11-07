#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+1;
long long n,a[N],k,l,r,ans,j;
char ct[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>ct[i];
		k+=a[i];
	}
	j=n;
	r=k;
	int i=1;
 		while(i<j){
			if(ct[i]!=ct[j])ans+=min(a[i],a[j]);
			if(a[i]>a[j]) {
				l+=a[j];
				a[i]-=a[j];
				j--;
				r-=a[j];
			}
			else {
				r-=a[i];
				l+=a[i];
				a[j]-=a[i];
				i++;
			}
		}
	cout<<ans;
	return 0;
}