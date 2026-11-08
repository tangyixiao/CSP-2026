#include<bits/stdc++.h>
using namespace std;
#define int long long
int x[200005];
signed main(){
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a;
	int b;
	int ans=0;
	cin>>a>>b;
	int maxx=213333;
	for(int i=1;i<=a;i++){
		cin>>x[i];
	}
	for(int i=1;i<=a;i++){
		for(int j=i+1;j<=a;j++){
		    string n="",m="";
		    
	        while(x[i]!=0){
		        n+=(x[i]%2+'0');
		        x[i]/=2;
	        }
	        
	        while(x[j]!=0){
		        m+=(x[j]%2+'0');
		        x[j]/=2;
	        }
	        
	        int len=min(n.size(),m.size());
	        string s="";
	        for(int k=0;k<=len-1;k++){
		        if(n[k]==m[k])
		        s+="1";
		        else 
		        s+="0";
	        }
	        
	        int quan=1;
	        for(int l=0;l<=s.size()-1;l++){
	        	ans+=(s[l]-'0')*quan;
	        	quan*=2;
			}
			maxx=max(maxx,ans);ans=0;
		}
		
	}
	cout<<maxx;
	return 0;
}
