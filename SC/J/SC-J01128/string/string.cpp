#include <bits/stdc++.h>
using namespace std;
long long n,h=0,cnt=0;
long long m;
double a[1000005];
long long b[10000000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){	
		cin>>m;
		cin>>a[i];

		for(long long j=0;j<m;j++){
			b[h]=a[i];
			h++;
		}
	}
	for(int i=0;i<ceil(h/2);i++){
		if(b[i]!=b[abs(h-1-i)]){
			cnt++;
		}	
	}	
	cout<<cnt;
	return 0;
}