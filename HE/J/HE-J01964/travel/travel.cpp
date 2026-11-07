#include<bits/stdc++.h>
using namespace std;
char ans[100];
char van[100];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a;
	int n;
	int b;
	int m;
	cin>>a;
	cin>>n;
	int num;
	for(int i=1;i<=1;i++){
		cin>>ans[1];
	}
	cin>>b;
	cin>>m;
	for(int i=1;i<=1;i++){
		cin>>van[1];
	}
	int h=ans[1];
	int g=van[1];
	if(a==b){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	//第一个判断 
	if(n==m){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	//第二个判断 
	if(n==m){
		if(h==65||h==66||h==67&&g==65||g==66||g==67){
			cout<<"1";
		}
		else if(h==68||h==69&&g==68||g==69){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	else
	cout<<"0";
	//第三个判断 
	if(h==65&&g==66||h==66&&g==67||h==67&&g==66||h==66&&g==65||h==68&&g==69||h==69&&g==68){
		cout<<"1";
	}
		else{
			cout<<"0";
		}
	//第四个判断 
	return 0;
}
