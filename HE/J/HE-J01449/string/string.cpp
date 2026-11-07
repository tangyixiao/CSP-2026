#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,m;
	int cnt=0;
	string s,sf;
	bool g;
	char a;
	cin>>n;	
	for(int i=1;i<=n;i++){
		cin>>m>>a;
		for(int j=0;j<m;j++){
			s+=a;
		}
	}	
	for(int i=s.size()-1;i>=0;i--){
		sf+=s[i];
	}
	while(sf!=s){
		g=true;
		for(int i=0;i<s.size();i++){
			for(int j=0;j<sf.size();j++){
				if(s[i]!=sf[i]){
					s[i]=sf[i];
					cnt++;
					g=false;
					break;
				}
			}
			if(g==false){
				break;
			}
		}
		int x=0;
		for(int i=s.size()-1;i>=0;i--){
			sf[x]=s[i];
			x++; 
		}
		cout<<s<<" "<<sf<<endl;
	}
	cout<<cnt;
	return 0;
} 
