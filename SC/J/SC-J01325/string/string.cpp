#include<bits/stdc++.h>
using namespace std;
struct momo{
	int x;
	char y;
}a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,x,ans=0,cnt=0;
	char y;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> x >> y;
		a[i].x=x;
		a[i].y=y;
	}
	for(int i=1,j=n;i<=j;){
		if(a[i].y!=a[j].y){
			cnt+=min(a[i].x,a[j].x);
			if(a[i].x>a[j].x)
				a[i].x-=a[j].x,j--;
			else if(a[i].x<a[j].x)
				a[j].x-=a[i].x,i++;
			else
				j--,i++;
		}
		else if(a[i].x>a[j].x)
			a[i].x-=a[j].x,j--;
		else if(a[i].x<a[j].x)
			a[j].x-=a[i].x,i++;
		else
			j--,i++;
	}
	cout << cnt;
	return 0;
} 