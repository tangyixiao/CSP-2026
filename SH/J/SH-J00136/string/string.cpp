#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n;
	cin>>n;
	int a[200009];
	char c[200009];
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	int l=0,r=s.size()-1;
	long long cnt=0;
	while(l<=r){
		if(s[l]!=s[r]) cnt++;
		l++;
		r--;
	}
	cout<<cnt<<"\n";
	return 0;
} 
