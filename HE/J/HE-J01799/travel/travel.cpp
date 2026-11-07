#include<bits\stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int cl=0,sl=0,cn=0,sn=0;
	cin >> c1 >> c2 >> s1 >> s2;
	
	cn=c2[2];
	sn=s2[2];
	if(c1==s1){
		cout << "1";
		if(c2[0]==s2[0] && c2[1]==s2[1]){
			cout << "1";
			if(cn>='A' && cn<='C'&& sn>='A' && sn<='C'){
				cout << "1";
				if(cn+1==sn ||cn-1==sn){
					cout << "1";
				}else{
					cout << "0";
					
				}
			}else if(cn>='D' && cn <='E' && cn>='D' && cn <='E'){
				cout<< "11";
			}else{
				cout << "00";
			}
			
		}else{
			cout << "000";
		}
		
	}else{
		cout << "0000";
	}
	
	
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
