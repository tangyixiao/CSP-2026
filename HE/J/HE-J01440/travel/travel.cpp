#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2,ans;
	cin>>c1>>s1>>c2>>s2;
	int ss2=s2.size(),ss1=s1.size();
for(int i=1;i<=c1.size();i++){
		if(c1[i]==c2[i]){
			ans[1]=1;
		}else{
			ans[1]=0;
		}
	}
	for(int i=1;i<=s2.size();i++){
		if(s1[i]==s2[i]){
			ans[2]=1;
		}else{
			ans[2]=0;
		}
	}
	if(s1[ss1]>='A'&&s2[ss2]<='C'){
		if(s2[ss2]>='A'&&s2[ss2]<='C'){
			if(s1[ss1]+1==s2[ss2]||s1[ss1]-1==s2[ss2]){
				ans[4]=1;
			}else{
				ans[4]=0;
			}
			ans[3]=1;
		}else{
			ans[3]=0;
		}
	}
	if(s1[ss1]<='F'&&s1[ss1]>='D'&&s1[ss1]!='E'){
		if(s2[ss2]<='F'&&s2[ss2]>='D'){
			ans[4]=1;
			ans[3]=1;
		}else{
			ans[3]=0;
			ans[4]=0;
		}
	}
cout<<ans<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
