#include <bits/stdc++.h>
using namespace std;

bool sside(char a, char b){
    if (a == 'A' || a == 'B' || a == 'C'){
        if (b == 'A' || b == 'B' || b == 'C'){
            return 1;
        }
        else {
            return 0;
        }
    }
    else{
        if (b == 'D' || b == 'F'){
            return 1;
        }
        else{
            return 0;
        }
    }
    return 0;
}

bool nexttoeach(char a, char b){
    if (a == 'A'){
        if (b == 'B'){
            return 1;
        }
        else {
            return 0;
        }
    }
    if (a == 'B'){
        if (b == 'A' || b == 'C'){
            return 1;
        }
        else {
            return 0;
        }
    }
    if (a == 'C'){
        if (b == 'B'){
            return 1;
        }
    }
    else {
        return 0;
    }
    if (a == 'D'){
        if (b == 'F'){
            return 1;
        }
        else{
            return 0;
        }
    }
    if (a == 'F'){
        if (b == 'D'){
            return 1;
        }
        else{
            return 0;
        }
    }
    return 0;
}

int main(){
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);

    string c1, s1, c2, s2;
    cin >> c1 >> s1 >> c2 >> s2;
    //whether in the same block
    bool sameblock = (c1 == c2);
    if (sameblock){
        cout << 1;
    }
    else {
        cout << 0;
    }
    //whether in same row
    int row1 = 10 * (s1[0] - '0') + (s1[1] - '0');
    int row2 = 10 * (s2[0] - '0') + (s2[1] - '0');
    //cout << " " << row1 << " " << row2 << " ";
    if ((row1 == row2) && sameblock){
        cout << 1;
    }
    else {
        cout << 0;
    }
    //whether in same side and same row
    bool sameside = sside(s1[2], s2[2]);
    if ((row1 == row2) && sameside && sameblock){
        cout << 1;
    }
    else {
        cout << 0;
    }
    //whether seats're next to eachother
    if ((row1 == row2) && sameside && nexttoeach(s1[2], s2[2]) && sameblock){
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}
