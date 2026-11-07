#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	int a1,b1;
	char a2,b2;
	cin>>a>>a1>>a2>>b>>b1>>b2;
	if(a==b){
		cout <<1;
		if(a1==b1){
			cout <<1;
			if((int)a2>67&&(int)b2>67){
				cout <<1;
				if((int)a2+1==(int)b2||(int)a2-1==(int)b2){
					cout <<1;
				}else{
					cout <<0;
				}
			}else if((int)a2<68&&(int)b2<68){
				cout <<1;
				if((int)a2+1==(int)b2||(int)a2-1==(int)b2){
					cout <<1;
				}else{
					cout <<0;
				}
			}else{
				cout <<"00";
			}
		}else{
			cout <<"000";
		}
	}else{
		cout <<"0000";
	}
	return 0;
}