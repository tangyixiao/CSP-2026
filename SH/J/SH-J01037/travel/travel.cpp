#include<bits/stdc++.h>
using namespace std;

int modify(string str){
    return (str[0]-'0')*10+(str[1]-'0');
}

int main(){
    freopen("travel.in", "read", stdin);
    freopen("travel.out", "write", stdout);
    int seatA_train, seatB_train;
    string seatA_seat, seatB_seat;
    cin >> seatA_train >> seatA_seat >> seatB_train  >> seatB_seat;
    if(seatA_train == seatB_train){
        cout << 1;
        if(modify(seatA_seat) == modify(seatB_seat)){
            cout << 1;
            if((seatA_seat[2]-'A' >= 0 && seatA_seat[2]-'A' <= 2) && (seatB_seat[2]-'A' >= 0 && seatB_seat[2]-'A' <= 2)){
                cout << 1;
                if((seatA_seat[2] == 'A' && seatB_seat[2] == 'C') || (seatA_seat[2] == 'C' && seatB_seat[2] == 'A')){
                    cout << 0;
                }else{
                    cout << 1;
                }
            }else if((seatA_seat[2]-'D' >= 0 && seatA_seat[2]-'D' <= 2) && (seatB_seat[2]-'D' >= 0 && seatB_seat[2]-'D' <= 2)){
                cout << "11";
            }else{
                cout << "00";
            }
        }else{
            cout << "000";
        }
    }else{
        cout << "0000";
    }
    return 0;
}
