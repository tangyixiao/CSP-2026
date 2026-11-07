#include<bits/stdc++.h>
using namespace std;
int li[2000005],cnt;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,m;
	cin>>a>>m;
	for(int i=1;i<=a;i++){
		cin>>li[i];
	}
	sort(li+1,li+1+a,cmp);
	int cnt=0;
	for(int i=1;i<=a;i++){
		int sum=li[i];
		for(int j=i+1;j<=i+m-1;j++){
			sum=sum&li[j];
		}
		cnt=max(cnt,sum);
	}
	cout<<cnt;
	return 0;
} 