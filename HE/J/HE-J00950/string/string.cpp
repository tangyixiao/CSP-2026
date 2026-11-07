#include<bits/stdc++.h>
using namespace std;
int n;
string s;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long a;
		cin>>a;
		string s1;
		cin>>s1;
		for(int i=0;i<a;i++)
			s+=s1;
	}
	unsigned long long ans=0;
	for(long long i=0,j=s.size()-1;i<=j;i++,j--){
		if(s[i]!=s[j])
			ans++;
		else
			continue;
	}
	cout<<ans;
	return 0;
}

