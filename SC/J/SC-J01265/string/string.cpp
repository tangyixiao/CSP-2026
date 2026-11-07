#include <bits/stdc++.h>
using namespace std;
int n,ans;
string str="";
string dfs(int x,string c){
	if(x==1)
		return c;
	if(x==0)
		return "";
	string s=dfs(x/2,c);
	if(x%2==0)
		return s+s;
	return s+s+c;
}
int main(){
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int x;
		char ch;
		scanf("%d %c",&x,&ch);
		string s="";
		s=s+ch;
		str=str+dfs(x,s);
	}
	for(int i=str.size()-1;i>=0;i--){
		int j=str.size()-i-1;
		if(i<=j){
			break;
		}
		if(str[i]!=str[j]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}