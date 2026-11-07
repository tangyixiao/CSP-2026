#include <bits/stdc++.h>
using namespace std;

freopen("string.in","r",stdin);
freopen("string.out","w",stdout);

char S[20000000];
char ct[30];

int main(){
	int n,t=0;
	cin>>n;
	for (int i=0;i<n;i++){
		int a;
		cin>>a;
		char c;
		cin>>c;
		for (int j=t;j<a+t;j++){
			S[j]=c; 
		}
		t+=a;
	}
	int dn=0;
	for (int i=0;i<t/2;i++){
			if (S[i]!=S[t-1-i]) dn++;
		}
	cout<<dn;
	return 0;
}