#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5;
int n,a;
ll ans=0;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++)s+=c;
	}if(s.size()%2)for(int i1=s.size()/2-1,i2=s.size()/2+1;i1>=0,i2<=s.size()-1;i1--,i2++){if(s[i1]!=s[i2])ans++;}
	else for(int i1=s.size()/2-1,i2=s.size()/2;i1>=0,i2<=s.size()-1;i1--,i2++){if(s[i1]!=s[i2])ans++;}
	cout<<ans<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}