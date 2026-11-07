#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200000+10];
int b[300000+10],c[300000+10];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		cout<<n;
		return 0;
	}
	if(m==2){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(a[i]!=a[n]){
				cnt=i;
				break;
			}
		}
		b[a[n]]=n;
		b[a[cnt]]=n-cnt+1;
		cout<<b[1]<<" "<<b[2];
		return 0;
	}
	bool flag=0;
	for(int i=2;i<=n;i++){
		if(a[i-1]>a[i]) flag=1;
	}
	if(flag==0){
		int cnt=1;
		for(int i=2;i<=n;i++){
			if(a[i-1]!=a[i]) cout<<cnt<<" ";
			cnt++;
		}
		cout<<n;
		return 0;
	}
	int l;
	for(int i=1;i<=n;i++){
		l=i;
		for(int j=1;j<i;j++) c[a[j]]=1;
		for(int j=i;j<=n;j++) c[a[j]]=0;
		for(int j=i;j<=n;j++){
			
			for(int k=l;k<=j;k++){
				if(a[k]==a[j]){
					for(int x=k;x<j;x++) c[a[x]]=1;
					l=j;
					break;
				}
			}
			
		}
		for(int j=1;j<=n;j++){
			if(c[i]==0) b[i]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<b[i]<<" ";
	return 0;
}
//我没招了
//只拿到部分分36pts
//共计100+100+25+36=261pts
//我没救了
//似乎没人会搞-J的迷惑行为大赏
//而且现在也不太流行这个了
//c_c_f老师 我还记得你
//2=?
//11:59 卡评测队列