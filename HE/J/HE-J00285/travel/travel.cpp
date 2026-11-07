#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4,ans;
int cmp(string x){
	if(x[2]=='A'||x[2]=='B'||x[2]=='C'){
		return 11;
	}else if(x[2]=='D'||x[2]=='F'){
		return 22;
	}
}
bool check(string x1,string x2){
	if(x1[2]=='A'){
		if(x2[2]=='B'){
			return true;
		}
	}else if(x1[2]=='B'){
		if(x2[2]=='A'||x2[2]=='C'){
			return true;
		}
	}else if(x1[2]=='C'){
		if(x2[2]=='B'){
			return true;
		}
	}else if(x1[2]=='D'){
		if(x2[2]=='F'){
			return true;
		}
	}else if(x1[2]=='F'){
		if(x2[2]=='D'){
			return true;
		}
	}
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3){
		ans+="1";
		if(s2[0]==s4[0]&&s2[1]==s4[1]){
			ans+="1";
			if(cmp(s2)==cmp(s4)){
				ans+="1";
				if(check(s2,s4)){
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
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
