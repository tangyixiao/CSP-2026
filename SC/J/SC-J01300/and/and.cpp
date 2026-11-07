#include<bits/stdc++.h>
using namespace std;
unsigned long long a[200010];
string sz[200010];
bool ls[100];
long long a2=0;
int cnt=1,max_cnt=0;
string t[100];
bool v[100];
int l[200010],cc[200010];
void er(int x,int j){
	for(int i=1;i<=100;i++)ls[i]=0;
	cnt=1;
	while(x!=0){
		ls[cnt]=x%2;
		cnt++;
		x/=2;
	}
	for(int i=max_cnt;i>=1;i--){
		if(i>cnt)sz[j]+='0';
		else sz[j]+=ls[i]+'0';
	}
} 
int er2(int x){
	for(int i=1;i<=100;i++)ls[i]=0;
	cnt=1;
	while(x!=0){
		ls[cnt]=x%2;
		cnt++;
		x/=2;
	}
	return cnt;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	unsigned long long max_=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		max_=max(a[i],max_);
	}
	max_cnt=er2(max_);
	
	for(int i=1;i<=n;i++){
		er(a[i],i);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sz[j].size();j++){
			if(sz[i][j]!='0')t[j]+=i+'0';
			else t[j]+='0';
		}
	}
	int ans;
	for(int i=1;i<=max_cnt;i++){
		for(int j=1;j<=n;j++){
			if(t[i][j]!='0')l[i]++;
		}
		if(i==1&&l[i]>=m)ans=i;
		a2=0;
		for(int j=1;j<=n-1;j++){
			if(t[i][j]==t[i+1][j]&&t[i][j]!='0'){
				a2++;
			}
			
		}
		if(a2>=m)ans=i;
		else break;
	}
	int as=1;
	for(int i=1;i<=n;i++){
		if(t[ans][i]!='0'){
			cc[as++]=int(t[ans][i]-'0');
		}
	}
	int aans=a[cc[1]];
	for(int i=1;i<=as-2;i++){
		aans=a[cc[i]]&aans;
	}
	cout<<aans;
	return 0;
}