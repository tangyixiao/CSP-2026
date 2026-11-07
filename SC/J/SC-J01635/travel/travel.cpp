//CSP-J2026 A by wyyinput
//Task name: travel
//Date: 2026/10/31
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pii pair<int,int>
#define pli pair<ll,int>
#define pil pair<int,ll>
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;
string c1,s1;
string c2,s2;
bool flag;
bool check(){
	if(s1[2]=='A'&&s2[2]=='B'){
		return 1;
	}else if(s1[2]=='B'&&s2[2]=='C'){
		return 1;
	}else if(s1[2]=='D'&&s2[2]=='F'){
		return 1;
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>c1>>s1;
	cin>>c2>>s2;
	//是否在同一节车厢
	if(c1==c2){
		cout<<"1";
		flag=1;
	}else{
		cout<<"0";
		flag=0;
	}
	//是否在同一节车厢的同一排
	if(flag&&s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<"1";
	}else{
		cout<<"0";
		flag=0;
	}
	//是否在同一节车厢的同一排，且位于过道的同一侧
	if(flag&&(s1[2]>='D'&&s2[2]>='D'||s1[2]<='C'&&s2[2]<='C')){
		cout<<"1";
	}else{
		cout<<"0";
		flag=0;
	}
	//是否相邻
	if(s1[2]>s2[2]){
		swap(s1,s2);
	}
	if(flag&&check()){
		cout<<"1";
	}else{
		cout<<"0";
	}
	cout<<"\n";
	return 0;
}