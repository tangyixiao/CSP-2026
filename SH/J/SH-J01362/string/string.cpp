#include <bits/stdc++.h>
using namespace std;
string s="",zm[200005];
int n,sl[200005];
int hw(){
	string a="";
	int j=0;
	for(int i=s.length();i>=0;i--){
		a[j]=s[i-1];
		j++;
	}
	for(int i=0;i<s.length();i++){
		if(a[i]!=s[i]) return 0;
	}
	return 1;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>sl[i]>>zm[i];
		for(int j=1;j<=sl[i];j++){
			s=s+zm[i];
		}
	}
	if(hw()){
		cout<<0;
		return 0;
	}
	cout<<1;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
