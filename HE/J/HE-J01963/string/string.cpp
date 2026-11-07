#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
char c[200005];
long long s=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	int i=1,j=1,x=1,y=n;
	while(x<y){
		int li=a[x]-i,lj=a[y]-j;
		int l=min(li,lj);
		if(c[x]==c[y]){
			i+=l;
			j+=l;	
		}else{
			s=s+l+1;
			i+=l;
			j+=l;
		}
		i++,j++;
		if(i>a[x]){
			i=i%a[x];
			x++;
		}
		if(j>a[y]){
			j=j%a[y];
			y--;
		}
	}
	cout<<s;
}
