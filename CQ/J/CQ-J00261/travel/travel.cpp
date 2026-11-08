#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
int a[200],b[200][200];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>b1>>a2>>b2;
	a['A']=a['B']=a['C']=1;
	a['E']=a['F']=2;
	b['A']['B']=b['B']['A']=b['B']['C']=b['C']['B']=b['D']['F']=b['F']['D']=1; 
	if(a1==a2){
		cout<<"1";
		if(b1[0]==b2[0]&&b1[1]==b2[1]){
			cout<<"1";
			if(a[b1[2]]==a[b2[2]]){
				cout<<"1";
				if(b[b1[2]][b2[2]]){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
} 
