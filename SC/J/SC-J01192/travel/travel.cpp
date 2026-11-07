#include <bits/stdc++.h>
using namespace std;
int xu,yu,xv,yv;
char zu,zv;
int tu,tv;
int __abs(int x){
	return (x>=0?x:-x); 
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>xu>>yu>>zu;
	cin>>xv>>yv>>zv;
	tu=(zu<='C')+1;
	tv=(zv<='C')+1;
	if(zu=='F') zu='E';
	if(zv=='F') zv='E'; 
	if(xu!=xv){
		cout<<"0000";
		return 0;
	}
	if(yu!=yv){
		cout<<"1000";
		return 0;
	}
	if(tu!=tv){
		cout<<"1100";
		return 0;
	}
	if(__abs(zu-zv)!=1){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
} 
