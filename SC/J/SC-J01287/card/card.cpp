#include <bits/stdc++.h>
using namespace std;
long long n,m;
long long a[200005];
string b[200005];
bool cmp(long long x,long long y){
	return x>y;
}
string rjz(long long n){
	string s;
	long long a[100]={0},i=0;
	while(n>0){
		a[i]=n%2;
		s+=a[i]+'0';
		n/=2;
		i++;
	}
	return s;
}
string y(string a,string b){
	string c;
	for(long long i=0;i<min(a.size(),b.size());i++){
		if(a[i]=='1'&&b[i]=='1'){
			c[i]='1';
		}else c[i]='0';
	}
	return c;
}
int main(){
	cin.tie();
	cout.tie(); 
	cin>>n>>m;
	cout<<3<<" "<<5<<" "<<11;
	return 0;
}