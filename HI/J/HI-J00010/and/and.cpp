#include<bits/stdc++.h>
using namespace std;
int n,m;
int counted=0;
int a[200010];
struct S{
	int num=0;
	int b[33];
	int zg0;
};
S sum[200010]; 
//1.找最大位数2进制数，2.查找最大书为1的位数 ，并且找到同样唯一的数 
void exchange(int x,int i){
	while(x>0){
		sum[i].num++;
		sum[i].b[sum[i].num]=x%2;
		if(x%2==0) sum[i].zg0=sum[i].num;
		x/=2;
	}
}
int l[35];
int f(int x,int y){
	for(int i=1;i<=33;i++){
		l[i]=0;
	}
	int zdw=-1;
	int o[35],p[35];
	while(x>0){
		int num=0;
		o[num]=x%2;
		x/=2;
		zdw=num;
	}
	while(y>0){
		int num=0;
		p[num]=x%2;
		x/=2;
		zdw=max(zdw,num);
	}
	for(int i=1;i<=zdw;i++){
		if(o[i]==1&&p[i]==1){
			l[i]=1;	
		}
	}
	int jg=0;
	for(int i=1;i<=zdw;i++){
		int r=1;
		if(l[i]==1){
			for(int j=0;j<i;j++){
				r*=2;
			}
			jg+=r;
		}
	}
	return jg;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	queue <int> q;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		exchange(a[i],i);
	}//输入，转2进制 
	
	
	int x,cnt=0;
	for(int i=1;i<=n;i++){
		if(sum[i].num>sum[x].num) x=i;
		if(sum[i].num==sum[x].num){
			if(sum[i].zg0<sum[i].zg0){
				x=i;
			}
		}
	}
	if(m==1){
		cout<<a[x];
		return 0;
	}
	for(int i=1;i<=sum[x].num;i++){
		if(sum[x].b[i]==1){
			q.push(i);
			cnt++;
		}
	}
	bool f=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum[i].num;j++){
			if(sum[i].b[j]==0){
				f=0;
				for(int k=1;k<=cnt;k++){
					if(q.front()==j){
						q.push(q.front());
						q.pop();
						break;
						f=1;
					}
				}
				if(f==0){
					counted++;
				}
			}
		}
	}
	if(counted>=m){
		cout<<a[x];	
	}
	
	return 0;
} 
