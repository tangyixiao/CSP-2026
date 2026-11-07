#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,m,g,cnt=0;
	string s,sf;
	char a;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m>>a;
		for(int j=0;j<=m;j++){
			s+=a;
		}
	}
	for(int i=s.size();i>=0;i++){
		sf+=s[i];
	}
	while(sf!=s){
		g=true;
		for(int i=0;i<=s.size();i++){
			for(int j=0;j<=s.size();j++){
				if(s[i]!=sf[i]){
					s[i]=sf[i];
					cnt++;
					g=false;
				}
			}
			if(g==false){
				break;
			}
		} 
		cout<<s<<" "<<sf<<endl;
	    for(int i=s.size()-1;i>=0;i++){
		    s[i]=sf[i];
	    }
    	cout<<s<<" "<<sf<<endl;
	}
	cout<<cnt/2;
	return 0;
}
