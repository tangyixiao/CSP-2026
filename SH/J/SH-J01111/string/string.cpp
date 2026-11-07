#include<bits/stdc++.h>
using namespace std;
int n,a[10007],ans;
struct node{
	int x;
	char y;
}r11[1000007],r22[1000007];
int w;
char e;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>w>>e;
		r11[i].x=w;r11[i].y=e;
		r22[n-i+1].x=w;r22[n-i+1].y=e;
	}
	int l=1,r=1;
	while(l<=n&&r<=n){
		int mn=min(r11[l].x,r22[r].x);
		if(r11[l].y!=r22[r].y){
			ans+=mn;
		}
		r11[l].x-=mn;
		r22[r].x-=mn;
		if(r11[l].x==0) l++;
		if(r22[r].x==0) r++;
	}
	cout<<ans/2;
	return 0;
}
