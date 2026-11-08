#include <bits/stdc++.h>
using namespace std;
int  a[10000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="";
	int n; cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		char b;
		cin>>b;
		s+=b;
	}
	int cnt=s.size()-1,i=0;
	long long sum=0;
	while(i<=cnt){
		if(s[i]!=s[cnt])sum+=min(a[i],a[cnt]);
		i++; cnt--;
	}
	cout<<sum;
	return 0;
}
