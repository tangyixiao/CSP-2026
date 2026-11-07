#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++){
		int a;
		string c;
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}long long ans=0;
	long long len=s.size();
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-1-i])ans++;
	}cout<<ans;
	fclose(stdin);fclose(stdout);
	return 0;
}
