#include<bits/stdc++.h>
using namespace std;
long long n,ans;
string sss="";
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int cishu;
	string kong;
	for(int i=1;i<=n;i++){
		cin>>cishu>>kong;
		for(int j=1;j<=cishu;j++)sss+=kong;
	}for(int i=0;i<sss.size()/2;i++){
		if(sss[i]!=sss[sss.size()-1-i])ans++;
	}cout<<ans; 
} 
