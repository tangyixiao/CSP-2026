#include<iostream>
using namespace std;
int main(){
	int n;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long iii,num=0,ff=0;
	char a,oa;
	bool f=1;
	for(int i=0;i<n;i++){
		cin>>iii;
		cin>>a;
		if(ff==0){oa=a;}
		ff++;
		if(a!=oa){f=0;}
		oa=a;
		num+=iii;
	}
	if(n==1 || f){
		cout<<0;
		return 0;
	}
	else{cout<<num/2;}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
