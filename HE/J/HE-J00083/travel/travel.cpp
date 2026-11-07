#include<bits/stdc++.h>
#define ll long long
using namespace std;

string c1,s1,c2,s2;

int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	cin>>c1>>s1>>c2>>s2;
	
	if(c1!=c2) cout<<"0000\n";
	else{
		
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			
			cout<<"1";
			
			char C1=s1[2],C2=s2[2];
			if(C1>C2) swap(C1,C2);
			
			if((C1>='A'&&C1<='C'&&C2>='A'&&C2<='C')||(C1=='D'&&C2=='F')){
				
				cout<<"1";
				if((C1=='A'&&C2=='B')||(C1=='B'&&C2=='C')||(C1=='D'&&C2=='F')) cout<<"1\n";
				else cout<<"0\n";
			}
			else cout<<"00\n";
		}
		else cout<<"000\n";
	}
	
	return 0;
}

/*
8:45 meow!
*/
