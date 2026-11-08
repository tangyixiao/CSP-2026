#include<bits/stdc++.h>
#define I using
#define AK namespace
#define cspJ std
I AK cspJ;
int n,m;
int quick_cin_math(){
	int the_number=0;
	string a_num;
	cin>>a_num;
	for(int i=0;i<a_num.size();i++){
		the_number=the_number*10+a_num[i]-'0';
	}
	return the_number; 
}
inline int dfs(vector<int>&a,int k,int i,int ans){
	if(n-i+k<m)return 0;
	if(n-i+k==m){
		for(int j=i;j<n;j++){
			ans&=a[j];
		}
		return ans;
	}
	if(k==m)return ans;
	if(k==0)return max(dfs(a,k,i+1,ans),dfs(a,k+1,i+1,a[i]));
	return max(dfs(a,k,i+1,ans),dfs(a,k+1,i+1,ans&a[i]));
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	n=quick_cin_math();
	m=quick_cin_math();
	vector<int>a(n);
	for(int i=0;i<n;i++)a[i]=quick_cin_math();
	cout<<dfs(a,0,0,0)<<'\n';
	return 0;
}
