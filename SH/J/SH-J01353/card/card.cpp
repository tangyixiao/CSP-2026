#include<bits/stdc++.h>
using namespace std;

const int N=500005,M=300005;
stack<int> st;
int a[N],ans[M];
bool have[M];

void stadd(int x){
	if(have[x]){
		while(st.top()!=x && !st.empty()){
//			printf("add %d pop %d\n",x,st.top());
			have[st.top()]=0;
			st.pop();
		}
	}else{
//		printf("add %d\n",x);
		st.push(x);
		have[x]=1;
	}
	return;
}

void stcount(){
	while(!st.empty()){
		ans[st.top()]++;
		st.pop();
	}
	return;
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	
	
//	for(int i=0;i<n;i++){
//		cout << st.top() << ' ';
//		st.pop();
//	}
	
	
	
	
	for(int i=1;i<=n;i++){
		
		for(int j=0;j<=m;j++){
			have[j]=0;
		}
		
		for(int j=i;j<=n;j++){
			stadd(a[j]);
		}
		stcount();
	}
	
	for(int i=1;i<=m;i++){
		cout << ans[i] << ' ';
	}
	return 0;
}
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/
