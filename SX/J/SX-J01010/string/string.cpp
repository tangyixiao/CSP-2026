#include<bits/stdc++.h>
using namespace std;
long long n,m=0;
string c,o;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long a[n],l=0;

	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
		for(int j=l;j<l+a[i];j++){
			o[j]=c[i];
//			cout<<o[j]<<endl;
		}
	}int p=0,q=l;
	for(int i=0;i<l;i++){
		if(o[p]!=o[q]){
			p+=1;
			q-=1;
   			m+=1;
  		}
	}
	cout<<m;
	return 0;
}