#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s="";
	int a;
	char c;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	
	int cnt=0;
	int j=s.size()-1;
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[j]){
			s[j]=s[i];
			cnt++;
		}
		j--;
	}
	cout<<cnt;
	return 0;
}
