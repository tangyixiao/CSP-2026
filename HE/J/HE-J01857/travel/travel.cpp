#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string c1,s1,c2,s2;
	char A,B,C,D,F;
int main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	for(int i=1;i<=1;i++){
		A=A;
		B=B;
		C=C;
		D=D;
		F=F;
    }
    
	cin>>c1>>s1>>c2>>s2;
	bool ans1=true,ans2=true,ans3=true;
    if(c1==c2)
    cout<<"1";
    else{
    cout<<"0000";
	ans1=false;	
	}
    if(ans1){
    if(s1[0]==s2[0]&&s1[1]==s2[1])
	cout<<"1";
	else{
	cout<<"0";
	ans2=false;
	    }
		if(ans2){
			if((s1[2]==D&&s2[2]==F)||(s1[2]==F&&s2[2]==D)||(s1[2]==A&&s1[2]==B)||(s1[2]==A&&s2[2]==C))
			cout<<"1";
			else{
				cout<<"0";
			ans3=false;
			}
		}
		else
		cout<<"0";
			if(ans3){
				if((s1[2]==D&&s2[2]==F)||(s1[2]==F&&s2[2]==D)||(s1[2]==A&&s2[2]==B)||(s1[2]==B&&s2[2]==A)||(s1[2]==B&&s2[2]==C)||(s1[2]==C&&s2[2]==B))
				cout<<"1";
				else
				cout<<"0";
			}
			else
			cout<<"0";
	}cout<<A<<B<<C<<D<<F; 
     return 0;
}
