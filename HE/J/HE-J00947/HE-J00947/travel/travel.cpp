#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin >> c1 >> s1 >> c2 >> s2;
    int k[3] = {'A','B','C'};
    int l = 0,r = 0;
    for (int i = 0;i <= 2;i++){
        if (s1[2] == k[i]){
            l = 1;
        }
    }
    for (int i = 0;i <= 2;i++){
        if (s2[2] == k[i]){
            r = 1;
        }
    }
    if (c1 == c2){
        cout << "1";
    }
    else{
        cout << "0";
    }
    if (c1 == c2 && s1[0,1] == s2[0,1]){
        cout << "1";
    }
    else{
        cout << "0";
    }
    if (c1 == c2 && l == r){
        cout << "1";
    }
    else{
        cout << "0";

    }
    if (((s1[2] + 1 == s2[2] || s1[2] - 1 == s2[2]) && l == r) || (s1[0,1] - 1 == s2[0,1] || s1[0,1] + 1 == s2[0,1])){
        cout << "1";
    }
    else{
        cout << "0";
    }
    return 0;
}

