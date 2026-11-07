#INCLUDE <BITS/C++.H>
USING NAMESPACE STD;
INT AA[105];
INT BB[105];
INT CC[105];
INT MAIN(){
    INT A,B;
    CIN >> A >> B;
    FOR(INT I=1;I <= A;I++){
        CIN >> AA[I];
        CC[I] = 0;
    }
    INT AAA=0;
    FOR(INT I=0;I < A;I++){
        AAA++;
        IF(AA[I] IN BB){
            FOR(INT I=0;I < AAA;I++){
                BB[I] = 0;
                AAA = 0;
            }
        }



    }




}
