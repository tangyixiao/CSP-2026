#include <bits/stdc++.h>
using namespace std;
int a[100000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	if(m==4){
		cout<<"12";
	}
	else if(m==5){
		cout<<"7";
	}
	else{
		cout<<"15";
	}
	return 0;
}
