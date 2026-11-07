#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
struct node{
	int a;
	char b; 
}x[200009];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string s="";
	for (int i=1;i<=n;i++){
		cin>>x[i].a;
		cin>>x[i].b;
		for (int j=1;j<=x[i].a;j++){
			s+=x[i].b;
		}
	}
	int half=(s.size())/2;
	s=" "+s;
	int ans=0;
	for (int i=1;i<=half;i++){
		if (s[i]!=s[n-i+1]){
			ans++;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
