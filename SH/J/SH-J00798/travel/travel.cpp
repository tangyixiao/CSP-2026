#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel1.in","r",stdin);
	freopen("travel1.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int ans1=0,ans2=0,ans3=0,ans4=0;
	bool flag=false;
	//1 
	for(int i=0;i<c1.size();i++){
		if(c1[i]==c2[i]) flag=tr1ue;
		else flag=false;
	}
	if(flag==true) ans1=1; 
	else{
		cout<<ans1<<ans2<<ans3<<ans4;
		return 0;
	}
	//2 
	for(int i=0;i<s1.size()-1;i++){
		if(s1[i]==s2[i]) flag=true;
		else flag=false;
	}
	if(flag==true) ans2=1; 
	else{
		cout<<ans1<<ans2<<ans3<<ans4;
		return 0;
	}
	//3 
	if((s1[s1.size()-1]=='A'||s1[s1.size()-1]=='B'||s1[s1.size()-1]=='C') && (s2[s2.size()-1]=='A'||s2[s2.size()-1]=='B'||s2[s2.size()-1]=='C')) ans3=1;
	else if((s1[s1.size()-1]=='D'||s1[s1.size()-1]=='F') && (s2[s2.size()-1]=='D'||s2[s2.size()-1]=='F')) ans3=1;
	//4 
	if(s1[s1.size()-1]=='A'&&s2[s2.size()-1]=='B') ans4=1;
	else if(s1[s1.size()-1]=='B'&&s2[s2.size()-1]=='A') ans4=1;
	else if(s1[s1.size()-1]=='B'&&s2[s2.size()-1]=='C') ans4=1;
	else if(s1[s1.size()-1]=='C'&&s2[s2.size()-1]=='B') ans4=1;
	else if(s1[s1.size()-1]=='D'&&s2[s2.size()-1]=='F') ans4=1;
	else if(s1[s1.size()-1]=='F'&&s2[s2.size()-1]=='D') ans4=1;
	//ans
	cout<<ans1<<ans2<<ans3<<ans4;
	return 0;
}

