#include <bits/stdc++.h>
using namespace std;
long long x,sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s,d;
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>d;
		for(int i=1;i<=x;i++){
			s+=d;
		}
	}
	string ans;
for(int i=s.size()-1;i>=0;i++){
	ans+=s[i];
	
}
	if(ans==d){
		cout<<0;
		return 0;
	}
	for(int i=n/2-1;i<n;i++){
		if(ans[i]!=s[i])sum++;
	}
	cout<<sum;
return 0;
}
