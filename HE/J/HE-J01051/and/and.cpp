#include<bits/stdc++.h>
using namespace std;

int n,m;
int t[200005][55];  //t´æ¶þ½øÖÆ 
int mlen=-99;
struct P{
	int flag;
	int key;
}a[200005];

int to_two(int x,int y){
	int tmp=0;
	while(y>0){
		t[x][++tmp]=y%2;
		y/=2;
	}
	return tmp;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].key;
		int tmp=to_two(i,a[i].key);
		if(tmp>mlen) mlen=tmp;
	}
	
	
	for(int i=mlen;i>=1;i--){
		int temp=0;
		for(int j=1;j<=n;j++){
			if(a[j].key==0) continue;
			
			if(t[j][i]==0) a[j].flag=1;
			else temp++;
		}
		if(temp<m){
			for(int j=1;j<=n;j++) a[j].flag=0;
		}
		else {
			for(int j=1;j<=n;j++){
				if(a[j].flag==1) a[j].key=0;
			}
			if(temp==m) break;
		}
	}
	int ans=0,tep=0;
	for(int i=1;i<=n;i++){
		if(a[i].key==0) continue;
		if(tep==m) break;
		
		if(ans==0){
			tep++;
			ans=a[i].key;
		} 
		else{
			tep++;
			ans=(ans&a[i].key);
		} 
	} 
	cout<<ans;
	return 0;
} 
