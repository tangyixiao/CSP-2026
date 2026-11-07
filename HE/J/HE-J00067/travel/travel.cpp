#include <bits/stdc++.h>
using namespace std;
string a;
string c;
char b[6];
char d[6];
int e,f,g;
int main(){
    freopen("travel.in","w",stdin);
    freopen("travel.out","r",stdout);
    if(a[0]+a[1] == c[0]+c[1]){
        cout << 1;
        if( b[0] + b[1] == d[0] + d[1]){
            cout << 1;
            if((b[2] == 'A' || b[2] == 'B' || b[2] == 'C') && (d[2] == 'A' || d[2] == 'B' || d[2] == 'C') || (b[2] == 'D' || b[2] == 'F') && (b[2] == 'D' || b[2] == 'F')){
                cout << 1;
                if(b[2] == 'A'){
        f = 1;
    }
    if(b[2] == 'B'){
        f = 3;
    }
    if(b[2] == 'C'){
        f = 5;
    }
    if(b[2] == 'D'){
        f = 7;
    }
    if(b[2] == 'E'){
        f = 9;
    }
    if(d[2] == 'A'){
        g = 1;
    }
    if(d[2] == 'B'){
        g = 3;
    }
    if(d[2] == 'C'){
        g = 5;
    }
    if(d[2] == 'D'){
        g = 7;
    }
    if(d[2] == 'E'){
        g = 9;
    }
    if(f == 1 && g == 3 || f == 3 && g == 1 || f == 3 && g == 5 || f == 5 && g == 3 || f == 7 && g == 9 || f == 9 && g == 7){
        cout << 1;
    }
     else{
        cout << 0;
    }
            }
            else{
                cout << 00;
            }
        }
        else{
            cout << 000;
        }
    }
    else{
        cout << 0000;
    }
    return 0;
}
