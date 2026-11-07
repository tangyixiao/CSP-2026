#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[5005]={},l[5005]={},t[5005]={};
	queue<int> leave;
	int x=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		
		while(leave.size()!=0){
			t[x]=leave.front();
			leave.pop();
			x++;
		}
		l[5005]={}; 
		for(int j=i;j<n;j++){
			leave.push(a[j]);
			l[i]=a[j];
			for(int k=0;k<j;k++){
				if(l[j]==l[k]){
					while(leave.size()!=0){
						leave.pop();
						}
					l[5005]={}; 
					leave.push(a[j]);
				}
			}
			
		}
	}
	for(int i=1;i<=m;i++){
		int cnt=0;
		for(int j=1;j<=x;j++){
			if(t[j]==i){
				cnt++;
			}	
		}
		cout<<cnt<<" ";
	}

	return 0;
}
