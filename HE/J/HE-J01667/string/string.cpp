#include<bits/stdc++.h>
using namespace std;
int a[200010];
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++) s=s+c[i];
	}
	cout<<s<<endl;
	int ans=0;
	if(s.size()%2==0){
		for(int i=s.size()/2+1;i<s.size();i++){
			if(s[i]!=s[s.size()/2-i+s.size()/2]){
				s[i]=s[s.size()/2-i+s.size()/2];
				ans++;
			}
		}
	}
	else{
		for(int i=s.size()/2+1;i<s.size();i++){
			if(s[i]!=s[s.size()/2+1-i+s.size()/2+2]){
				s[i]=s[s.size()/2+1-i+s.size()/2+2];
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}
