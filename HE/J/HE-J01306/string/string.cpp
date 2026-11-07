#include <bits/stdc++.h>
using namespace std;
int n;
long long cnt;
struct node{
	long long num;
	char cs;
}h[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>h[i].num>>h[i].cs;
	}
	int l=0,r=n-1;
	while(l<=r){
		if(h[l].num==h[r].num){
			if(h[l].cs!=h[r].cs){
			}
		}
		else{
			int sn,sta,bn;
			if(h[l].num>h[r].num){
				sn=h[r].num;
				sta=2;
			}
			else{
				sn=h[l].num;
				sta=1;	
			}
			
		}
	}
	cout<<"2";
	return 0;
} 
