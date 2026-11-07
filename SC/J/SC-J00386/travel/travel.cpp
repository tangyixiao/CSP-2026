#include <iostream>
using namespace std;

int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string a , seat_a , b , seat_b;
    cin >> a >> seat_a >> b >> seat_b;
    if(a[1] == b[1] && a[0] == b[0]){
        cout << 1;
        if(seat_a[0] == seat_b[0] && seat_a[1] == seat_b[1]){
            cout << 1;
            if(seat_a[2] == 'A' || seat_a[2] == 'B' || seat_a[2] == 'C'){
                if(seat_b[2] == 'A' || seat_b[2] == 'B' || seat_b[2] == 'C'){
                    cout << 1;
                    if(seat_a[2] == 'A' && seat_b[2] == 'B'){
                        cout << 1;
                    }
                    else if(seat_a[2] == 'B' && seat_b[2] == 'A' || seat_b[2] == 'C'){
                        cout << 1;
                    }
                    else if(seat_a[2] == 'C' && seat_b[2] == 'B'){
                        cout << 1;
                    }
                    else{
                        cout << 0;
                    }
                }
                else{
                    cout << 0 << 0;
                    return 0;
                }
            }
            else{
                if(seat_b[2] == 'E' || seat_b[2] == 'F'){
                    cout << 1 << 1;
                }
            }
        }
        else{
            cout << 0 << 0 << 0;
            return 0;
        }
    }
    else{
        cout << 0 << 0 << 0 << 0;
        return 0;
    }
    return 0;
}
