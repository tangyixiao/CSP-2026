#include <iostream>
using namespace std;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int a[200001],d[200001];
	char c[200001],e[200001];
	long long b=0,x=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		b+=a[i];
	}
	b/=2;
	int m=b;
	int cnt=0;
	for(int i=0;b>0;i++){
		if(b>=a[i]){
			b-=a[i];
			d[i]=a[i];
		}else{
			d[i]=b;
			b=0;
		}
		cnt++;
		e[i]=c[i];
	}
	int y=n-1;
	for(int i=0;i<cnt;i++){
		if(a[y-i]>=d[i]){
			if(c[y-i]!=e[i]){
				x+=d[i];
			}
			a[y-i]-=d[i];
			y++;
		}else{
			if(c[y-i]!=e[i]){
				x+=a[y-i];
			}
			d[i]-=a[y-i];
			i--;
			y--;
		}
	}
	cout<<x;
	fclose(stdin);
	fclose(stdout);
	return 0;
}