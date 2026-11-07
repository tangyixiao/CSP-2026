#include<bits/stdc++.h>
using namespace std;
map<char,map<char,int> > mp,mp2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	mp['A']['B']=1;
	mp['B']['C']=1;
	mp['A']['C']=1;
	mp['B']['A']=1;
	mp['C']['B']=1;
	mp['C']['A']=1;
	mp['D']['F']=1;
	mp['F']['D']=1;
	mp2['A']['B']=1;
	mp2['B']['A']=1;
	mp2['B']['C']=1;
	mp2['C']['B']=1;
	mp2['D']['F']=1;
	mp2['F']['D']=1;
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<"1";	
		if(b[0]==d[0]&&b[1]==d[1]){
			cout<<"1";
			if(mp[b[2]][d[2]]){
				cout<<"1";
				if(mp2[b[2]][d[2]])cout<<"1";
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
