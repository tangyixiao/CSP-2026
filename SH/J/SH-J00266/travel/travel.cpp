#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin >> c1 >> s1 >> c2 >> s2;
    if (c1 == c2){
        cout << 1;
    }
    else{
        cout << "0000";
        return 0;
    }
    int a = 0,b = 0,d;
    for (int i = 0; i <= 1; i++){
        a = a*10 + s1[i]-48;
        b = b*10 + s2[i]-48;
    }
    if (a == b){
        cout << 1;
    }
    else{
        cout << 0;
    }
    if ( s1[2] <= 'C' && s2[2] <= 'C' && (a == b)){
        cout << 1;
    }
    else if ((s1[2] >= 'D' && s1[2] <= 'F') && (s2[2] >= 'D' && s2[2] <= 'F') && (a == b)){
        cout << 1;
    }
    else{
        cout << 0;
    }
    if (a==b && abs(s1[2]-s2[2])== 1){
        if ((s1[2] == 'C'&& s2[2] == 'D') || (s1[2] == 'D' && s2[2] == 'C')){
            cout << 0;
        }
        else{
            cout << 1;
        }
    }
    else{
        cout << 0;
    }
    //if (abs(s1[2]-s2[2]) == 1){
    //    cout << 1;
    //}
    //else{
    //    cout << 0;
    //}
    return 0;
}
