#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
	}else{
		cout<<"0";
	}
	int d=1;
	if(c1==c2){
		for(int i=1;i<s1.size()-1;i++){
			for(int j=1;j<s2.size()-1;j++){
				if(s1[i]==s2[j]){
					d=1;
				}else{
					d=0;
				}
			}
		}
	}else{
		d=0;
	} 
	if(d==1){
		cout<<1;
	}else{
		cout<<0;
	}
	int n=1,K=1;
	if(d==1){
		if(s1[2]=='A'&&s2[2]=='B'||s1[2]=='B'&&s2[2]=='A'||s1[2]=='B'&&s2[2]=='C'||s1[2]=='D'&&s2[2]=='F'||s1[2]=='F'&&s2[2]=='D'){
			n=1;
			K=1;
		}
		if(s1[2]=='A'&&s2[2]=='C'||s1[2]=='C'&&s2[2]=='A'||s1[2]=='C'&&s2[2]=='B'){
			n=1;
			K=0;
		}
		if(s1[2]<='C'&&s2[2]>='D'){
			n=0;
			K=0;
		}
	}else{
		n=0;
	}
	if(n==1){
		cout<<1;
	}if(n==0){
		cout<<0;
	}
	if(K==1&&n==1){
		cout<<1;
	} else{
		cout<<0;
	}
	return 0;
}
