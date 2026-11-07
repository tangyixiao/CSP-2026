#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int ce=0,pai=0,neer=0;
	if(c1!=c2){
		cout<<"0000"<<'\n';
		return 0;		
	}
	int r,k;
	r=(s1[0]+s2[1])-'0';
	k=(s2[0]+s2[1])-'0';
	if(r==k)pai++;
	if((s1[2]<='C'&&s2[2]<='C')||(s2[2]>'C'&&s1[2]>'C')){
		ce++;
	}
	if(ce!=0&&(s1[2]+1==s2[2]||s1[2]-1==s2[2])){
		if((s1[2]=='C'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='C')){
			neer=0;
		}
		else{
			neer++;
		}
	}
	cout<<1<<pai<<ce<<neer<<'\n';
	return 0;
}
