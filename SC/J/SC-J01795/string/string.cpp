#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0;
	string ans;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		char s;
		cin>>a>>s;
		for(int j=0;j<a;j++){
			ans+=s;
		}
	}
	for(int i=0;i<ans.size()/2;i++){
		if(ans[i]!=ans[ans.size()-1-i]){
			cnt++;
		}}
		cout<<cnt;
	return 0;}