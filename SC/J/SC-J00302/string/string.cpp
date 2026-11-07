#include<bits/stdc++.h>
using namespace std;
int main(){	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,k,sum=0,ans=0;
	string a;
	char c;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>k>>c;
		for(int j=sum;j<=sum+k;j++){
			a[j]=c;
		} 
		sum+=k;
	}
	for(int i=0;i<=(sum/2)-1;i++){
		if(a[i]!=a[sum-1-i]) ans++;
	}
	cout<<ans;
	return 0;
	}