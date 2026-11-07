1include<bits/stdc++.h>//ÀÏÌì±£ÓÓ£¡ 
using namespace std;
char a[10],b[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=5;i++){
		cin>>a[i];
	}
	for(int i=1;i<=5;i++){
		cin>>b[i];
	}
	if(a[1]==b[1]&&a[2]==b[2]){
		cout<<1;
		if(a[3]==b[3]&&a[4]==b[4]){
			cout<<1;
			if((a[5]>='A'&&a[5]<='C'&&b[5]>='A'&&b[5]<='C')||(a[5]>='D'&&a[5]<='F'&&b[5]>='D'&&b[5]<='F')){
				cout<<1;
				if(a[5]==b[5]+1||a[5]==b[5]-1){
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
	return 0;
}
