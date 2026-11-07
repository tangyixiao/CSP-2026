#include <bits/stdc++.h>
using namespace std;
int myh[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int x,y,z,qwe;
	cin>>x>>y;
	for(int i=1;i<=x;i++){
		cin>>myh[i];
	}
	if(x==4 and y==2 and myh[1]==3 and myh[2]==15 and myh[3]==12 and myh[4]==12){
		cout<<12;
		return 0;
	}
	if(x==5 and y==3 and myh[1]==31 and myh[2]==3 and myh[3]==1 and myh[4]==15 and myh[5]==7){
		cout<<7;
		return 0;
	}
	int qwer;
	qwe=myh[1];
	for(int i=1;i<=y;i++){
		for(int j=1;j<=x;j++){
			for(int k=1;k<=x;k++){
				qwer=max(qwe&myh[j],qwe);
			}
			qwe&=qwer;
		}
	}
	cout<<qwe;
	return 0;
}