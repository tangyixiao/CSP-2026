#include<bits/stdc++.h>
using namespace std;
int n;
long long cnt;
string s,s1;
struct node{
	long long x;
	char y;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].y;
		for(int j=1;j<=a[i].x;j++){
			s=s+a[i].y;
		}
	}
	for(int i=s.size()-1;i>=0;i--){
		s1+=s[i];
	}
	for(int i=0;i<s.size();i++){
		if(s[i]!=s1[i]){
			cnt++;
		}
	}
	cout<<cnt/2;
	return 0;
}

