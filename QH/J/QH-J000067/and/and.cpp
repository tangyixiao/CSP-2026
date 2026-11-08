#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("travel.in","r",stdin);
	freopen("travel.out","r",stdout);
	int n,m,b=0,c=0;
	cin>>n>>m;
	vector<int>a(n);
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		while(m>0){
			b=a[i] and a[i+1];
			a[i+1]=b;
			m--;
		}
		if(b>c){
			c=b;
		}
	}
	cout<<c;
	return 0;
}
