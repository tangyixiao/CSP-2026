#include<iostream>
#define N 500010
#define M 300010
using namespace std;
int n,m;
int p[N],ans[M];
bool AA=1;
void solA(){
	for(int i=1;i<=n;i++)
		ans[p[i]]=i;
	for(int i=1;i<m;i++)cout<<ans[i]<<' ';cout<<ans[m];
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("card.in" ,"r",stdin );
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>p[i];
		if(p[i]<p[i-1])AA=0;
	}
	if(AA){
		solA();
		return 0;
	}
	int a[N],idx,c;
	for(int i=1;i<=n;i++){
		idx=1;
		a[1]=p[i];
		for(int j=i+1;j<=n;j++){
			while(p[j]==p[j+1])j++;
			for(int k=1;k<=idx;k++){
				if(a[k]==p[j]){
					idx=k;
					break;
				}
				if(k==idx)
					a[++idx]=p[j];
			}
		}
		c=1;
		while(p[i]==p[i+1])i++,c++;
		for(int i=1;i<=idx;i++)ans[a[i]]+=c;
	}
	for(int i=1;i<m;i++)cout<<ans[i]<<' ';
	cout<<ans[m];
	return 0;
}
