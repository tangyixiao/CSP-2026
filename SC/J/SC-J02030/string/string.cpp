//string
#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;

const ll MAXN=100000005;
ll a[MAXN];
char c[MAXN];
ll t,sum;
string s;

string rev(string str){
	int l=str.size()-1;
	string _q="";
	for(int i=l;i>=0;i--) _q+=str[i];
	return _q;
}

//奇数 
ll funsj(string s,ll l){
	ll midpos=l/2;
	string spre=s.substr(0,midpos);
	string snxt=s.substr(midpos+1);
	snxt=rev(snxt);
	for(int i=0;i<spre.size();i++){
		if(spre[i]!=snxt[i]) sum++;
	}
	return sum;
}

//偶数 
ll funso(string s,ll l){
	ll midpos=l/2-1;
	if(s[midpos+1]!=s[midpos]) sum++,s[midpos+1]=s[midpos];
	string spre=s.substr(0,midpos);
	string snxt=s.substr(midpos+2);
	snxt=rev(snxt);
	for(int i=0;i<spre.size();i++){
		if(spre[i]!=snxt[i]) sum++;
	}
	return sum;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>t;
//	while(t--){
//		ll a;
//		char c;
//		cin>>a>>c;
//		while(a--) s+=c;
//	}
	//输入算法优化 
	for(int i=0;i<t;i++) cin>>a[i]>>c[i];
	ll __compare=a[0];
	bool __fcom=1;
	for(int i=0;i<t;i++){
		if(__compare!=a[i]) __fcom=0;
	}
	if(__fcom==1){
		for(int i=0;i<t;i++) s+=c[i];
		ll l=s.size();
		if(l%2==0) sum=funso(s,l);//偶数 
		else sum=funsj(s,l);//奇数 
		cout<<sum*__compare<<endl;
		return 0;
	}
	else{
		for(int i=0;i<t;i++){
			for(int j=0;j<a[i];j++) s+=c[j];
		}
	}
	
	string temp=rev(s);
	if(s==temp){
		cout<<0<<endl;
		return 0;
	}
	
	ll l=s.size();
	if(l%2==0) sum=funso(s,l);//偶数 
	else sum=funsj(s,l);//奇数 
	cout<<sum<<endl;
	return 0;
}