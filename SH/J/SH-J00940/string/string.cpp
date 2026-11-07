#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="";
	int n,a,cnt=0;
	char c;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	int len=s.size();
	for(int i=0;i<len;i++){
		if(s[i]!=s[len-1-i]){
			cnt++;
		}
	}
	cout<<cnt/2;
	return 0;
}
