#include<bits/stdc++.h>
using namespace std;
class stu{
public:
	int chexiang;
	int pai;
	char lie;
	bool at;
}R,X;



int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("traval.in","r",stdin);
	freopen("traval.out","w",stdout);
	cin>>R.chexiang>>R.pai>>R.lie;
	cin>>X.chexiang>>X.pai>>X.lie;
	R.at=(R.lie>='D');
	X.at=(X.lie>='D');
	if(R.chexiang==X.chexiang){
		if(R.pai==X.pai){
			if(R.at==X.at){
				if((int)R.lie-X.lie==1 || (int)R.lie-X.lie==-1){
					cout<<"1111";
				}else{
					cout<<"1110";
				}
			}else{
				cout<<"1100";
			}
		}else{
			cout<<"1000";
		}
	}else{
		cout<<"0000";
	}
	
	
	return 0;
}