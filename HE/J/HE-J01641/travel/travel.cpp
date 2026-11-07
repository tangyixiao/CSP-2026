#include <iostream>
#include <cstring>
using namespace std;
int main(){

    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);

    string cr, seatr, cx, seatx;
    cin >> cr >> seatr >> cx >> seatx;

    if(cr == cx){
        cout << 1;
    }else{
        cout << "0000" << '\n';
        return 0;
    }

    if((seatr[0] == seatx[0]) && (seatr[1] == seatx[1])){
        cout << 1;
    }else{
        cout << "000" << '\n';
        return 0;
    }

    if(((seatr[2] >= 'A') && (seatr[2] <= 'C')) && ((seatx[2] >= 'A') && (seatx[2] <= 'C')) ||
       ((seatr[2] >= 'E') && (seatr[2] <= 'F')) && ((seatx[2] >= 'E') && (seatx[2] <= 'F'))){
        cout << 1;
    }else{
        cout << "00" << '\n';
        return 0;
    }

    if((seatr[2] == (seatx[2] - 1)) || (seatr[2] == (seatx[2] + 1))){
        cout << 1 << '\n';
    }else{
        cout << 0 << '\n';
    }

    return 0;
}