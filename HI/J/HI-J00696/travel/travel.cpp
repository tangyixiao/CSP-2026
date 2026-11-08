#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int ok=0;
	int A,B,C,D,F;
	if(c1!=c2||s1!=s2){
		if(c1=c2){
			ok=true;	
		}
	}
	cout<<ok;
}
