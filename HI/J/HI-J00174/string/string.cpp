#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,len=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		char y;
		cin>>x>>y;
		len+=x;
		for(int j=1;j<=x;j++){
			s+=y;
		} 
	}
	int cnt=0;
	for(int i=1;i<=len;i++){
		if(s[i]!=s[len+1-i]){
			cnt++;
		}
	}
	cout<<cnt/2;
	return 0;
}
