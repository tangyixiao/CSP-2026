#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
const int M=3e5+5;
int hap[M];
stack<int> st;
int ans[M];
int a[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		memset(hap,0,sizeof(hap));
		for(int l=i;l<=n;l++){
			if(hap[a[l]]){
				//cout<<l<<" ";
				while(st.size() && st.top()!=a[l]){
					hap[st.top()]--;
					//cout<<st.top()<<" ";
					st.pop();
				}
				//st.push(a[l]);
			}else{
				st.push(a[l]);
				hap[a[l]]++;
			}
		}
		while(st.size()){
			//cout<<st.top()<<" "; 
			ans[st.top()]++;
			st.pop();
		} 
		//cout<<endl;
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}