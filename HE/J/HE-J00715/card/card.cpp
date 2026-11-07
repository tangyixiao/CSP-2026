#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m;
int a[N];
int b3[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	vector <int> a1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int b1[m+10];
		int b2[m+10];
		for(int j=i;j<=n;j++){
			if(b1[a[j]]==0){
				b1[a[j]]++;
				a1.push_back(a[j]);
				b2[a[j]]=sizeof(a1);
			}
			else{
				b1[a[j]]=1;
				a1.erase(a1.begin()+b2[a[j]],a1.end());
				a1.push_back(a[j]);
			}
		}
		for(int i=0;i<sizeof(a1);i++){
			b3[a1[i]]+=1;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b3[i]<<' ';
	}
	return 0;
}
