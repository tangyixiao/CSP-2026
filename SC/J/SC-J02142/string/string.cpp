#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int t;
	string s;
	cin>>t;
	long long sum=0;
	while(t--){
		int n;
		string a;
		cin>>n>>a;
		sum+=n;
		for(int i=1;i<=n;i++){
			s+=a;
		}
	}
	long long s1=0;
	for(int i=0;i<sum/2;i++){
		if(s[i]!=s[sum-i-1]){
			s1++;
		}
	}
	cout<<s1;
	return 0;
}