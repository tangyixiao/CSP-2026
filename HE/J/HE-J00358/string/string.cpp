#include<bits/stdc++.h>
using namespace std;
long long cnt,n,x;
string s;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>c;
		for(int i=1;i<=x;i++){
			s+=c;
		}
	}
	long long l=0,r=s.size()-1;
	while(l<=r){
		if(s[l]!=s[r]){
			cnt++;
		}
		l++;r--;
	} 
	cout<<cnt;
	return 0;
} 
