#include<bits/stdc++.h>
using namespace std;
long long c[100000];
char b[100000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a;
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>c[i];
		cin>>b[i];
	}
	long long ad=0;
	string cc="";
	for(long long i=1;i<=a;i++){
		ad+=c[i];
		for(long long j=1;j<=c[i];j++){
			cc+=b[j];
		}
	}
	long long cd=ad/2;
	long long ss=0; 
	long long x=cc.size();
	for(long long i=0;i<cd;i++){
		if(cc[i]!=cc[x-i-1]) ss++;
	}
	cout<<ss;
	return 0;
}
