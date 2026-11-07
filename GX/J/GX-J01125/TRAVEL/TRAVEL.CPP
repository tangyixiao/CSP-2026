#INCLUDE <BITS/C++.H>
USING NAMESPACE STD;
INT S[105];
INT T[10];
INT B[105];
INT BI[105];
INT MA(INT A,INT B){
    RETURN INT A > INT B;
}
INT MAIN(){
    INT N,M;
    CIN >> N >> M;
    FOR(INT I=1;I <= N;I++){
    CIN >> S[I];
    }
    FOR(INT I=0;I < N;I++){
        WHILE(S[I] > 0){
            WA = S[I] % 2;
            S[I] = S[I] % 2;
            BI[I] = WA;
        }
        FOR(INT J=1;I <= BI.SIZE;I++){
            S[I] = 0;
            S[I] += BI[I]*(10**J);
        }

    }
    FOR(INT Y=0;IY< N;I++){
        FOR(INT G=0;G < N;I++){
            T[0] = S[I];
            IF(I > N){
                CINTINUE;
            }
            T[1] = S[I+1];
            FOR(INT I=1;I <=MA(T[0],T[1]);I++){
                NA = T[0]%10;
                NB = T[1]%10;
               IF(NA = NB){
                   T[0] -= NA**I;
                   T[1] -= NB**I;


               }
            }
            B[Y] = MA(T[0],T[1]);

        }
    }
    SORT(1,N,MA);
    COUT << B[0];




}
