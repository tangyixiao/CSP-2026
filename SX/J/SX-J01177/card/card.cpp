#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b,c[a],d[b];
    cin>>a>>b;
    cin>>c[a];
    for(int i=a;i<0;i--){
       if(c[i]==c[a]){
       	d[b]++;
       	cout<<d[b];
	   }
	}



}