#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
string seat="ABCDF";
int R_car,X_car;
string R_seat,X_seat;
cin>>R_car>>R_seat>>X_car>>X_seat;
if(R_car==X_car){
    cout<<1;
}else{
cout<<"0000";
return 0;
}




if(R_seat[0]==X_seat[0] and R_seat[1]==X_seat[1]){
   cout<<1;
}else{
cout<<"000";
return 0;
}




int R_index,X_index;
for(int i=0;i<5;i++){
    if(seat[i]==R_seat[2]){
        R_index=i;
    }
    if(seat[i]==X_seat[2]){
        X_index=i;
    }
}

if(R_index<3 and X_index>2){
    cout<<"00";
    return 0;
}else if(R_index>2 and X_index<3){
    cout<<"00";
    return 0;
}else{
cout<<1;
}



if(R_index-X_index==1 or R_index-X_index==-1){
    cout<<1;
}else{
cout<<0;
}


return 0;
}
