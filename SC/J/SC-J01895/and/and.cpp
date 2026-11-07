#include<bits/stdc++.h>
using namespace std;
int s[100005];
bool cmp(int A,int B){
	return A>B;
}
int main(){
	freopen("and.in.txt","r",stdin);
	freopen("and.out.txt","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	sort(s,s+n,cmp);
	int z=s[0]; 
	for(int i=1;i<m;i++){
		z&=s[i];
	}
	cout<<z;
	return 0;
} 