#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	
	int car1=(c1[0]-'0')*10+(c1[1]-'0');
	int car2=(c2[0]-'0')*10+(c2[1]-'0');
	if(car1==car2) cout<<1;
	else {
		cout<<"0000"<<endl;
		return 0;
	}
	
	int sit1=(s1[0]-'0')*10+(s1[1]-'0');
	int sit2=(s2[0]-'0')*10+(s2[1]-'0');
	if(sit1==sit2) cout<<1;
	else {
		cout<<"000"<<endl;
		return 0;
	}
	
	int sita=s1[2]-'A';
	int sitb=s2[2]-'A';
	if( (sita<=2&&sitb<=2) || (sita>2&&sitb>2)) cout<<1;
	else {
		cout<<"00"<<endl;
		return 0;
	}
	if( abs(sita-sitb)==1 ||( (sita>2&&sitb>2) && abs(abs(sita-sitb)==2)) ) cout<<1;
	else {
		cout<<"0"<<endl;
		return 0;
	} 
	

 return 0;
}

