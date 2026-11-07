#include<bits/stdc++.h>
using namespace std;
bool flag;
string s,ss,sss,ssss;
string ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>ss>>sss>>ssss;
	if(s!=sss){
		cout<<"0000";
		return 0;
	}
	if(s==sss){
		ans+="1";
	}
	if(ss[0]==ssss[0]&&ss[1]==ssss[1]){
		ans+="1";
		if(ss[2]>='A'&&ss[2]<='C'&&ssss[2]>='A'&&ssss[2]<='C'){
			ans+="1";
			flag=1;
			if(abs(int(ss[2])-int(ssss[2]))==1){
				ans+="1";
			}else{
				ans+="0";
			}
		}
		if(ss[2]>='D'&&ss[2]<='F'&&ssss[2]>='D'&&ssss[2]<='F'){
			ans+="1";
			flag=1;
			if(abs(int(ss[2])-int(ssss[2]))==2){
				ans+="1";
			}else{
				ans+="0";
			}
		}
		if(!flag){
			ans+="00";
		}
	}else{
		ans+="000";
	}
	cout<<ans;
	return 0;
}
