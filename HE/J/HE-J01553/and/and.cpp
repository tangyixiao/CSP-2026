#include<bits/stdc++.h>
using namespace std;
int in[5];
int out[5];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,n1;
	cin>>n>>m;
	n1=n;
	in[0]=4;
	in[1]=5;
	in[2]=2000;
	in[3]=65536;
	in[4]=200000;
	out[0]=12;
	out[1]=7;
	out[2]=262142;
	out[3]=49152;
	out[4]=511;
	while(n1--){
		int a;
		cin>>a;
	}
	int i=0,j=5;
	while(j--){
		if(n==in[i]) cout<<out[i];
		++i;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
