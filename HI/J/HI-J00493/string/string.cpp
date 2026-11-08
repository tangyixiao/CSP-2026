#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	long long n,x,m,sum=0,ans=0;
	char c;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>c;
		sum+=x;
		for(int j=0;j<x;j++){
			s+=c;
		}
	}
	for(long long i=0, j=sum-1;i<sum/2&&j>ceil(m/2);i++,j--){
		if(s[i]!=s[j]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
