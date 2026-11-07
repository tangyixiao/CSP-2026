#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,k[200005];
	char a;
	string s="0";
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>k[i];
		cin>>a;
		for(int j=1;j<=k[i];j++){
			s+=a;
		}
	}
	long long w=0;
	for(int i=1;i<=s.size()/2;i++){
		if(s[i]!=s[s.size()-i]){
			w++;
		}
	}
	cout<<w;
	return 0; 
}
