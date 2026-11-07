#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	int ans=0;
	cin>>n;
	string str="";
	for(int i=1;i<=n;i++){
		int tmp;
		char c;
		cin>>tmp>>c;
		for(int j=1;j<=tmp;j++) str+=c;
	}
	int len=str.length();
	for(int i=0;i<len;i++){
		if(str[i]!=str[len-i-1]) ans++;
		cout<<ans<<endl;
		if(i+1>=len-i-1) break;
	}
	cout<<ans;
	return 0;
}
