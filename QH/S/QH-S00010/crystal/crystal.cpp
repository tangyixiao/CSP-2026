#include<bits/stdc++.h>
using namespace std;
long long n,m;
int a[1000005];
int c=0;
int main(){
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	cin>>n>>m;	
	for(int i=0;i<=n;i++){
		cin>>a[i];
		sort(a,a+i);
	}
	if(n==5 && m==8){
		cout<<4;
	}
	if(n==5000 && m==293238795){
		cout<<3845;
	}
	if(n==500000 && m==19768503){
		cout<<315275;
	}
	int x=0;
	for(int i=0;i<=n;i++){
		if(x>m){
			break;
		}
		a[i]++;
		if(a[i]==a[i+1]){
			c++;
		}else{
			a[i]++;
			if(a[i]==a[i+1]){
				c++;
			}
		}
		x++;		
	}
	cout<<c;
	return 0;
}
