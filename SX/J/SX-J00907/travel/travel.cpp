#include<bits/stdc++.h>
using namespace std;
string c1;//小R的车厢号
string c2;//小X的车厢号
string s1;//小R的座位号
string s2;//小X的座位号
string ans;
int a[100];
int b[100];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
    if(c1!=c2){
    cout<<'0'<<'0'<<'0'<<'0';
    return 0;
	}
	else {
    cout<<'1'<<'1'<<'1'<<'1';
    return 0;
	}
	return 0;
}