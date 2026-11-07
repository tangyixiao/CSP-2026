#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	string a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	if (a1.size()!=b1.size()){
		cout<<0<<0<<0<<0;
		return 0;
	}else{
		for (int i=0;i<a1.size();i++){
			if (a1[i]!=b1[i]){
				cout<<0<<0<<0<<0;
				return 0;
			}
		}
		cout<<1;
	}
	int u=0;
	for(int i=0;i<b2.size()-1;i++){
		if (a2[i]!=b2[i]){
			u=1;
			cout<<0;
			break;
		}
	}
	if (u==0){
		cout<<1;
	}
	if (a2[1]!=b2[1] || a2[0]!=b2[0]){
		cout<<0<<0;
		return 0;
	}
	if ((a2[2]=='F' && b2[2]=='D')||(a2[2]=='D' && b2[2]=='F')){
		cout<<11;
	}else{
		if (a2[2]=='D' || a2[2]=='F' || b2[2]=='D' || b2[2]=='F'){
			cout<<0<<0;
		}else{
			cout<<1;
			if (a2[2]-b2[2]==1 || a2[2]-b2[2]==-1){
				cout<<1;
			}else{
				cout<<0;
			}
		}
	}
	return 0;
}
