#include<bits/stdc++.h>
using namespace std;

long long n,x[200009],ans;
char c[200009];

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1; i<=n; i++) {
		cin>>x[i]>>c[i];
	}
	long long l=0,r=0,i=1,j=n,cnt=0,t=n;
	while(t--){
		if(l<r){
			l+=x[i];
			if(c[i]!=c[j+1]){
				if(l<=r){
					ans+=x[i];
				}else{
					ans+=r-cnt;
				}
			}
			i++;
		}else if(r<l){
			r+=x[j];
			if(c[j]!=c[i-1]){
				if(r<=l){
					ans+=x[j];
				}else{
					ans+=l-cnt;
				}
			}
			j--;
		}else{
			l+=x[i];
			i++;
		}
		cnt=min(l,r);
	}
	cout<<ans;
	return 0;
}
