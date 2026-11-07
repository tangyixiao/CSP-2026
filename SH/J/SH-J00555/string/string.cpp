#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0,k=1;
	string c;
	cin>>n;
	vector<int> a(n+1);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		string s;
		cin>>s;
		for(int j=1;j<=a[i];j++) c+=s;
	}
	for(int i=0;i<n;i++){
		if(c[i]!=c[n+1-i]) cnt++;
	} 
	cout<<cnt<<endl;
	return 0;
} 
