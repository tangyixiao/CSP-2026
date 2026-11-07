#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int b[3],c[3];
	char a[3];
	cin>>b[1]>>c[1]>>a[1]>>b[2]>>c[2]>>a[2];
	if(b[1]==b[2]){
		cout<<1;
		if(c[1]==c[2]){
			cout<<1;
			if((a[1]>='A'&&a[1]<='C')&&(a[2]>='A'&&a[2]<='C')){
				cout<<1;
				if(((a[1]+1==a[2]&&a[1]!='C')||(a[1]-1==a[2]&&a[1]!='D'))){
					cout<<1;
				}else{
					cout<<0;
				}
			}else if((a[1]>='D'&&a[1]<='F')&&(a[2]>='D'&&a[2]<='F')){
				cout<<1;
				if((a[1]=='D'||a[1]=='F')&&(a[2]=='D'||a[2]=='F')){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00"; 
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
