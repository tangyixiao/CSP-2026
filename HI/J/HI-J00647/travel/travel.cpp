#include<bits/stdc++.h>
using namespace std;

int main(){
		freopen("travel.in","r",stdin);
		freopen("travel.out","w",stdout);
		string c1,s1,c2,s2;
		cin>>c1>>s1>>c2>>s2;
		if(c1!=c2||(c1=="01"||c1=="16")||(c2=="01"||c2=="16")){		
			cout<<"0000";
			return 0;
		}
		string a,b;
		for(int i=0;i<2;i++){
			a+=s1[i];
			b+=s2[i];
		}
		if(a!=b){
			cout<<1000;
			return 0;
		}
		int p=1110;
		if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D'))
			p=1110;
		else{
			cout<<1100;
			return 0;
		}	
		if(s1[2]<='C'&&s2[2]<='C'){
			if(s1[2]+1==s2[2]||s2[2]+1==s1[2]){
				cout<<1111;
				return 0;
			}
		}else if((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F')){
			cout<<1111;
			return 0;
		}
			cout<<1110;
	return 0;
}
