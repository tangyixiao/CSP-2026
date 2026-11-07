#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string ca,sa,cb,sb;
	cin>>ca>>sa>>cb>>sb;
	string a[5] = {"A","B","C","D","F"};
	if(ca == cb){
		cout << "1";
		if(sa[0] == sb[0]&&sa[1] == sb[1]){
			cout << "1";
			for(int i = 1;i<=4;i++){
			}
		}
		else cout << "000";
		
	}
	else cout << "0000";
	
	return 0;
}
