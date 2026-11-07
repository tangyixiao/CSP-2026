#include<bits/stdc++.h>
const int N=2e5+1;
using namespace std;
#define ll long long
int gf(int a,int b)
{
	int l=1;
	for (int i = 1;i <= b;i++){
		l*=a;
	}
	return l;
}
int aw(int a,int b)
{
	bool aa[N],bb[N],cc[N];
	//sz*a的n ci=a jinzh||十转二 
	int itt=0,mm=0;
	
	while(a>=0){
		while(a>=gf(2,itt)){
		itt++;
		a-=gf(2,itt);
    	}
	}
	//
	int an=0;
	for(int i = 0;i <= N;i++)//er weishu
	{
		if(aa[i]==bb[i]&&aa[i]==1){
			cc[i]=1;
		}
		else cc[i]=0;
		an+=cc[i]*gf(2,i);
	}
	return an;
}
int main(){
//	freopen("and","r",stdin);
//	freopen("and","w",stdout);
	int n,m;
	cin >> n >> m;
	int a[N];
	int max_=-1;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = n;i >= 1;i--){
		for(int j = 1;j < i;j++){
			if (aw(a[i],a[j])>max_)
			{
			    max_=aw(a[i],a[j]);
			}
		}
	}
	
	cout << max_;
	return 0;
} 