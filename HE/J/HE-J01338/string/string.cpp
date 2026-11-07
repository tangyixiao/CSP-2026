#include<bits/stdc++.h>
using namespace std;
bool iiff(string s){
	int a=s.size();
	for(int i=0;i<a/2;i++){
		if(s[i]!=s[a-1-i])  return false;
	}return true;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	long long n,a[n+1],plan1=0,plan2=0;
	char c[n+1];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=0;j<a[i];j++){
			s+=c[i];
		}
	}
	if(iiff(s)){
		cout<<"0";
		return 0;
	}
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-1-i]){
			plan1++;
		}  
	}
	for(int i=s.size()-1;i>s.size()/2;i--){
		if(s[i]!=s[s.size()-1-i])  plan2++;
	}
	cout<<min(plan1,plan2);
	return 0;
} 
