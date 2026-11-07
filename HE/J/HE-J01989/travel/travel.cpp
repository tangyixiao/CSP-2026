#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else {
		cout<<"0000"<<endl;
		return 0;
	}
	int a=(s1[0]-'0')*10+s1[1]-'0',b=(s2[0]-'0')*10+s2[1]-'0';
	if(a==b){
		cout<<1;
	}
	else{
		cout<<"000";return 0;
	}
	char c=s1[2],d=s2[2];
    if((c=='A'||c=='B'||c=='C')&&(d=='C'||d=='A'||d=='B')){
	cout<<1;
	}
	else if((c=='D'||c=='F')&&(d=='D'||d=='F')){
		cout<<1;
	}
	else{
		cout<<"00"; return 0;
	}
	int e=abs(s1[2]-s2[2]);

	if(e==1) cout<<1;
	else cout<<0;
}
