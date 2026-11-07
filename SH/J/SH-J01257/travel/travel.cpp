#include<bits/stdc++.h>
using namespace std;
bool ans[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3){
		ans[1]=1;
		if(s2[0]==s4[0]&&s2[1]==s4[1]){
			ans[2]=1;
			if((s2[2]>'C'&&s4[2]>'C')){
				ans[3]=1;ans[4]=1;
			}
			else if(s2[2]<='C'&&s4[2]<='C'){
				ans[3]=1;
				if((s2[2]=='A'&&s4[2]=='C')||(s2[2]=='C'&&s4[2]=='A'))ans[4]=0;
				else ans[4]=1;
			}
			else{
				ans[3]=0;ans[4]=0;
			}
		}
		else{
			for(int i=2;i<=4;++i)ans[i]=0;
		}
	}
	else{
		for(int i=1;i<=4;++i)ans[i]=0;
	} 
	for(int i=1;i<=4;++i)cout<<ans[i];
	fclose(stdin);fclose(stdout);
	return 0;
} 
