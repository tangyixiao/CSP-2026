#include<bits/stdc++.h>
using namespace std;
const int N=1e9;
int n,a;
char b;
char s[N];
int ans;
int main(){
	freopen(string.in,"r",stdin);
	freopen(string.out,"w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		for(int j=0;j<a;j++){
			s[ans]=b;
			ans++; 
		}
	}
	long long vis=ans/2;
	long long x=0;
	for(long long i=0;i<vis;i++){
		if(s[i]!=s[ans-1-i]) x++;
	}
	cout<<x;
	return 0;
} 