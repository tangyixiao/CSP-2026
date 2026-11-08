#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],s,s2,k=1,k2=1,ans,sum;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++){
    	cin>>a[i]>>c[i];
    	sum+=a[i];
	}
	s=a[1];
	s2=a[n];
	for(long long i=1;i<=sum/2;i++){
		if(s+1==i){
			k++;
			s+=a[k];
		}
		if(s2+1==i){
			k2++;
			s2+=a[n-k2+1];
		}
    	if(c[k]!=c[n-k2+1]){
    		ans++;
		}
	}
	cout<<ans;
	return 0;
}
