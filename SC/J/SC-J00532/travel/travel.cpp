#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travle.in","r",stdin);
	freopen("travle.out","w",stdout);
	char a[10];
	for(int i=1;i<=10;i++){
		cin>>a[i];
	}
	if(a[1]==a[6]&&a[2]==a[7]){
		cout<<1;
		if(a[3]==a[8]&&a[4]==a[9]){
		cout<<1;
			if(a[5]=='A'||a[5]=='B'||a[5]=='C'){
				if(a[10]=='A'||a[10]=='B'||a[10]=='C'){
					cout<<1;
					if(a[5]-a[10]==1||a[10]-a[5]==1){	
					cout<<1;	
				}
				else cout<<0;
				}
				else cout<<"00";
				}
			else{
					if(a[10]=='A'||a[10]=='B'||a[10]=='C'){
						cout<<"00";
					}
					else{
						cout<<1;
					if(a[5]-a[10]==1||a[10]-a[5]==1){	
					cout<<1;	
				}
				else cout<<0;
					} 
					}
	}
	else{
		cout<<"000"	;
	}
	}
	else cout<<"0000";
	return 0;
}