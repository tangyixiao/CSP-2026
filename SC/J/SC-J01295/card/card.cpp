//card.cpp
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5+5;
ll t[N*3];
int top,stk[N*5],n,m,a[N*5];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	/*
	10 3
	2 3 1 2 1 3 2 3 1 2 1
	*/
	for(int i=1;i<=n;i++){
		top=0;
		for(int j=i;j<=n;j++){
			stk[++top]=a[j];
			for(int k=1;k<top;k++){
				if(stk[k]==stk[top]){
					top=k;
					break;
				}
			}
		}	
		for(int j=1;j<=top;j++){
			t[stk[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<" ";
	}
	cout<<"\n";
	return 0;
}