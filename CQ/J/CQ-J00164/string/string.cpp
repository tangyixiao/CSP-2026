#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	string str="";
	int ans=0;
	for(int i=0;i<n;i++){
		int a;char b;cin>>a>>b;
		for(int j=0;j<a;j++)str=str+b;
	}
	for(int i=0;i<((str.size()+1)/2);i++){
		if(str[i]!=str[str.size()-i-1])ans++;
	}cout<<ans;
	return 0;
}
//cout<<str<<str.size()

/*
*/
/*long long a[200000];char b[200000];
	long long len=0
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		len+=a[i];
	}
	for(int i=0;i<=(len+1)/2;i++){
		if()
	}*/
