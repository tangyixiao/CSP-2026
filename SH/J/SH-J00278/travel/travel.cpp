#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);

    string c1, s1, c2, s2;
    cin >> c1 >> s1 >> c2 >> s2;

    bool fl1 = false, fl2 = false, fl3 = false;
    if(c1 == c2){
        cout << "1";
        fl1 = true;
    }else{
        cout << "0";
    }

    if(fl1 && s1[0] == s2[0] && s1[1] == s2[1]){
        cout << "1";
        fl2 = true;
    }else{
        cout << "0";
    }

    if(fl2){
        if(s1[2] == 'A' && (s2[2] == 'B' || s2[2] == 'C')){
            cout << "1";
            fl3 = true;
        }else if(s1[2] == 'B' && (s2[2] == 'A' || s2[2] == 'C')){
            cout << "1";
            fl3 = true;
        }else if(s1[2] == 'C' && (s2[2] == 'B' || s2[2] == 'A')){
            cout << "1";
            fl3 = true;
        }else if(s1[2] == 'D' && s2[2] == 'F'){
            cout << "1";
            fl3 = true;
        }else if(s1[2] == 'F' && s2[2] == 'D'){
            cout << "1";
            fl3 = true;
        }else {
            cout << "0";
        }
    }else{
        cout << "0";
    }

    if(fl3 && abs(s1[2] - 'A' - (s2[2] - 'A')) == 1){
        cout << "1";
    }else{
        cout <<"0";
    }

    fclose(stdin);
    fclose(stdout);

    return 0;
}
