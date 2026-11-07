#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int cr,cx;
int pr,px;
int sr,sx;
string ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	cr=(c1[0]-'0')*10+c1[1]-'0';
	cx=(c2[0]-'0')*10+c2[1]-'0';
	pr=(s1[0]-'0')*10+s1[1]-'0';
	px=(s2[0]-'0')*10+s2[1]-'0';
	sr=s1[2]-'A'+1;
	sx=s2[2]-'A'+1;
	if(cr==cx){
		ans+="1";
		if(pr==px){
			ans+="1";
			if(sr<=3&&sx<=3||sr>3&&sx>3){
				ans+="1";
				if(abs(sr-sx)==1){
					ans+="1";
				}else{
					ans+="0";
				}
			}else{
				ans+="00";
			}
		}else{
			ans+="000";
		}
	}else{
		ans+="0000";
	}
	cout<<ans;
	return 0;
}