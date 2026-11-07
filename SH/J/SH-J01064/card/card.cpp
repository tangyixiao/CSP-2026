#include<bits/stdc++.h>
using namespace std;
int s;
char a[1000001];
struct node{
	int x;
	char y;
}n[1000001];
int main(){
	cin>>s;
	int count=1;
	int ans=0;
	cout<<s;
	for(int i=1;i<=s;i++){
		cin>>n[i].x>>n[i].y;
	}
	for(int i=1;i<=s;i++){
		for(int j=1;j<=n[j].x;j++){
			a[count]=n[j].y;
			count++;
		}
	}
	cout<<a;
	for(int i=1;i<=(count-1)/2;i++){
		if(a[i]!=a[count-i]) ans++;
	}
	
cout<<ans;
	return 0;
}
