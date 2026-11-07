#include <bits/stdc++.h>
using namespace std;
int main(){
		freopen("string.in","r",stdin);
		freopen("string.out","w",stdout);
		string s;
		long long n,m,ans=0;
		char c;
		cin>>n;
			for(int i=0;i<n;i++){
				cin>>m>>c;
				for(int j=0;j<m;j++){
					s+=c;
				}		
			}	
	
			for(int i=0;i<s.size();i++){
				if(s[i]!=s[s.size()-i-1]){
					ans++;
				}
			}	
			cout<<ans/2<<endl;
	return 0;
}
