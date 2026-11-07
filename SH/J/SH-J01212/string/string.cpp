#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int x;
char b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=0;i<n;i++) 
	{
		cin >> x>>b;
		for(int i=0;i<x;i++)
		{
			s+=b;
		}
	}
	int l=0,r=s.size()-1,cnt=0;
	while(l<r){
		if(s[l] !=s[r]){
			cnt++;
		}
		l++;
		r--;
	}
	cout<<cnt;
} 
