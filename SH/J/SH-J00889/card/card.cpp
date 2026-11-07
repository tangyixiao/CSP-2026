#include<bits/stdc++.h>
using namespace std;
struct iint {
	int num=0;
	int time=0;
};
iint t[300050];
int tt[300050];
int a[500050];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n;
	int m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=n;j++){
		for(int i=j;i<=n;i++){
			if(t[a[i]].num!=0){
				for(int k=t[a[i]].time;k<=i;k++) t[a[k]].num=0;
			}
			t[a[i]].num++;
			t[a[i]].time=i;
		}
		for(int i=1;i<=m;i++){
			if(t[i].num!=0){
				tt[i]++;
				t[i].num=0;
				t[i].time=0;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<tt[i]<<' ';
	}
	return 0;
}
