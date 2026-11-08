#include<bits/stdc++.h>
using namespace std;
bool f(string s){
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-1-i]){
			return 0;
		}
	}
	return 1;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
    int n;
    cin>>n;
    long long a[2005];
    char c[2005];
    for(int i=0;i<n;i++){
    	cin>>a[i]>>c[i];
	}
	for(int i=0;i<n;i++){
		for(long long j=0;j<a[i];j++){
    		s=s+c[i];
		}
	}
	cout<<s;
	if(n==1){
		cout<<0;
		return 0;
	}else if(n==2){
		if(c[0]==c[1]){
			cout<<0;
			return 0;
		}else{
			cout<<min(a[0],a[1]);
			return 0;
		}
	}else{
		for(int i=0;1;i++){
			if(f(s)){
				cout<<i;
				return 0;
			}else{
				s[i]=s[s.size()-1-i];
			}
		}
	}
	return 0;
}


