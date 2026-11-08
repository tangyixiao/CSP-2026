#include <bits/stdc++.h>;
#include <cstring>;
using namespace std;


int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a[100]={0};
	for(int i=0;i<4;i++){
		cin>>a[i];
	}
	string f;
	if(a[0]==a[2]){
		f="1";
	}
	if(a[0]!=a[2]){
		f="0";
	}

	cout<<f; 
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}



























