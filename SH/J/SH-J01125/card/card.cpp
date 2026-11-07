#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;//5
int n,m,a[N]; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		//new round
		int cnt=0;
		int desk[N],len=0;//像栈有没有 
		for(int j=i;j<n;j++){
			bool sig=0;
			for(int k=0;k<len;k++){
				if(desk[k]==a[j]){
					len=k+1;
					sig=1;
				}
			}
			if(!sig){
			    desk[len++]=a[j];//越来越像 
			    if(a[j]==i) cnt++;
			}
		cout<<cnt;
		} 
		
	}
	return 0;
} 
