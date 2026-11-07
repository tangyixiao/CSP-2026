#include <bits/stdc++.h>
using namespace std;
string flag = "0000";
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout); 
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string c1,s1,c2,s2;
    cin >> c1 >> s1 >> c2 >> s2;
    if(c1 == c2){
        flag[0] = '1';
        if(s1[0] + s1[1] == s2[0] + s2[1]){
            flag[1] = '1';
            if((s1.back() >= 'A' && s1.back() <= 'C') == (s2.back() >= 'A' && s2.back() <= 'C')){
                flag[2] = '1';
                if(s1.back() + 1 == s2.back() || s1.back() - 1 == s2.back()) flag[3] = '1';
            }
        
        }
    }
    cout << flag;


    return 0;
}