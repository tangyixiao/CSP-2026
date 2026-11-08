#include<bits/stdc++.h>
using namespace std;
int n,a[100000];
char b[100000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	if(n==1||n==0){
		cout<<0;
	}else if(n==2&&b[0]==b[1]){
		cout<<0;
	}else if(n==2){
		int x,y;
		if(a[0]%2==0){
			x=a[0]/2;	
		}
		if(a[1]%2==0){
			y=a[1]/2;		
		}
		if(x==0){
			cout<<y;
		}else if(y==0){
			cout<<x;
		}else if(x>=y){
				cout<<y;
		}else if(x<y){
			cout<<x;
		}
	}
	return 0;
}
