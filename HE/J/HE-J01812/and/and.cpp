#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],max1=-1;
struct d{
	int w;
	int num;
}b[200005];
void ap(int num,int q){
	if(b[num].w==n) return;
	if(num==m){
		int c=b[1].num;
		b[1].num=0;
		for(int i=2;i<=m;i++){
			c=c & b[i].num;
			b[i].num=0;
		}
		num=1;
		q++;
		if(c>max1) max1=c;
	}else{
		b[num].num=a[b[num-1].w+q];
		b[num].w=b[num-1].w+1+q;
		num++;
	}
	ap(num,q);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	ap(1,1);
	cout<<max1;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
