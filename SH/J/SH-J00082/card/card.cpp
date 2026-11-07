#include <bits/stdc++.h>
using namespace std;
int fir[50005];
struct twi{
	int front;
	int back;
}t[50005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	int count[30005];
	memset(count,0,sizeof(count));
	scanf("%d %d",&n,&m);
	int a[n+1];
	int cnt=1;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(fir[a[i]]>0){
			t[cnt].front=fir[a[i]];
			t[cnt].back=i;
			cnt++;
		}
		fir[a[i]]=i;
	}
	cnt--;
	int pre;
	for(int i=1;i<=n;i++){
		pre=i;
		for(int j=cnt;j>=1;j--){
			if(t[j].front>=i&&t[j-1].back<=i){
				pre=t[j].back;
				break;
			}
		}
		for(int j=pre;j<=n;j++){
			count[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<count[i]<<" ";
	}
	return 0;
}
