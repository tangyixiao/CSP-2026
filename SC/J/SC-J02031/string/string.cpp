#include<iostream>
using namespace std;

freopen("string.in","r",stdin);
freopen("string.out","w",stdout);

struct sting{
	long long n;
	string sing;
}st[200001];

int gcd(int a,int b){
	if(b==0){
		return a;
	}else{
		gcd(b,a%b);
	}
}

int main(){
	int n;
	string s="";
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>st[i].n>>st[i].sing;	
	}
	long long mxgcd=st[1].n;
	for(int i=2;i<=n;i++){
		mxgcd=gcd(mxgcd,st[i].n);
	}
	for(int i=1;i<=n;i++){
		st[i].n/=mxgcd;
		for(int j=1;j<=st[i].n;j++){
			s+=st[i].sing;
		}
	}
	//cout<<s;
	long long sz=s.size();
	long long cnt=0; 
	for(int i=0;i<=(sz-1)/2;i++){
		if(s[i]!=s[sz-1-i]){
			//cout<<"f";
			cnt++;
		}else{
			//cout<<"t";
		}
	}
	cout<<cnt*mxgcd;
}