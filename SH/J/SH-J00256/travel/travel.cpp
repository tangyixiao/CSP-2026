#include <bits/stdc++.h>
using namespace std;


int main(void){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string train_a,seat_a; // R's seat number
    cin >> train_a >> seat_a;
    string train_b,seat_b; // R's seat number
    cin >> train_b >> seat_b;
    // first
    if(train_a == train_b){
        cout << '1';
        // second
        if(seat_a[0] == seat_b[0] && seat_a[1] == seat_b[1]) cout << '1';
        else cout << '0';

        // third
        if(seat_a[0] == seat_b[0] && seat_a[1] == seat_b[1]){
            if(((seat_a[2] == 'A'|| seat_a[2] == 'B')|| seat_a[2] == 'C')&&((seat_b[2] == 'A'|| seat_b[2] == 'B')|| seat_b[2] == 'C')){
                cout << '1';
            }
            else if((seat_a[2] == 'D'|| seat_a[2] == 'F')&&(seat_b[2] == 'D'|| seat_b[2] == 'F')){
                cout << '1';
            }
            else cout << '0';
        }
        else cout << '0';

        // fourth
        int s1;
        int s2;
        if(seat_a[2] == 'A') s1 = 0;
        else if(seat_a[2] == 'B') s1 = 1;
        else if(seat_a[2] == 'C') s1 = 2;
        else if(seat_a[2] == 'D') s1 = 4;
        else if(seat_a[2] == 'F') s1 = 5;
        if(seat_b[2] == 'A') s2 = 0;
        else if(seat_b[2] == 'B') s2 = 1;
        else if(seat_b[2] == 'C') s2 = 2;
        else if(seat_b[2] == 'D') s2 = 4;
        else if(seat_b[2] == 'F') s2 = 5;
        if((seat_a[0] == seat_b[0] && seat_a[1] == seat_b[1])&&(s1 - s2 == 1 || s1-s2 == -1)) cout << '1';
        else cout << '0';
    }
    else cout << "0000";
    cout << endl;
    return 0;
}
