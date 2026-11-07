#include<bits/stdc++.h>
/*
pts 100
times 9:33
up_date 
- 9:35 erase line 17&18
*/
using namespace std;
typedef long long ll;
typedef pair<int,int> pt;
const int N = 2e5 + 1000 ;
int a[N];
int n,m;
int ans;
deque<int> q;
int lg[N];
int cnt[40];
void w_add(int x){
	int nt=0;
	while(x){
		cnt[nt]+=x&1;
		nt++;
		x>>=1;
	}
}
void v_add(int x){
	int nt=0;
	while(x){
		cnt[nt]-=x&1;
		nt++;
		x>>=1;
	}
}
int get_ans(){
	int sum=0;
	for(int i=0;i<=30;i++){
		sum+=int(cnt[i]==m)*lg[i];
	}
	return sum;
}
bool cmp(int a,int b){return a>b;}	
int main (){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)	cin>>a[i];
	sort(a+1,a+1+n,cmp);
	lg[0]=1;
	for(int i=1;i<=30;i++)	lg[i]=lg[i-1]*2;
	for(int i=1;i<=m;i++){
		w_add(a[i]);
	}
	ans=get_ans();
	for(int i=m+1;i<=n;i++){
		
		w_add(a[i]);
		v_add(a[i-m]);
		ans=max(ans,get_ans());
	}
	cout<<ans;
	return 0;
}