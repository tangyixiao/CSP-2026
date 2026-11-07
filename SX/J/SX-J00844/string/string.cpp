#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum=0;cin>>n;
	string a;
	while(n--){
		int b;cin>>b;
		string c;cin>>c;
		for(int i=sum;i<sum+b;i++)a[i]=c[0];
		sum+=b;
	}
	int ans=sum/2,wzt=0;
	for(int i=sum/2-1;i>=0;i--){
		if(a[i]!=a[ans])wzt++;
		ans++;
	}
	cout<<wzt;
	return 0;
}