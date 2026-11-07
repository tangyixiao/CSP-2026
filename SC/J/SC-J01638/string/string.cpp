#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string s,s1;
	cin>>n;
	for(int i=1;i<=n;i++){
		int num;
		char a;
		cin>>num>>a;
		for(int j=1;j<=num;j++){
			s+=a;
		}
	}
	long long sum=0;
	for(int i=0;i<s.size();i++){
		if(s[i]!=s[s.size()-i-1]){
			sum++;
		}
	}
	cout<<sum/2;
	return 0;
} 