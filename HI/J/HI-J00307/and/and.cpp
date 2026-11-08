#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int max=0,c=0;
	for(int i=1;i<(1<<n);i++){
		int l=i;
		int j=1,cnt=0;
		bool e=true;;
		while(l!=0){
			if(l&1){
				cnt++;
				if(e){
					c=a[j];
					e=false;
				}
				else{
					c=c&a[j];
				}
			}
			j++;
			l=l>>1;
		}
		if(cnt==m&&c>max){
			max=c;
		}
		c=0;
	}
	printf("%d",max);
	return 0;
}
