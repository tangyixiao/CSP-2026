#include<bits/stdc++.h>
using namespace std;
const int N=10;
int main(){
	freopen("travel","r",stdin);
	freopen("travel.out","w",stdout);
	char a[N],b[N],c[N],d[N];
	cin>>a>>b>>c>>d;
	int e=5;
	if(a[1]==c[1]&&a[2]==c[2])cout<<1;
	else{
		cout<<0;e=1;
	}
	if(b[1]==d[1]&&e==5)cout<<1;
	else{
		cout<<0;e=2;
	} 
	if(b[2]>='D'&&d[2]>='D'&&e==5||b[2]<'D'&&d[2]<'D'&&e==5){
		cout<<1;
	}else {
		cout<<0;e=3;
	}
	if(b[2]+2==d[2]+1&&e==5||b[2]-2==d[2]-1&&e==5)cout<<1;
	else{
		cout<<0;e=4;
	} 
	for(int i=e;i<4;i++)cout<<0;
}
