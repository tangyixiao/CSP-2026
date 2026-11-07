#include<bits/stdc++.h>
using namespace std;
int a[200005];
char c[200005];
map<char,long long> cnt1;
map<char,long long> cnt2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long sum=0;string s,s1;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		while(a[i]--)
		s+=c[i];
	}
	s1=s;
	long long ans=0;
	reverse(s.begin(),s.end());
	for(int i=0;i<s.length();i++){
		if(s1[i]!=s[i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
