#include<bits/stdc++.h>
using namespace std;
struct node{
	long long a;
	char c;
}k[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out ","w",stdout);
	map<char,long long>m;
	long long ans=0;
	int ji=0,ou=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>k[i].a>>k[i].c;
		m[k[i].c]+=k[i].a;
	}
	int l=1,r=n;
	while(l<r){
		if(k[r].c!=k[l].c){
			ans+=min(k[l].a,k[r].a);
		}
		if(k[l].a==k[r].a){
			l++;
			r--;
		}else if(k[l].a>k[r].a){
			k[l].a-=k[r].a;
			r--;
		}else{
			k[r].a-=k[l].a;
			l++;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
