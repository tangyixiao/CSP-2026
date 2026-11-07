#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","r",stdout);
	char n,m,x,y;
	cin>>n>>m>>x>>y;
	if(n==x){
		if(m/10==y/10){
			if(((m%10=="A"||m%10=="B"||m%10=="C")&&(y%10=="A"||y%10=="B"||y%10=="C"))((m%10=="D"||m%10=="E")&&(y%10=="D"||y%10=="E"))){
				if(m%10+1==y%10||m%10-1==y%10){
					cout<<"1111";
				}else cout<<"1110";
			}else cout<<"1100";
		}else cout<<"1000";
	}else cout<<"0000";
	return 0;
}