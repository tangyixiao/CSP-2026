#include<iostream>
#include<cmath>
using namespace std;
int er[200001][31],max1=-1;

void mao_pao(int a[],int n){
	int mid;
	for(int i=1;i<=n;i++){
		int time=0;
		for(int j=1;j<(n+1-i);j++){
			if(a[j]<a[j+1]){
				time++;
				mid=a[j];
				a[j]=a[j+1]; a[j+1]=mid;
			}
		}
		if(time==0)return;
	}
}

void shi_er(int a,int i){
	int time=0,b=a,s=1;
	while(b!=0){
		b/=2; time++;
		if(b==0) if(time>max1) max1=time;
	}
	while(a!=0){
		er[i][s]=a%2;
		a/=2; s++;
	}
}

void er_shi(int m){
	int answer;
	if(er[m][1]==0)answer=0;
	if(er[m][1]==1)answer=1;
	for(int i=2;i<=max1;i++){
		for(int j=1;j<i;j++) er[m][i]*=2;
		answer+=er[m][i];
	}
	cout<<answer;
}

void anweiyu(int a[],int m){
	for(int i=1;i<=m;i++)shi_er(a[i],i);
	for(int i=1;i<m;i++)
	for(int j=1;j<=max1;j++){
		if(er[i][j]!=1||er[i+1][j]!=1)er[i+1][j]=0;
	}
	er_shi(m);
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	mao_pao(a,n);
	anweiyu(a,m);
	return 0;
}