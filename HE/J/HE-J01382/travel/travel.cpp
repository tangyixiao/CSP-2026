#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in",'r',stdin);
    freopen("travel.out",'w',stdout);
    string c1[4],s1[4],c2[4],s2[4];
    int ans = 0;
    cin >> c1 >> s1 >> c2 >> s2;
    if(c1 == c2) cout << "1";
    else{
        for(int i =1;i <= 4;i++){
            cout << "0";
        }
        }
    for(int i = 0;i < s1.size();i++){
        if(s1[i] == s2[i])ans++;
    }
    if(ans >= 2){
    cout <<"1";
    if(s1[2] == 'A' || s1[2] == 'B'||s1[2] == 'C'&&s2[2] == 'A' || s2[2] == 'B'||s2[2] == 'C'){
        cout << 1;
        if(s1[0] == s2[0] && s1[1] == s2[1]+1||s1[1] ==s2[1]-1){
            cout << "1";
        }
        else cout << "0";
    }
    else if(s1[2] == 'D' || s1[2] == 'F' && s2[2] == 'D' || s1[2] == 'F'){
        cout << 1;
        if(s1[0] == s2[0] && s1[1] == s2[1]+1||s1[1] ==s2[1]-1){
            cout << "1";
        }
        else cout << "0";
    }
    else cout << "0";
    }
    else cout << "0";

    return 0;
}
