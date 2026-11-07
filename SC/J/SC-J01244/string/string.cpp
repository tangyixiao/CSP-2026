#include<bits/stdc++.h>
using namespace std;
string s="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		long long x;
		string c;
		cin>>x>>c;
		for(long long j=1;j<=x;j++) s+=c;
	}
	int l=s.size();
	int sum=0;
	if(l%2==0){
		for(int i=0;i<=l/2-1;i++){
			if(s[i]!=s[l-1-i]) sum++;
		}
	}
	else{
		for(int i=0;i<=(l+1)/2-1;i++){
			if(s[i]!=s[l-1-i]) sum++;
		}
	}
	cout<<sum;
	return 0;
}