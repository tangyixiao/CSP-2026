#include<bits/stdc++.h>
using namespace std;
long long L,n,cnt;
char p[200005];
long long l[200005],r[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>l[i]>>p[i];L+=l[i];r[i]=l[i];
	}/*int tmpl=0;for(int i=1; i<=n; i++){
		if(tmpl+l[i]<=l/2){
			tmpl+=l[i];
		}else{
			l[i]=(l/2)-tmpl;
		}
	}*/
	int left=1,right=n;
	while(left<right){
		cnt+=min(l[left],r[right])*(p[left]!=p[right]);
		if(l[left]>r[right]){
			l[left]-=r[right];r[right]=0;right--;
		}else if(l[left]==r[right]){
			l[left]=0;r[right]=0;left++;right--;
		}else{
			r[right]-=l[left];l[left]=0;left++;
		}
	}cout<<cnt;
	return 0;
} 
