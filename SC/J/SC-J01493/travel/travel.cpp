#include<bits/stdc++.h>
using namespace std;

bool ly=1,l1=1,l2=1;
string c1,s1,c2,s2;
int sint1,sint2;

int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2){
		cout << '1';
		for(int i=0;i<=1;i++){
			if(s1[i]!=s2[i]){
				ly=0;
			}
		}
		if(ly){
			cout << '1';
			sint1=int(s1[2]-65);
			sint2=int(s2[2]-65);
			if(sint1>=3){
				l1=0;
			}
			if(sint2>=3){
				l2=0;
			}
			if(l1==l2){
				cout << '1';
				if(l1==0){
					cout << '1';
				}else{
					if(sint1==1||sint2==1){
						cout << '1';
					}else{
						cout << '0';
					}
				}
			}else{
				cout << "00";
			}
		}else{
			cout << "000";
		}
	}else{
		cout << "0000";
	}
	return 0;
}