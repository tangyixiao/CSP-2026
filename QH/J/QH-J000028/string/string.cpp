#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("string.in"."r",stdin);
	//freopen("string.out","w".stdout);
	int n[200005];
    int a;
    int m;
    cin>>m;
    cin>>a;
    for(int i=1;i<=m;i++){
    	for(int j=1;j<=a;j++){
    		cin>>n[i];
		}
	}
	for(int i=1;i<=m;i++){
    	for(int j=1;j<=a;j++){
    		if(i==j){
    			cout<<"0";
			}
		}
	}
	return 0;
}
