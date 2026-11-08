#include<iostream>
#include<stack>
void fast(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
}
const int N=5e5+5;
const int M=3e5+5;
int n,m;
int a[N];
int ans[M];
bool t[M];
void T(){
	for(int k=1;k<=n;k++){ 
		std::stack<int> st;
		for(int i=k;i<=n;i++){
			if(t[a[i]]){
				while(!st.empty()&&a[st.top()]!=a[i]){
					t[a[st.top()]]=0;
					st.pop();
				}
			}
			else{
				t[a[i]]=1;
				st.push(i);
			}
		}
		while(!st.empty()){
			ans[a[st.top()]]++;
			t[a[st.top()]]=0;
			st.pop();
		}
	}
}
void A(){
	int lst[m+5];
	for(int i=1;i<=n;i++){
		lst[a[i]]=i;
	}
	for(int i=1;i<=m;i++){
		ans[i]=lst[i];
	}
}
void W(){
	std::stack<int> st;
	for(int i=n;i>=1;i--){
		if(t[a[i]]){
			while(!st.empty()&&a[st.top()]!=a[i]){
				ans[a[st.top()]]-=i;
				t[a[st.top()]]=0;
				st.pop();
			}
		}
		else{
			ans[a[i]]+=i;
			t[a[i]]=1;
			st.push(i);
		}
	}
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	fast();
	std::cin>>n>>m;
	bool fa=1;
	for(int i=1;i<=n;i++){
		std::cin>>a[i];
		if(a[i-1]>a[i]){
			fa=0;
		}
	}
	if(n*n<=1e8){
		T();
	}
	else if(fa){
		A();
	}
	else{
		W();
	}
	for(int i=1;i<=m;i++){
		std::cout<<ans[i]<<" ";
	}
	return 0;
}
 
