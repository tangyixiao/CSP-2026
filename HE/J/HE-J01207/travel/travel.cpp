#include<bits/stdc++.h>
using namespace std;
struct node{
	string cx,zw;
	string lh;
};
node a[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=2;i++){
		string x;
		cin>>a[i].cx>>x;
		a[i].lh=x[2];
		a[i].zw=x[0]+x[1];
	}
	if(a[1].cx==a[2].cx){
		cout<<1;
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(a[1].zw==a[2].zw){
		cout<<1;
	}else{
		cout<<0<<0<<0;
		return 0;
	}
	if(a[1].lh=="A"||a[1].lh=="B"||a[1].lh=="C"){
		if(a[2].lh=="A"||a[2].lh=="B"||a[2].lh=="C"){
			cout<<1;
		}else{
			cout<<0<<0;
			return 0;
		}
	}else{
		if(a[2].lh=="D"||a[2].lh=="F"){
			cout<<1<<1;
			return 0;
		}else{
			cout<<0<<0;
			return 0;
		}
	}
	if(a[1].lh=="A"&&a[2].lh=="B"){
		cout<<1;
		return 0;
	}
	if(a[1].lh=="B"&&(a[2].lh=="A"||a[2].lh=="C")){
		cout<<1;
		return 0;
	}
	if(a[1].lh=="C"&&a[2].lh=="B"){
		cout<<1;
		return 0;
	}
	cout<<0;
	return 0;
}
