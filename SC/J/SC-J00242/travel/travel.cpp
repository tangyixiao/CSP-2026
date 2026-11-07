#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
//	cin(0);
//	cout(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2;
	int c1,c2;
	cin>>c1>>s1>>c2>>s2;
	int set1=(s1[0]-'0')*10+s1[1]-'0';
	int set2=(s2[0]-'0')*10+s2[1]-'0';
	char se1=s1[2];
	char se2=s2[2];
	if(c1==c2)
		cout<<1;
	else{
		cout<<"0000";
		return 0;
	} 
	if(set1==set2)
		cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if((se1=='F'&&se2=='D')||(se2=='F'&&se1=='D')){
		cout<<"11";
		return 0;
	}
	else{
		if((se1=='F'&&se2!='D')||(se2=='F'&&se1!='D')){
			cout<<"00";
			return 0;
		}
		else if((se1=='D'&&se2!='F')||(se2=='D'&&se1!='F')){
			cout<<"00";
			return 0;
		}
		else{
			if((se1=='A'&&se2=='C')||(se2=='A'&&se1=='C')){
				cout<<"10";
				return 0;
			}
			else{
				cout<<"11";
				return 0;
			}
		}
	}

	return 0;
}