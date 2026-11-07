#include<bits/stdc++.h> 
using namespace std;
const int N=1e5+10;
string s[N];
int maxx(int a,int b){
	string s2=s[a],s3=s[b];
	int s1=max(s3.size(),s2.size()),i=s1;
	while((s2[i]==s3[i])&&(i>0)) i--;
	if(s3[i]>s2[i]) return b;
	else if(s2[i]>s3[i]) return a;
	else return -1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>s[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(maxx(j,j+1)==j+1) swap(s[j],s[j+1]);
		}
	}
	cout<<s[m-1];
	return 0;
}