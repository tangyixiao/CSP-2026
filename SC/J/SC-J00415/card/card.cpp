#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[200010],ans[300010];
int cnt,t2[300010],t3[300010]; 
int t1[300010];
bool t[300010];
queue<int> q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		t2[a[i]]=i;
	
	}
	for(int i=1;i<=n;i++){
		memset(t,0,sizeof(t));
		memset(t1,0,sizeof(t1));
		for(int j=i;j<=n;j++){
			if(t[a[j]]==1){
				while(--cnt>t1[a[j]]){
					t[ans[cnt]]=0;
					t1[ans[cnt]]=0;
				}
				cnt--;
				t1[a[j]]=0;
			}
			if(t1[a[j]]==0){
				t1[a[j]]=j;
			}
			t[a[j]]=1;
			ans[++cnt]=a[j];
		}
		for(int i=1;i<=cnt;i++){
			t3[ans[i]]++;
		}
		cnt=0;
	}
	for(int i=1;i<=m;i++){
		cout<<t3[i]<<' ';
	}
	return 0;
}