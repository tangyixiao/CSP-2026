#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int A=1;//性质A 
int n,m;
struct Number{
	int value;
	int len;
	int num_2[33];//30位 
}a[N];
void to_2(int x,int p){
	int tot=0;
	while(x){
		tot++;
		a[p].num_2 [tot]=x%2;
		x/=2;
	}
	a[p].len =tot;
	return;
}//O(log2(x))
bool cmp(Number a,Number b){
	return a.len >b.len ;
}
Number t[N];
int cnt=0;
int flag[N];
int ans=0;
void dfs(int step,int p){
	if(step==0){
		ans=max(ans,p);
		return;
	}
	for(int i=1;i<=cnt;i++){
		if(flag[i]==1){
			continue;
		}
		flag[i]=1;
		dfs(step-1,(p&t[i].value ));
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==1){
		int maxn=-1;
		for(int i=1;i<=n;i++){
			cin>>a[i].value ;
			maxn=max(maxn,a[i].value );
		}
		cout<<maxn;
		return 0;
	}
	if(m==n){
		int ana;
		for(int i=1;i<=n;i++){
			cin>>a[i].value ;
			if(i==1){
				ana=a[i].value ;
			}else{
				ana=(ana&a[i].value );
			}
		}
		cout<<ana;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i].value ;
		to_2(a[i].value ,i);
	}//ok
	for(int i=1;i<=n;i++){//A的判定 
		int fll=1;
		for(int j=1;j<=a[i].len ;j++){
			if(a[i].num_2 [j]==0){
				fll=0;
			}
		}
		if(fll==0){
			A=0;
		}
	}
	sort(a+1,a+n+1,cmp);//ok
	int stlen=a[m].len ;
	if(A==1){
		cout<<a[m].value ;
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(a[i].len >=stlen){
			cnt++;
			t[cnt]=a[i];
		}else{
			break;
		}
	}
	dfs(m,(2<<stlen)-1);
	cout<<ans;
	return 0;
}