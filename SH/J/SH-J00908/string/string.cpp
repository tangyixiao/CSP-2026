#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long ans=0;
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++){
		long long a1;
		char a2;
		cin>>a1>>a2;
		for(int i=1;i<=a1;i++)s+=a2;
	}
	for(int i=0,j=s.size()-1;i<=j;i++,j--){
		if(s[i]!=s[j])ans++;
	}
	cout<<ans;
	return 0;
}
