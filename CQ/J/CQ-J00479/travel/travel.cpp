#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s,c,s1,c1;
	cin>>s>>c>>s1>>c1;
	if(s!=s1) cout<<0;
	else{
		cout<<1;
	}
	string k,k1;
	k=c[0]+c[1];
	k1=c1[0]+c1[1];
	if(k==k1&&s==s1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	bool flag=0;
	if(k==k1&&s==s1&&((('A'<=c[2]&&c[2]<='C')&&('A'<=c1[2]&&c1[2]<='C'))||(('D'<=c[2]&&c[2]<='E')&&('D'<=c1[2]&&c1[2]<='E')))){
		cout<<1;
		flag=1;
	}
	else{
		cout<<0;
	}
	if(flag&&abs((int)(c[2]-c1[2]))==1) {
		cout<<1;
	}
	else cout<<0;
	return 0;
}

