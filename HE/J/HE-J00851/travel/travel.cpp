#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int ans1,ans2,ans3,ans4;
	char s[3]; 
	if(c1==c2){
		ans1=1;
	}else{
		ans1=0;
	}
	if(s1[1]==s2[1]&& s1[2]==s2[2]){
		ans2=1;
		if(s1[1]==s2[1]&& s1[2]==s2[2] && s1[3],s2[3]='A'||'B'||'C'){
			ans3=1;
		}else if(s1[3],s2[3]='D'||'F'){
			ans3=1;
		}
		if(s1[3]+'1'==s2[3]|| s2[3]+'1'==s1[3]){
		ans4=1;
		}else{
			ans4=0;
			ans3=0;
		}
		
		
	}else{
		ans2=0;
		
	}
	
	cout<<ans1<<ans2<<ans3<<ans4;
	
	
	
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
