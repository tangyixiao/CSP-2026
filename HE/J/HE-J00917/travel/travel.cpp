# include <bits/stdc++.h>
using namespace std ;
char r[8] , x[8] ;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout) ;
    for(int i = 1 ; i <= 5 ; i ++){
        cin >> r[i] ;
    }
    for(int i = 1 ; i <= 5 ; i ++){
        cin >> x[i] ;
    }
    if(r[1]==x[1]&&r[2]==x[2]){
        cout << 1 ;
    }
    else{
        cout << "0000" ;
        return 0 ;
    }
    if(r[3]==x[3]&&r[4]==x[4]){
        cout << 1 ;
    }
    else{
        cout << "000" ;
        return 0 ;
    }
    if(r[5]=='A'||r[5]=='B'||r[5]=='C'){
        if(x[5]=='A'||x[5]=='B'||x[5]=='C'){
            cout << 1 ;
        }
        else{
            cout << "00" ;
            return 0 ;
        }
        if(r[5]=='A'){
            if(x[5]=='B'){
                cout << 1 ;
            }
            else{
                cout << 0 ;
            }
        }
        else if(r[5]=='B'){
            if(x[5]=='C'||x[5]=='A'){
                cout << 1 ;
            }
            else{
                cout << 0 ;
            }
        }
        else {
            if(x[5]=='B'){
                cout << 1 ;
            }
            else{
                cout << 0 ;
            }
        }
    }
    else{
        if(x[5]=='E'||x[5]=='F'){
            cout << 11 ;
        }
        else{
            cout << "00" ;
            return 0 ;
        }

    }
}
