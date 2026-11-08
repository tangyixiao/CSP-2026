#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);		
	freopen("travel.out","w",stdout);
	string a[20],b[20],c[20],d[20];
	for(int i=1;i<=2;i++){
		cin>>a[i];
	}
	for(int i=1;i<=3;i++){
		cin>>b[i];
	}
	for(int i=1;i<=2;i++){
		cin>>c[i];
	}
	for(int i=1;i<=3;i++){
		cin>>d[i];
	}
	if(a[1]==c[1]&&a[2]==c[2]){
		cout<<1<<" ";
		if(b[1]==d[1]&&b[2]==d[2]){
			cout<<1<<" ";
			if((b[3]=="A"&&d[3]=="B")||(b[3]=="B"&&d[3]=="A")||(b[3]=="B"&&d[3]=="C")||(b[3]=="C"&&d[3]=="B")||(b[3]=="D"&&d[3]=="E")||(b[3]=="E"&&d[3]=="D")) cout<<1<<" "<<1<<" ";
			else if((b[3]=="A"&&d[3]=="C")||(b[3]=="C"&&d[3]=="A")) cout<<1<<" "<<0<<" ";
			else cout<<0<<" "<<0<<" ";
		}
		else cout<<0<<" "<<0<<" "<<0<<" ";
	}
	else cout<<0<<" "<<0<<" "<<0<<" "<<0<<" ";
	return 0;
}
