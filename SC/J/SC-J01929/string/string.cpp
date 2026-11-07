#include<bits/stdc++.h>
using namespace std;
string s;
long long n;
long long sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int t;
		char c;
		cin>>t>>c;
		sum+=t;
		for(int i=1;i<=t;i++)s+=c;
	}
	long long p;
	for(int i=0,j=sum-1;i<=j;i++,j--){
		if(s[i]!=s[j])p++;
	}
	cout<<p;
	return 0;
} 