#include<bits/stdc++.h>
using namespace std;
int n,a,ans=1e9;
char c;
string s;
bool check(string s){
	string s1=s;
	reverse(s1.begin(),s1.end());
	if(s1==s){
		return 1;
	}
	else{
		return 0;
	}
}
void f(int sum,int i){
	int j=s.size()-i-1;
	if(!(i<=j)||check(s)){
		ans=min(ans,sum);
		return;
	}
	if(s[i]!=s[j]){
		char c=s[i];
		s[i]=s[j];
		f(sum+1,i+1);
		s[i]=c;
		c=s[j];
		s[j]=s[i];
		f(sum+1,i+1);
		s[j]=c;
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a >> c;
		while(a--){
			s+=c;
		}
	}
	f(0,0);
	cout << ans;
	return 0;
}