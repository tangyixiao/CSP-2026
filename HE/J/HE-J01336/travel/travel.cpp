#include<bits/stdc++.h>
using namespace std;
string cl,sl,cr,sr;
int a[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cl>>sl>>cr>>sr;
	if(cl==cr) a[1]=1;
	else{
		for(int i=1;i<=4;i++) cout<<a[i];
		return 0;
	}
	if(sl[0]==sr[0]&&sl[1]==sr[1]) a[2]=1;
	else{
		for(int i=1;i<=4;i++) cout<<a[i];
		return 0;
	}
	if(('C'>=sl[2]&&sl[2]>='A'&&'C'>=sr[2]&&sr[2]>='A')||('E'>=sl[2]&&sl[2]>='D'&&'E'>=sr[2]&&sr[2]>='D')) a[3]=1;
	else{
		for(int i=1;i<=4;i++) cout<<a[i];
		return 0;
	}
	if((sl[2]=='A'&&(sr[2]=='B'))||(sl[2]=='B'&&(sr[2]=='A'||sr[2]=='C'))||(sl[2]=='C'&&(sr[2]=='B'))||(sl[2]=='D'&&(sr[2]=='E'))||(sl[2]=='E'&&(sr[2]=='D')))a[4]=1; 
	else{
		for(int i=1;i<=4;i++) cout<<a[i];
		return 0;
	}
	for(int i=1;i<=4;i++) cout<<a[i];
	return 0;
}
