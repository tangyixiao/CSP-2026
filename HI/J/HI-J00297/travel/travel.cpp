#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int c1,s1,c2,s2,a=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1 == c2){
		a+=1000;
		if(s1[0]==s2[0] && s1[1]==s2[1]){
			a+=100;
			if(s1[2]<="C"&&s2[2]<="C"&&s1[2]!=s2[2]){
				a+=10
				if(s1[2]=="A"&&s2[2]=="B" || s1[2]=="B"&&s2[2]=="C" || s1[2]=="B"&&s2[2]=="A" || s1[2]=="C"&&s2[2]=="B"){
					a+=1;
				}
			}
			if(s1[2]>="D"&&s2[2]>="D"&&s1[2]!=s2[2]){
				a+=11;
			}
		} 
	}
	
	else{
		cout<<"0000";
	}
	cout<<a;
	return 0;
}
