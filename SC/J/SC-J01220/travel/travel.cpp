#include <bits/stdc++.h>
using namespace std;

int main(){
    string C1;
    string S1;
    string C2;
    string S2;
    cin >> C1 >> S1 >> C2 >> S2;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    if((C1[0]== C2[0])&&(C1[1] == C2[1])){
        a = 1;
    }


    if((a == 1) && (S1[0] == S2[0]) && (S1[1] == S2[1])){
        b = 1;
    }
    if(((S1[2]== 'D')||(S1[2]== 'E'))&& ((S2[2]== 'D')||(S2[2]== 'E') )&& (S1[2] != S2[2]) && (b== 1)){
        c= 1;
    }

    if(((S1[2]== 'A')||(S1[2]== 'B' )|| (S1[2] == 'C'))&& ((S2[2]== 'A')||(S2[2]== 'B') || (S2[2] == 'C')) && (S1[2] != S2[2]) && (b == 1)){
        c = 1;
    }

    if((c == 1) && ((S1[2] == S2[2]+1)||(S1[2] == S2[2]-1))){
        d = 1;
    }
    cout << a << b << c << d;


    return 0;
}