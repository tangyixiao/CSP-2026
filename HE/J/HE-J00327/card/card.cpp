#include<bits/stdc++.h>
using namespace std;
int a[500010],b[500010]; 
queue<int> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]){
			while(!s.empty()){
				s.pop();
			}
		}
		s.push(a[i]);
		b[a[i]]++;
	}
	for(int i=0;i<m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
