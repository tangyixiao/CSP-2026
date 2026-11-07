#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
  	freopen("travel.out","w",stdout);
	int x1,x2,y1,y2;
    char z1,z2;
    cin>>x1>>y1>>z1>>x2>>y2>>z2;
    if(x1==x2)cout<<1;
    else{
		cout<<0<<0<<0<<0;
		return 0;
	}
    if(y1==y2)cout<<1;
    else{
    	cout<<0<<0<<0;
    	return 0;
	}
	cout<<1<<1;
    return 0;
}