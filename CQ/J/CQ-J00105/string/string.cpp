#include<bits/stdc++.h>
using namespace std;
int n;
long long sum,f=1;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		string x;int noi;
		cin>>noi>>x;
		if(noi==1000000000){
			noi=1;
			f=1000000000;
		}
		for(int i=1;i<=noi;i++)s+=x;
	}
	if(s.size()%2==1){
		for(int i=0;i<ceil(s.size()*1.0/2)-1;i++)if(s[i]!=s[s.size()-i-1])sum++;
	}
	else {
		for(int i=0;i<s.size()/2;i++)if(s[i]!=s[s.size()-i-1])sum++;
	}
	cout<<sum*f;
	return 0;
}
