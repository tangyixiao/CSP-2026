#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
char c[N];
bool hw(string s){
	string ret;
	for(int i=s.size()-1;i>=0;i--){
		ret+=s[i];
	}
	if(ret==s) return 1;
	else return 0;
}
int ans;
int j(string s){
	for(int i=(s.size()+1)/2;i>=0;i--){
		if(s[i]!=s[s.size()-i]){
			s[s.size()-i]=a[i];
			ans++;
		}
	} 
	return ans;
}
int ans1;
int jj(string s){
	for(int i=(s.size()+1)/2;i>=0;i--){
		if(s[i]!=s[s.size()-i]){
			s[i]=s[s.size()-i];
			ans1++;
		}
	} 
	return ans1;
}
string ss;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			ss+=c[i];
		}
	}
	if(hw(ss)) {
		cout<<0;
		return 0;
	}
	else{
		ans=j(ss);
		ans1=jj(ss);
	}
	cout<<min(ans,ans1);
	return 0;
}
