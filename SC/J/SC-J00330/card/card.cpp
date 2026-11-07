#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,tong[300001];
	char a[500001];
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		string s;
		for(int j=i;j<=n;j++){
			if(s.find(a[j])==-1) s+=a[j];
			else{
				s.erase(s.find(a[j]),n-(s.find(a[j])-1));
				s+=a[j];
			}
		}
		for(int j=0;j<s.size();j++) tong[s[j]-'0']++;
	}
	for(int i=1;i<=m;i++) cout<<tong[i]<<' ';
	fclose(stdin);
	fclose(stdout);
	return 0;
}