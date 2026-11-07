#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    long long a1=0,b1=0,c1=0,d1=0;
    a1=a[0]-'0'*10+a[1];
    c1=c[0]-'0'*10+c[1];
    b1=a[0]-'0'*10+b[1];
    d1=d[0]-'0'*10+d[1];
    if(a1!=c1){
    	cout<<"0000"<<endl;
    	return 0;
	}
	if(b1!=d1){
		cout<<"1000"<<endl;
		return 0;
	}
	char cc=b[2];
	char s=d[2];
	bool chec=false;
	if(cc=='A'||cc=='B'||cc=='C'){
		if(s=='A'||s=='B'||s=='C')chec=true;
	}
	if(cc=='D'||cc=='F'){
		if(s=='D'||s=='F')chec=true;
	}
	if(!chec){
		cout<<"1100";
		return 0;
	}
	bool ls=false;
	if(cc=='A'||cc=='B'||cc=='C'){
		if(cc+1==s||s+1==cc)ls=true;
	}
	if(cc=='D'||cc=='F'){
		if(cc+2==s||s+2==cc)ls=true;
	}
	if(ls)cout<<"1111"<<endl;
	else cout<<"1110"<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
