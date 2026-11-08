#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin>>n;
	long long x;
	char y;
	string s="";
	long long g;
	set<char>b;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		b.insert(y);
		g+=x;
		for(int j=0;j<x;j++){
			s+=y;
		}
	}
	if(b.size()==1){
		cout<<0;
		return 0;
	}
	string s1=s;
	long long sum=0;
	reverse(s.begin(),s.end());
	for(int i=0;i<s.size();i++){
		if(s1[i]!=s[i]){
			sum++;
		}
	}
	cout<<sum/2;
	return 0;
} 
