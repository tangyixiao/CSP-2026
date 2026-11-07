#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n;
int a[N],sum;
char c[N];
int ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	for(int i=1,j=n;i<j;){
		if(c[i]==c[j]){
			if(a[i]>=a[j]) a[i]-=a[j],j--;
			else a[j]-=a[i],i++;
		}else{
			if(a[i]>=a[j]) ans+=a[j],a[i]-=a[j],j--;
			else ans+=a[i],a[j]-=a[i],i++;
		}
	}
	cout<<ans;
}

