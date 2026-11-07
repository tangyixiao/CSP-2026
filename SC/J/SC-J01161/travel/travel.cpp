#include<bits/stdc++.h>
#define int long long
using namespace std;
int qcx(string s){
	int sw=s[0]-'0',sg=s[1]-'0';
	return sw*10+sg;
}
int qps(string s){
	int sw=s[0]-'0',sg=s[1]-'0';
	return sw*10+sg;
}
int qzw(string s){
	if(s[2]=='F') return 5;
	return s[2]-'A'+1;
}
int k[7];
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    int fc,fp,fz,sc,sp,sz;
    fc=qcx(a),sc=qcx(c);
    fp=qps(b),sp=qps(d);
    fz=qzw(b),sz=qzw(d);
    k[fz]++,k[sz]++;
    if(fc!=sc){
    	cout<<"0000";
    	return 0;
	}
	cout<<"1";
	if(fp!=sp){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	if(k[1]+k[2]+k[3]==1&&k[4]+k[5]==1){
		cout<<"00";
		return 0;
	}
	cout<<"1";
	if(k[1]==1&&k[3]==1){
		cout<<"0";
		return 0;
	}
	cout<<"1";
	return 0;
}