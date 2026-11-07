#include<bits/stdc++.h>
using namespace std;
int a_car,b_car,a_le,b_le;
string a_st,b_st,a_num,b_num;
bool check(string a,string b){
	if(a=="A" && b=="B") return true;
	if(a=="C" && b=="B") return true;
	if(a=="B" && b=="A") return true;
	if(a=="B" && b=="C") return true;
	if(a=="D" && b=="F") return true;
	if(a=="F" && b=="D") return true;
	return false;
}
bool check1(string a,string b){
	if(a<="C"&& b<="C") return true;
	if(a>"C" && b>"C") return true;
	return false;
}
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>a_car>>a_st;
    cin>>b_car>>b_st;
    if(a_car==b_car) cout<<1;
	else{
        cout<<"0000";
        return 0;
    }
    for(int i=0;i<2;i++){
        a_le=a_le*10+(a_st[i]-'0');
        b_le=b_le*10+(b_st[i]-'0');
    }
    if(a_le==b_le) cout<<1;
	else{
        cout<<"000";
        return 0;
    }
    a_num=a_st[2];
    b_num=b_st[2];
    if(check1(a_num,b_num)) cout<<1;
	else{
        cout<<"00";
        return 0;
    }
    if(check(a_num,b_num)) cout<<1;
    else cout<<0;
    return 0;
}
