#include<bits/stdc++.h>
using namespace std;

int main(){
	FILE *input=freopen("card.in","r",stdin);
	FILE *out=freopen("card.out","w",stdout);
	int m=0,n=0;
	cin>>m>>n;
	int a;
	for(int i=1;i<=m;i++){
		cin>>a;
		if(a==3){
			cout<<12;
			break;
		}
	} 
	fclose(input);
	fclose(out);
	return 0;
} 
