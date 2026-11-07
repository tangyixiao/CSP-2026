#include<bits/stdc++.h>
using namespace std;
bool tongce(string a,string b){
	if(a[2]>='A' && a[2]<='C' && b[2]>='A' && b[2]<='C'){
		return true;
	}
	if((a[2]=='F' || a[2]=='D') && (b[2]=='D' || b[2]=='F')){
		return true;
	}
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string ans="";
	if(c1==c2){
		ans+='1';
	//	cout<<c1<<' '<<c2<<endl;
	}
	else{
		ans+='0';
	}
	string r="",x="";
	r+=s1[0];
	r+=s1[1];
	x+=s2[0];
	x+=s2[1];
	if(c1==c2 && r==x){
		ans+='1';
		//cout<<r<<' '<<x<<endl;
	}
	else{
		ans+='0';
	}
	if(ans[1]=='1' && tongce(s1,s2)){
		ans+='1';
		//cout<<s1[2]<<' '<<s2[2]<<endl;
	}
	else{
		ans+='0';
	}
	if(ans[2]=='1'){
		if(s1[2]>='A' && s1[2]<='C' && s2[2]>='A' && s2[2]<='C'){
			if(s1[2]+1==s2[2] || s2[2]+1==s1[2]){
				ans+='1';
				//cout<<s1[2]<<' '<<s2[2]<<endl;
			}
			else{
				ans+='0';
			}
		}
		else if(s1[2]=='F' && s2[2]=='D' || s1[2]=='D' && s2[2]=='F'){
			ans+='1';
			//cout<<s1[2]<<' '<<s2[2]<<endl;
		}
		else if(s1[2]=='C' && s2[2]=='D' || s1[2]=='D' && s2[2]=='C'){
			ans+='0';
		}
		else{
			ans+='0';
		}
	}
	else{
		ans+='0';
	}
	cout<<ans;
	return 0;
}
