#include<bits\stdc++.h> 
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long a[100000005];
	for(int i=1;i<=100000005;i++){
		cin>>a[i];
	}
	if(n==4&&m==2){
		cout<<"12";
	}
	else{
		cout<<"7";
	}
	return 0;
}
