#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	
	
	//先做 特A
	bool Is_A=true;
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1])Is_A=false;
	}
	if(Is_A){
		for(int i=1;i<=m;i++)cout<<upper_bound(a,a+n,i)-a<<' ';
		return 0;
	}
	//OK,在Linux下无问题，但在windows下有
	//做 特A 结束  O(nlogn)
	
	//做特判:m=1 
	if(m==1){
		cout<<n;
		return 0;
	}
	
//	vector<int> v[m+1];
//	for(int i=0;i<n;i++){
//		v[a[i]].push_back(i); 
//	}
//	//暴力
//	if(n*m<=1000000){
//		vector<int> ans[n];
//		for(int k=n-1;k>0;k++)
//		
//		
//	}
	
	
//	//做 m较小的情况
//	int _b[n];
//	for(int i=0;i<n;i++)_b[i]=a[i];
//	int cnt=unique(_b,_b+n)-_b;//冷知识！unique在a[i]全相等时不起作用！ 
//	//cout<<cnt<<'\n';
//	int b[cnt];
//	for(int i=0;i<cnt;i++)b[i]=_b[i]; 
//	int b_last[cnt+1],b_first[cnt+1]; 
//	int bl_tmp=0,bf_tmp=0;
//	b_last[0]=0;
//	b_first[0]=0;
//	for(int i=0;i<n;i++){
//		if(a[i]!=a[b_last[bl_tmp]]){
//			b_first[bf_tmp+1]=i;
//			b_last[bl_tmp]=i-1;
//			b_last[bl_tmp+1]=i;
//			bl_tmp++;
//			bf_tmp++;
//		}
//	}
//	b_last[cnt-1]=n-1;
//	//for(int i=0;i<cnt;i++)cout<<b[i]<<' '<<b_first[i]<<' '<<b_last[i]<<'\n';
//	 
//	vector<int> v[m+1];
//	for(int i=0;i<n;i++){
//		v[a[i]].push_back(i); 
//	}
//	//先做n*m较小
//	if(n*m<=500005){
//		vector<int> ans[m+1];
//		for(int k=n;k>=0;k++){
//			if(lower_bound(v,))
//		}
//	}
//	
	for(int i=0;i<m;i++)cout<<n-i<<' '; 
	return 0;
}
