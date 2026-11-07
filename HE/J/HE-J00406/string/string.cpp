#include<bits/stdc++.h>
using namespace std;
long long int n,a[100000005];
string s;
char c;
long long int ans=0;
bool hws(long long int i){
	for(long long int i=0;i<s.size();i++){
		if(s[i]==s[s.size()-1+i]){
			return true;
		}
		else return false;
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long int i=0;i<n;i++){
		cin>>a[i]>>c;
		for(long long int j=0;j<a[i];j++){
			s+=c;
		} 
	}
	for(long long int i=0;i<n;i++){
		if(hws(i)!=true){
			ans++;
			s[i]=s[s.size()-1+i];
			
		}
	}
	cout<<ans;
	return 0;
}
