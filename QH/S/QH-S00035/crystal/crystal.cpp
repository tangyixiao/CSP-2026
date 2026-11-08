#include<iostream>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
freopen("crystal.in", "r", stdin);
freopen("crystal.out", "w", stdout);
	int n,m,b=0;
	>>n>>m;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]-a[i+1]>b||a[i]-a[i+1]<-b){
			b=a[i]-a[i+1];
		}
	}
return 0;
}
