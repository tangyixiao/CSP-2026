#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	int n;
	long long d=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		d=d+a;
		string b;
		cin>>b;
		for(int j=1;j<=a;j++){
			s=s+b;
		}
	}
	long long sum=0;
	for(long long i=0;i<=d/2;i++){
		if(s[i]!=s[d-i-1]){
			sum++;
		}
	}
	cout<<sum;
	return 0; 
} 
