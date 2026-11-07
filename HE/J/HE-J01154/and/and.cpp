#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct Er{
	int two[50];
	int sum;
	int ci=0;
};
Er num[200005];
bool cmp(Er a,Er b){
	if(a.sum==b.sum){
		for(int i=max(a.ci,b.ci)-1;i>=0;i--){
			if(a.two[i]!=b.two[i]){
				return a.two[i]>b.two[i];
			}
		}
	}
	return a.sum>b.sum;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		long long a;
		cin>>a;
		int j=0;
		while(a>=1){
			if(a%2==0){
				num[i].two[j]=0;
			}else{
				num[i].two[j]=1;
				num[i].sum++;
			}
			j++;
			a/=2;
			num[i].ci++;
		}
	} 
	sort(num,num+n,cmp);
	int len;
	for(int i=1;i<=m-1;i++){
		len=max(num[0].ci,num[i].ci);
		for(int j=0;j<=len;j++){
			if(num[0].two[j]==1&&num[i].two[j]==1){
				num[0].two[j]=1;
			}else{
				num[0].two[j]=0;
			}
		}
	}
	long long ans=0;
	long long wei=1;
	for(int i=0;i<len;i++){
		ans+=num[0].two[i]*wei;
		wei*=2;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0; 
}
