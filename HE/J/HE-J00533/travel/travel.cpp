#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,c2,s1,s2,ans;
	cin>>c1>>s1>>c2>>s2;
	int a=s1[2]-'0',b=s2[2]-'0';
	if(c1==c2){
		ans+="1";
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			ans+="1";
			if(a<=19&&b<=19||a>=20&&b>=20){
				ans+="1";
				if(a==b+1||b==a+1){
					ans+="1";
				}else ans+="0";
			}else ans+="0";
		}else ans+="0"; 
	}else ans+="0";
	if(ans.size()==4) cout<<ans<<endl;
	else{
		for(int i=1;i<=4;i++){
			if(ans.size()==4) break;
			ans+="0";
			
		}
		cout<<ans;
	}
}
