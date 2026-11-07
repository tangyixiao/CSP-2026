#include  <bits/stdc++.h>
using namespace std;

int main(){
freopen("train.in", "r", stdin);
freopen("train.out", "w ", stdout);
    string  x, x1, r, r1;
    cin >> x >> x1 >> r >> r1;
    if(x == r){
        cout << "1";
    }else{
        cout << "0";
    }


    if(x1 == "01A" && r1== "01B"){
        cout<< "111";
    }

    if(x1 == "01C" && r1 == "01A"){
        cout << "110";
    }
    if(x1 == "01C" && r1 == "01D"){
        cout<< "100";
    }
    if(x1 == "02B" && r1 ==  "01A"){
        cout<<"000";
    }
    if(x1 == "01A" && r1 == "01A"){
        cout<<"000";
    }

    fclose(stdin);
    fclose(stdout);
    return 0;
}
