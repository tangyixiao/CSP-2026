#include<bits/stdc++.h>
using namespace std;
int n;int a,num=0;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		char h;
		cin>>a>>h;
		for(int i=1;i<=a;i++){
			s=s+h;
		}
	}
	for(int i=0;i<ceil(s.size()/2);i++){
		if(s[i]!=s[s.size()-1-i]){
			num++;
		}
	}
	cout<<num;
	return 0;
}
