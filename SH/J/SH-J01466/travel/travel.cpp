#include<bits/stdc++.h>
#define int long long
using namespace std;

string seperate_number(string str){
    string res = str.substr(0, 2);
    // cout << res << endl;
    /*
    for(i=0; i<str.size(); i++){
        if('0'<=str[i] && str[i]<='9'){
            res += str[i];
        } else{
            break;
        }

    }
    */
    return res;
}

char seperate_letter(string str){
    /*
    string res = "";
    for(i=0; i<str.size(); i++){
        if('A'<=str[i] && str[i]<='B'){
            res += str[i];
        }
    }
    return res;
    */
    return str[str.size()-1];
}

bool is_same_side(char x, char y){
    if(('A' <= x && x <= 'C') && ('A' <= y && y <= 'C')) return true;
    if(('D' <= x && x <= 'F') && ('D' <= y && y <= 'F')) return true;
    return false;
}

bool is_near_each_other(char x, char y){
    if(x+1 == y || x-1 == y) return true;
    if(x == 'D' && y == 'F' || y == 'D' && x == 'F') return true;
    return false;
}

struct Node{
    string train_number;
    string seat_number;
    string seperate_seat_number;
    char seperate_seat_letter;
    void read(){
        cin >> train_number >> seat_number;
    }
    void start(){
        seperate_seat_number = seperate_number(seat_number);
        seperate_seat_letter = seperate_letter(seat_number);
    }
};



Node R;
Node X;

bool state[5];

signed main(){
    // ios::sync_with_stdio(false);


    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);

    R.read();
    X.read();

    R.start();
    X.start();

    // cout << R.seperate_seat_number <<  X.seperate_seat_number << R.seperate_seat_letter<< X.seperate_seat_letter;

    if(R.train_number == X.train_number){
        state[1] = true;
    }

    if(state[1] && R.seperate_seat_number == X.seperate_seat_number){
        state[2] = true;
    }

    if(state[2] && is_same_side(R.seperate_seat_letter, X.seperate_seat_letter)){
        state[3] = true;
    }

    if(state[3] && is_near_each_other(R.seperate_seat_letter, X.seperate_seat_letter)){
        state[4] = true;
    }

    for(int i=1; i<=4; i++){
        cout << state[i];
    }

    cout << endl;

    fclose(stdin);
    fclose(stdout);


    return 0;
}
