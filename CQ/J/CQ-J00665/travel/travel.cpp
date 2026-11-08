#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	int a,b;
	string a1,b1;
	cin>>a>>a1>>b>>b1;
	if(a==b) {
		cout<<1;
	    if(a1[0]==b1[0]&&a1[1]==b1[1]) {
			cout<<1;
			if((a1[3]>='c'&&b1[3]>='c')||(a1[3]<'c'&&b1[3]<'c')){
				cout<<1;
				if(a1[3]-b1[3]==1&&a1[3]-b1[3]==-1){
					cout<<1;
				}else cout<<"0";
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}
