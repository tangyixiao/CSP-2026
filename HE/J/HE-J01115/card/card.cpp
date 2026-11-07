#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	string R,X,R1,X1;
	cin>>R>>R1>>X>>X1;
	for(int i=1;i<=4;i++){
		if(R==X){
			cout<<1;
			return 0;
		}
		if(R1==X1){
			cout<<1;
			return 0;
		}
	}
	return 0;
} 
