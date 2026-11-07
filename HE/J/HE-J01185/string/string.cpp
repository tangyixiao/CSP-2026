#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long a,m=0,x=0;
	char c;
	string s;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		for(int j=0;j<a;j++)s.push_back(c);
		m+=a;
	}
	long long r=m-1,l=0;
	while(r-l>=0){
		if(s[l]!=s[r])x++;
		l++,r--;
	}
	cout<<x;
	return 0;
}
