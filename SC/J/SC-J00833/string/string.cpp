#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a=0,ans=0;string c;
	cin>>n;
	for(int i=0;i<n;i++){
		int t_a;string t_c;
		cin>>t_a>>t_c;
		a+=t_a;
		for(int j=0;j<t_a;j++) c+=t_c;
	}
	
	for(int i=0;i<a/2;i++){
		if(c[i]!=c[a-1-i]) ans++;
	}
	
	
	
	
	
	cout<<ans;
	
	return 0;
}