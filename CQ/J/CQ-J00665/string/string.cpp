#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char b[200005],ln,rn;
long long he,l,r;
long long ans;
int main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(long long i=1,j=n;i<j;){
		if(r>l){
			l+=a[i];
			ln=b[i];
			i++;
			if(ln!=rn)
				ans+=a[i]-l+r;
		}
		else{
			r+=a[j];
			rn=b[j];	
			j--;
			if(ln!=rn)
				ans+=a[j]-r+l;
		}
	}
	cout<<ans;
	return 0;
}
