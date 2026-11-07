#include<bits/stdc++.h>
using namespace std;
int g[100000005];
char cl[100000005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int ans=0;
	cin>>n;
	for(int i=0;i<n;i++) cin>>g[i]>>cl[i];
	for(int i=0;i<n;i++)
		for(int j=0;j<g[i];j++) s+=cl[i];
	long long len=s.length();
	int l=0,r=len-1;
	while(l<=r){
		if(s[l]!=s[r]) ans++;
		l++;r--;
	}
	cout<<ans;
	fclose(stdin);fclose(stdout);
	return 0;
}