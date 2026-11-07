#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int flag,a1[5],a2[5];
char n1,n2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<3;i++){
		if('A'<=s1[i] && s1[i]<='Z') n1=s1[i];
		else a1[i]=s1[i];
		if('A'<=s2[i] && s2[i]<='Z') n2=s2[i];
		else a2[i]=s2[i];
		if(a1[i]==a2[i] && a1[i]!=0 && a2[i]!=0){
			flag=1;
		}else flag=0;
	}
	if(flag==1){
		cout<<"1";
		if(n1=='A' || n1=='C'){
			if(n2=='B'){
				cout<<"11";
				return 0;
			}
		}else if(n1=='B'){
			if(n2=='A' || n2=='C'){
				cout<<"11";
				return 0;
			}
		}else{
			if(n2=='D' || n2=='F'){
				cout<<"11";
				return 0;
			}
		}
		if(n1=='A' || n1=='B' || n1=='C'){
			if(n2=='A' || n2=='B' || n2=='C'){
				cout<<"10";
				return 0;
			}
		}
	}else cout<<"0"; 
	cout<<"00";
	return 0;
} 
