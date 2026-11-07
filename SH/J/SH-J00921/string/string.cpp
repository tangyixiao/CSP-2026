#include<bits/stdc++.h>
using namespace std;
struct Str{
	int l;string s;
};Str a[200010];
int n;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].l>>a[i].s;
	}
	for(int i=1,j=n;i<j;){
		if(a[i].s!=a[j].s){
			if(a[i].l>a[j].l){
				ans+=a[j].l;
				a[i].l-=a[j].l;
				j--;
			}
			else if(a[i].l==a[j].l){
				ans+=a[j].l;
				j--,i++;
			}
			else if(a[i].l<a[j].l){
				ans+=a[i].l;
				a[j].l-=a[i].l;
				i++;
			}
		}
		if(a[i].s==a[j].s){
			if(a[i].l>a[j].l){
				a[i].l-=a[j].l;
				j--;
			}
			else if(a[i].l==a[j].l){
				j--,i++;
			}
			else if(a[i].l<a[j].l){
				a[j].l-=a[i].l;
				i++;
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
