#include<bits/stdc++.h>
using namespace std;
int n,m=1;
int k;
char s;
string S;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>k>>s;
		for(int j=1;j<=k;j++){
			S[m]=s;
			m++;
		}
	}
	int J=0;
	m--;
	for(int i=1;i*2-1<=m;i++){
		if(S[i]!=S[m-i+1])J++;
	}
	cout<<J;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
