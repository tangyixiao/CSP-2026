#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin >> c1 >> s1 >> c2 >> s2;
    cout << c1<<s1 <<c2 << s2<<endl;
    if(c1==c2){
        if(s1[0]==s2[0] && s1[1] == s2[1]){
            if((char(s1[2])>= 'A'&&char(s1[2])<='C')&&(char(s2[2])>='A' && char(s2[2])<='C')) {
            	if(abs(s1[2]-s2[2]) == 1){
            		cout << "1111";
				}
				else{
					cout << "1110";
				}
			}
			else if((s1[2]>= 'D'&&s1[2]<='F')&&(s2[2]>='D' && s2[2]<='F')){
				cout << "1111";
			}
			else{
				cout <<"1100";
			}
        }
        else{
            cout << "1000";
        }
    }
    else{
        cout << "0000";
    }
    return 0;
}
