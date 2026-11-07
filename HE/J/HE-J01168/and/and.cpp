#include<iostream>
using namespace std;
int main(){
	int n,m,max=0;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int ii;
		cin>>ii;
		if(ii>max){max=ii;}
	}
	cout<<max;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
