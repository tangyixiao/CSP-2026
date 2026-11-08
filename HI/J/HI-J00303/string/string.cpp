#include <bits/stdc++.h>
using namespace std;
int a[1000000];
char c[1000000];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum=0;cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long l=1,r=n;
	long long ll=a[1],rr=a[n];
	while(l<=r){
		long long m=min(ll, rr);
        if (c[l]!=c[r])sum+=m;
		ll-=m;rr-=m;
        if(ll==0){
			l++;
        	ll=a[l];
        }
		if(rr==0){
            r--;
            rr=a[r];
	}
	}
	cout<<sum;
	


	return 0;
}
