#include<bits/stdc++.h>
using namespace std;
int main(){
	int n1,n2,h1,h2,bb1=2,bb2=2,bas;
	char s1[4],s2[4],b1,b2;
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n1>>s1>>n2>>s2;
	//cout<<s1<<s2;
	if(n1==n2) {
		cout <<"1";
		h1=s1[0]*0+s1[1];
		h2=s2[0]*0+s2[1];
		if(h1==h2) {
			cout <<"1";
			b1=s1[2];
			b2=s2[2];
			if(b1=='A'||b1=='B'||b1=='C') bb1=1;
			if(b2=='A'||b2=='B'||b2=='C') bb2=1;
			if(bb1==bb2) cout<<"1";
			else  cout<<"0";
		
			if((b1-b2==1||b2-b1==1)&&bb1==bb2) cout<<"1";
			else cout<<"0";
		}else{
			cout <<"000";
		}
		
	
	
	}else{
		cout <<"0000";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
