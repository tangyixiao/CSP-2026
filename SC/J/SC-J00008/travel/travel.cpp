#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
string a,b,c,d;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>b>>c>>d;
	string ans;
	if(a==c){
		ans+="1";
	}else{
		ans+="0";
	}
	if(a==c){
		if((b[0]+b[1])==(d[0]+d[1])){
			ans+="1";
		}else{
			ans+="0";
		}
	}
	if(a==c){
		if((b[0]+b[1])==(d[0]+d[1])){
			if(b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C'){
				ans+="1";
			}else if(b[2]>='D'&&b[2]<='F'&&d[2]>='D'&&d[2]<='F'){
				ans+="1";
			}else{
				ans+="0";
			}
		}
	}
	
	
	if(a==c){
		if((b[0]+b[1])==(d[0]+d[1])){
			bool flag=1;
			if(b[2]=='C'&&d[2]=='D'){
				flag=0;
			}
			if(d[2]=='C'&&b[2]=='D'){
				flag=0;
			}
			if(flag==1){
				if(abs(b[2]-d[2])==1){
					ans+="1";
				}
			}
			
		}
	} 
	while(ans.size()<4)ans+="0";
	cout<<ans;
	return 0;
}