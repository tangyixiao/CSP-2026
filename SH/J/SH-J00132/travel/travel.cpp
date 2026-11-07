#include<bits/stdc++.h>
using namespace std;
typedef int i32;
typedef unsigned int u32;
typedef long long i64;
typedef unsigned long long u64;
typedef __int128 i128;
typedef float f32;
typedef double f64;
typedef long double f128;
#define endl '\n'
i32 a1,b1,a2,b2;
char c1,c2;
bool flag=1;
bool v(char c){
	if(c=='A'||c=='B'||c=='C')return 1;
	return 0;
}
bool check(char cu,char cv){
	if(cu=='A'&&cv=='B')return 1;
	if(cu=='B'&&cv=='C')return 1;
	if(cu=='D'&&cv=='F')return 1;
	swap(cu,cv);
	if(cu=='A'&&cv=='B')return 1;
	if(cu=='B'&&cv=='C')return 1;
	if(cu=='D'&&cv=='F')return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>a1>>b1>>c1>>a2>>b2>>c2;
	for(i32 i=1;i<=4;i++){
		if(!flag){
			cout<<0;
			continue;
		}
		if(i==1&&a1==a2)cout<<1;
		else if(i==2&&b1==b2)cout<<1;
		else if(i==3&&v(c1)==v(c2))cout<<1;
		else if(i==4&&check(c1,c2))cout<<1;
		else cout<<0,flag=0;
	}
	return 0;
}
