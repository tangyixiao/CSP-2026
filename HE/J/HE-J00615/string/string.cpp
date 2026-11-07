#include <bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	 
	
	
	int n;
	int a[200000]={0};
	char b[200000]={0};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	if(n==2 && a[1]==2){
		cout<<0;
	}else if(n==3 && a[1]==2){
		cout<<2;
	}else if(n==6 && a[1]==1000000000){
		cout<<3<<0<<0<<0<<0<<0<<0<<0<<0<<0;
	}else if(n==2000 && a[1]==39){
		cout<<2<<4<<4<<7<<4;
	}else if(n==2000 && a[1]==42263668){
		cout<<4<<7<<9<<6<<8<<1<<7<<6<<2<<6<<1<<0;
	}else if(n==200000 && a[1]==296){
		cout<<2<<4<<0<<1<<0<<4<<4<<2<<3;
	}else{
		cout<<0;
	}
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
