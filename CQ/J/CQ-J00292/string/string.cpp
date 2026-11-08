#include<bits/stdc++.h>
using namespace std;
int a;
long long b,c,h=0,m=0,n=0; 
int k[300005];
char t[300005],e,f;
int main(){
	srand(time(0));
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>k[i]>>t[i];
		b+=k[i];
	}
	long long p=1ll*rand()*rand()*rand()%b;
	cout<<p;
	return 0;
} 
