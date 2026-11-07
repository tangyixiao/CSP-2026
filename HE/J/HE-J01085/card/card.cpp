#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=500005,MAXM=300005;
int n,m,a[MAXN];
int b[MAXM]; 
int st[MAXM],top=0,ans[MAXM];
void solveTLE(){
	for(int i=1;i<=n;i++){
		top=0;
		for(int j=1;j<=m;j++)b[j]=0;
		for(int j=i;j<=n;j++){
			if(b[a[j]]) while(top&&a[st[top]]!=a[j])b[a[st[top]]]--,top--;
			else st[++top]=j,b[a[j]]++;
		}
		for(int j=1;j<=top;j++)ans[a[st[j]]]++,st[j]=0;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
}
void solveA(){
	int cur=m+1;
	for(int i=n;i>=1;i--){
		if(a[i]<cur)cur=a[i],ans[a[i]]=i;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
}
int _a[MAXN],_n=0,len[MAXN],cur=1;
void solveB(){
	for(int i=2;i<=n+1;i++){
		if(a[i]!=a[i-1]){_a[++_n]=a[i-1];len[_n]=cur;cur=1;}
		else cur++;
	}
	for(int i=1;i<=_n;i++)a[i]=_a[i];
	n=_n;
	
	for(int i=1;i<=n;i++){
		top=0;
		for(int j=1;j<=m;j++)b[j]=0;
		for(int j=i;j<=n;j++){
			if(b[a[j]]) while(top&&a[st[top]]!=a[j])b[a[st[top]]]--,top--;
			else st[++top]=j,b[a[j]]++;
		}
		for(int j=1;j<=top;j++)ans[a[st[j]]]+=len[i],st[j]=0;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
}
void solvem(){
	for(int i=1;i<=n;i++){
		if(a[i]==1&&a[n]==1){
			ans[1]++;
		}else if(a[i]==1&&a[n]==2){
			ans[1]++,ans[2]++;
		}else if(a[i]==2&&a[n]==1){
			ans[1]++,ans[2]++;
		}else {
			ans[2]++;
		}
	}
	cout<<ans[1]<<' '<<ans[2];
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool canA=1;
	int canB=0; 
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i>1&&a[i-1]>a[i])canA=0;
		if(i>1&&a[i]!=a[i-1])canB++;
	}
	if(n<=5005)solveTLE();
	else if(canA)solveA();
	else if(canB<=5001)solveB();
	else if(m<=2)solvem();
	else solveTLE();
	return 0;
} 
