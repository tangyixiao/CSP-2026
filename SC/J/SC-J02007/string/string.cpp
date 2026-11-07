#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s="";
	int n;
	long long b[27]={0};
	cin>>n;
	while(n--){
		int m;
		char a;
		cin>>m>>a;
		while(m--){
			s+=a;
		}
	}
	long long int sum=0;
	for(long long int i=0;i<s.size();i++){
		if(s[i]!=s[s.size()-i-1]){
			sum++;
		}
	}
	cout<<sum/2;
	return 0;
}