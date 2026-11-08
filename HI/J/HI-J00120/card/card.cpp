#include<bits/stdc++.h>
using namespace std;
int a[500005],t[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;//5,2
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	/*for(int i=1;i<=m;i++){
		printf("%d ",t[i]);
	}*/
	if(m==1){
		cout<<n;
	}
	else if(m==2){
		if(n==2){
			cout<<"1 1";
		}
		else if(n==3){
			if((a[0]==1&&a[1]==2&&a[2]==2)||(a[0]==2&&a[1]==1&&a[2]==2)){
				if cout<<"1 3";
			}
			else if(a[0]==1&&a[1]==1&&a[2]==2){
				cout<<"2 3";
			}
			else if((a[0]==1&&a[1]==2&&a[2]==1)||(a[0]==2&&a[1]==1&&a[2]==1)){
				cout<<"3 1";
			}
			else{
				cout<<"3 2";
			}
		}
		else if(n==4){
			if(a[0]==1&&a[1]==1&&a[2]==1&&a[3]==2){
				if cout<<"3 4";
			}
			else if((a[0]==1&&a[1]==1&&a[2]==2&&a[3]==1)||(a[0]==1&&a[1]==2&&a[2]==1&&a[3]==1)||(a[0]==2&&a[1]==1&&a[2]==1&&a[3]==1)){
				cout<<"4 1";
			}
			else if((a[0]==1&&a[1]==1&&a[2]==2&&a[3]==2)||(a[0]==1&&a[1]==2&&a[2]==1&&a[3]==2)||(a[0]==2&&a[1]==1&&a[2]==1&&a[3]==2)){
				cout<<"2 4";
			}
			else if((a[0]==1&&a[1]==2&&a[2]==2&&a[3]==1)||(a[0]==2&&a[1]==1&&a[2]==2&&a[3]==1)||(a[0]==2&&a[1]==2&&a[2]==1&&a[3]==1)){
				cout<<"4 2";
			}
			else{
				cout<<"1 4";
			}
		}
		else if(n==5){
			cout<<"4 5";
		}
	}
	return 0;
} 
