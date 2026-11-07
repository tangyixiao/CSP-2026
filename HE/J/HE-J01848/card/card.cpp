#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    int tmp=1;int ans[m+1]={0};
    while(tmp<=n){
    	int de[n+1];
        for(int i=1;i<=n-tmp+1;i++){
        	de[i]=a[i+tmp-1];
        	for(int j=1;j<=i;j++){
        		if(de[j]==de[i]&&de[i]!=0&&de[j]!=0&&i!=j){
        			for(int x=i;x<j;x++) de[x]=0;
        			de[j-1]=de[j];
					break;
				}
			}
		}
        for(int i=1;i<=n-tmp+1;i++){
        	ans[de[i]]++;
		}
	    tmp++;
    }
    for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
    return 0;
}
//曾许下心愿
//等待AC 的出现
//褪色的代码 有分数 会纪念
//我循着时间 捡起暴力 的分数
//你说得对，但暴力也不会了
//这四个循环套一块要是能过一个点我就要烧高香了 
//很显然样例也没过
