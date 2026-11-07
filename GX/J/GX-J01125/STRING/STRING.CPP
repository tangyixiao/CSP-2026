#INCLUDE <BITS/C++.H>
USING NAMEAPACE STD;
STRING AA[105];
STRING BB[105];

INT MAIN(){
INT A;
CIN >> A;
FOR(INT I=1;I <= A;I++){
    INT H,J;
    CIN >> H >> J;
    FOR(INT I=1;I <= J;I++){
        AA[I] = H;
        BB[I] = H;
    }
}
FOR(INT I=0;I < A;I++){
    AA[I] = A[A-I];
}
INT Q = 0;
FOR(INT I=0;I < A;I++){
    IF(AA[I] == BB[I]){
        CINTINUE;
    }
    ELSE{
    Q = 1;
        BREAK;
    }
}
IF(Q == 0){
    COUT << "0";
}


}
