#include<bits/stdc++.h>
using namespace std;
int n,ans=0;
//int a[200005];
//char b[200005];
string d="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		int s;char x;
		cin>>x>>s;
		ans+=s;
		for(int j=0;j<s;j++){
			string=string+x;
		}
	}
	int cnt=0;
	for(int i=0;1<ans/2;i++){
		if(string[i]!=string[ans-i])cnt++;
	}
	cout<<cnt;
	return 0;
}
