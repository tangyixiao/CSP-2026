#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	long long s1,s2,a=0;
	string c1,c2,s11,s22;
	cin>>c1>>s1>>s11>>c2>>s2>>s22;
	
	if(c1==c2){
		a+=1000;
		if(s1==s2){
			a+=100;
			if(s11=="A" || s11=="B" || s11=="C" && s22=="A" || s22=="B" || s22=="C"){
				a+=10;
				if(s11=="A" && s22=="B" ) a+=1;
				if(s11=="B" && s22=="A" || s11=="B" && s22=="C"){
					a+=1;
				}
				if(s11=="C" && s22=="B" ) a+=1;
			}else if(s11=="D" || s11=="F"  && s22=="D" || s22=="F" ){
				a+=10;
				if(s11=="D" && s22=="F" || s11=="F" && s22=="D" ) a+=1;
			}
		}
	}else{
		cout<<"0000";
		return 0;
	}
	
	cout<<a;
}



























