#include<bits/stdc++.h>
using namespace std;
string a;
int n;
long long l,ans;
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		char xc;
		int xi;
		cin>>xi>>xc;
		l+=xi;
		while(xi--)
			a+=xc;
	}
	for(long long i=0,j=l-1;i<=j;i++,j--)
		if(a[i]!=a[j])
			ans++;
	cout<<ans;
	return 0;
} 
