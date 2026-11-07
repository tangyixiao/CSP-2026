#include<bits/stdc++.h>
using namespace std;
long long n,a,z,num=0;
string s;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a>>c;
		for(long long j=1;j<=a;j++)
		 s+=c;
	}
	if(s.size()%2==1){
		z=s.size()/2;
	}
	else {
		z=(s.size()-1)/2;
	}
	int size=s.size();
	for(long long i=0;i<=z;i++){
		if(s[i]!=s[size-i-1]) {
			num++;
		}
	}
	cout<<num;
	return 0;
}

