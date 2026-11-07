#include<bits/stdc++.h>
using namespace std;
int n,ans;
string s;
int hui(){
	string l,r;
	for(int i=0;i<s.size();i++){
		r[i]=s[s.size()-i-1];
		l+=r[i];
	}
	if(l==s){
		return 1;
	}
	return 0;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long a;
		char c;
		cin>>a>>c;
		while(a--){
			s+=c;
		}
	}
	if(hui()==1){
		cout<<0;
		return 0;
	}else{
		if(s.size()%2==1){
			for(int i=s.size()-1,j=0;i>s.size()/2;i--){
				if(s[i]!=s[j]){
					s[j]=s[i];
					ans++;
					j++;
				}
				if(hui()==1){
					cout<<ans;
					return 0;
				}
			}
		}else{
			for(int i=s.size()-1,j=0;i>s.size()/2-1;i--){
				if(s[i]!=s[j]){
					s[i]=s[j];
					ans++;
					j++;
				}
				if(hui()==1){
					cout<<ans;
					return 0;
				}
			}
		}
	}
	return 0;
}