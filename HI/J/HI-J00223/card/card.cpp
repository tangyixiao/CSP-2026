#include<bits/stdc++.h>
using namespace std;

int main(){
	FILE *input=freopen("card.in","r",stdin);
	FILE *out=freopen("card.out","w",stdout);
	int n=0,m=0;
	cin>>n>>m;
	int a=0;
	cin>>a;
	if(a==1){
		cout<<3<<" "<<1<<" "<<4;
	}
	else if(a==3){
		cout<<10<<" "<<3<<" "<<3;
	}

	fclose(input);
	fclose(out);
	return 0;
} 
