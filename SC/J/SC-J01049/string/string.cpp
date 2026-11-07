#include<bits/stdc++.h>
using namespace std;
string s;
int n;
long long a,zfc,summ;
int tv,xg;
char b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		for(long long j=1;j<=a;j++){
			s+=b;
		}
	}
	zfc=s.size();
	for(long long i=0;i<zfc/2;i++){
		long long m=zfc-i-1;
		if(s[i]!=s[m]){
			summ++;
		}
	}
	cout<<summ; 
	return 0;
}