#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string ans="";
	if(c1!=c2){
		ans="0000";
	}else{
		if(s1[0]!=s2[0]||s1[1]!=s2[1]){
			ans="1000";
		}else{
			char n1=s1[2],n2=s2[2];
			bool flag;
			if('A'<=n1&&n1<='C'&&'A'<=n2&&n2<='C'){
				flag=true;
			}else if('D'<=n1&&n1<='E'&&'D'<=n2&&n2<='E'){
				flag=true;
			}else{
				flag=false;
			}
			if(!flag){
				ans="1100";
			}else{
				if(abs(n1-n2)!=1){
					ans="1110";
				}else{
					ans="1111";
				}
			}
		}
	}
	cout<<ans;
	return 0;
}