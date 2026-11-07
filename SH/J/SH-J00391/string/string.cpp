#include<bits/stdc++.h>
using namespace std;
#define int long long
const int max_n=2e5+10;
int n;
int a[max_n];
char c[max_n];
string s;
long long tot,cnt,num[100];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %c",&a[i],&c[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i];j++)s+=c[i];
		tot=s.size();
	} 
	int l=0,r=tot-1;
	while(l<r){
		if(s[l]==s[r])cnt++;
		l++;
		r--;
	}
	if(tot%2==1&&cnt==0)printf("%d\n",(tot-1)/2);
	else if(tot%2==0&&cnt==0)printf("%d\n",tot/2);
	else if(tot%2==0)printf("%d\n",tot-cnt*2);
	else if(tot%2==1)printf("%d\n",tot-cnt*2-1);
	return 0;
}
