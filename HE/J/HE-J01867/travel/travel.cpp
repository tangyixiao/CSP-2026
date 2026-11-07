#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r1,r2,x1,x2;
	cin>>r1>>r2>>x1>>x2;
	bool f=1;
	if(r1==x1){
		cout<<"1";
	}else{
		f=0;
		cout<<"0"; 
	}
	for(int i=0;i<2;i++){
		if(f==0){
			cout<<"0";
			break;
		}else if(r2[i]!=x2[i]){
			f=0;
			cout<<"0";
			break;
		}
	}
	if(f==1){
		cout<<"1";
	}
	for(int i=2;i<=2;i++){
		if(f==0){
			cout<<"0";
			break;
	    }else if(f==1&&r2[i]=='D'||r2[i]=='E'&&(x2[i]=='D'||x2[i]=='E')){
			cout<<"1";
		}else if(f==1&&r2[i]=='A'||r2[i]=='B'||r2[i]=='C'&&(x2[i]=='A'||x2[i]=='B'||x2[i]=='C')){
			cout<<"1";
		}else{
			f=0;
			cout<<"0";
		}
	}
	for(int i=2;i<=2;i++){
		if(f==0){
			cout<<"0";
			break;
		}else if(r2[i]=='B'||r2[i]=='C'&&(x2[i]=='C'||x2[i]=='B')&&f==1){
			cout<<"1";
		}else if(r2[i]=='D'||r2[i]=='E'&&(x2[i]=='E'||x2[i]=='D')&&f==1){
			cout<<"1";
		}else if(r2[i]=='A'||r2[i]=='B'&&(x2[i]=='B'||x2[i]=='A')&&f==1){
			cout<<"1";
		}else{
            f=0;
			cout<<"0";
		}
	}
	return 0;
}
