#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string p1,p2;
char z1,z2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	for (int i=0;i<s1.size();i++){
		if(s1[i]>='0'&&s1[i]<='9'){
			p1+=s1[i];
		}
		else{
			z1=s1[i];
		}
	}
	for (int i=0;i<s2.size();i++){
		if(s2[i]>='0'&&s2[i]<='9'){
			p2+=s2[i];
		}
		else{
			z2=s2[i];
		}
	}
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	if (p1==p2){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	if ((z1<='C'&&z2<='C')||(z1>='D'&&z2>='D')){
		cout<<1;
	}
	else{
		cout<<"00";
		return 0;
	}
	if(z1+1==z2||z2+1==z1){
		cout<<1;
	}
	else {
		cout<<0;
	}
	return 0;
}
