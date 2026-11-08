#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	string x;
	for(int i=0;i<n;i++){
		int x;
		string y;
		cin>>x>>y;
		for(int i=0;i<x;i++){
			s+=y;
		}		
	}
	for(int i=s.size();i>0;i--){
		x+=i;
	}
	int a=s.size()/2;
	int sum=0;
	for(int i=0;i<a;i++){
		if(s[i]!=x[i])sum++;
	}
	cout<<sum;
	return 0;
}
