#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
int l;
bool p;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	for(int i=0;i<a1.size();i++){
		if(a1[i]==b1[i])l++;
	}
	if(l==a1.size()){
		cout<<1;
		p=true;
		l=0;
		for(int i=0;i<=1;i++){
			if(a2[i]==b2[i])l++;
		}
		if(l==2){
			cout<<1;
			p=true;
		}
		else cout<<0;
		if(a2[2]<='C'&&b2[2]<='C'&&p==true||a2[2]>='D'&&b2[2]>='D'&&p==true)cout<<1;
		else{
			cout<<0;
			p=false;
		}
		if(a2[2]+1==b2[2]&&p==true||a2[2]-1==b2[2]&&p==true)cout<<1;
		else cout<<0;
	}
	else cout<<0000;
	
	return 0;
}
