#include<bits/stdc++.h>
using namespace std;
int n;
long long cnt;
struct node{
	long long x;
	char y;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int xx;
		char yy;
		cin>>xx>>yy;
		a[i].x=xx;
		a[i].y=yy;
	}
	int i=1,j=n;
	while(i<j){
		if(a[i].y!=a[j].y){
			if(a[i].x>a[j].x){
				cnt+=a[j].x;
				a[i].x-=a[j].x;
				j--;
			}else if(a[i].x==a[j].x){
				cnt+=a[j].x;
				i++;
				j--;
			}else{
				cnt+=a[i].x;
				a[j].x-=a[i].x;
				i++;
			}
		}else{
			if(a[i].x>a[j].x){
				a[i].x-=a[j].x;
				j--;
			}else if(a[i].x==a[j].x){
				i++;
				j--;
			}else{
				a[j].x-=a[i].x;
				i++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
