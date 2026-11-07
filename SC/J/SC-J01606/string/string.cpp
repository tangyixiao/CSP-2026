#include<bits/stdc++.h>
using namespace std;
const int N=2e+5,A=500;
int a[N+10];
char c[N+10];
char s[N*A+10];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n; cin>>n;
	long long tt=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++){
			s[++tt]=c[i];
		}
	}
	
	int num=0;
	for(int i=1;i<=tt/2;i++){
		int k=tt-i+1;
		if(s[i]!=s[k]) num++;
	} 
	
	cout<<num;
	

	return 0;
}
