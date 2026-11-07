#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string carA,carB,seatA,seatB;

    cin>>carA>>seatA>>carB>>seatB;
    bool b1=(carA==carB);
    bool b2=b1&&(seatA[0]==seatB[0]&&seatA[1]==seatB[1]);
    bool b3=b2&&((seatA[2]<='C'&&seatA[2]>='A'&&seatB[2]<='C'&&seatB[2]>='A')||(seatA[2]<='F'&&seatA[2]>='D'&&seatB[2]<='F'&&seatB[2]>='D'));
    bool b4=b3&&(abs(seatA[2]-seatB[2])==1);
    cout<<b1<<" "<<b2<<" "<<b3<<" "<<b4<<"\n";

    fclose(stdin);
    fclose(stdout);
    return 0;
}
