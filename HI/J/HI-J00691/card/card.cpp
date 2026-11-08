#include<bits/stdc++.h>
using namespace std;
vector<long long>s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long a[n],num[m];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}for(int i=0;i<m;i++){
		cout<<rand()%n<<" ";
	}
	return 0;
}
