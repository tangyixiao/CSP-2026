#include<iostream>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	char c;
	int n,a;
	long long ans=0;
	cin>>n;
	for(long long i = 1;i <= n;i++){
		cin>>a>>c;
		for(int j = 1;j <= a;j++)s+=c;
	}
	for(long long i = 0;i < s.size()/2;i++)if(s[i]!=s[s.size()-1-i])ans++;
	cout<<ans;
	return 0;
}