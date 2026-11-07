#include<iostream>
#include<string>
using namespace std;
string c1,c2,s1,s2;
int a;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		a=1;
	}else{
		cout<<"0";
	}
	if(a==1&&s1[s1.size()]==s2[s2.size()]){
		cout<<"1";
		a=2;
	}else{
		cout<<"0";
	}
	if(a==2&&(int(s1[s1.size()])==68||int(s1[s1.size()])==69)){
	    if(int(s2[s2.size()])!=68&&int(s2[s2.size()])!=69){
	    	cout<<"0";
		}else{
			cout<<"1";
			a=3;
		}
	}else{
		if(int(s2[s2.size()])!=68&&int(s2[s2.size()])!=69){
	    	cout<<"1";
			a=3;
		}else{
			cout<<"0";
		}
	}
	if(a==3&&((s1[s1.size()]=='B'&&s2[s2.size()]=='A')||(s1[s1.size()]=='C'&&s2[s2.size()]=='B')||(s1[s1.size()]=='A'&&s2[s2.size()]=='B')||(s1[s1.size()]=='B'&&s2[s2.size()]=='C')||(s1[s1.size()]=='D'&&s2[s2.size()]=='F')||(s1[s1.size()]=='F'&&s2[s2.size()]=='D'))) cout<<"1";
	else cout<<"0";
	return 0;
}