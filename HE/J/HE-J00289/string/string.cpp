#include <bits/stdc++.h>
using namespace std;
int ci[100005];
bool hw(string a){
	for(int i=0;i<=a.size()/2;i++){
		if(a[i]!=a[a.size()-1-i]){
			return true;
		}
	} 
	return false;
}
string a[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,c,mini=10e9;
	string s;
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>ci[i]>>a[i];
	} 
	for(long long i=0;i<n;i++){
		mini=min(mini,ci[i]);
	}
	for(long long i=0;i<n;i++){
		ci[i]-=mini;
		for(int k=0;k<ci[i]+1;k++){
			s+=a[i];
		}
	}
	long long i=0;
	while(hw(s)){
		s[s.size()-1-i]=s[i++];
	}
	i*=mini;
	cout<<i;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
