#include<bits/stdc++.h>
using namespace std;
int n;
long long ans;
struct info{
	int x;
	char y;
}a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d %c",&a[i].x,&a[i].y);
	}
	for(int i=1,j=n;i<=j;){
		if(a[i].x<=a[j].x){
			if(a[i].y!=a[j].y)ans+=a[i].x;
			a[j].x-=a[i++].x;
		}else{
			if(a[i].y!=a[j].y)ans+=a[j].x;
			a[i].x-=a[j--].x;			
		}
	}
	cout<<ans;
	return 0;
}
