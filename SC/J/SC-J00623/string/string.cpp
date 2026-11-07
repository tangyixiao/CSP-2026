#include <bits/stdc++.h>
using namespace std;

struct s{
	long long num;
	char ch;
	long long save;
};
vector<s> a;
long long l,r,n,cnt;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	s inf;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>inf.num>>inf.ch;
		inf.save=inf.num;
		a.push_back(inf);
	}	
	l=0;r=n-1;

	while(l<=r){
		if(a[l].ch==a[r].ch){
			
			if(a[l].save>a[r].save){
				a[l].save-=a[r].save;
				r--;
			}else if(a[l].save<a[r].save){
				a[r].save-=a[l].save;
				l++;	
			}else{
				l++;
				r--;
			}
		}
		
		else{
			if(a[l].save>a[r].save){
				cnt+=a[r].save;
				a[l].save-=a[r].save;
				r--;
			}else if(a[l].save<a[r].save){
				cnt+=a[l].save;
				a[r].save-=a[l].save;
				l++;
			}else{
				cnt+=a[l].save;
				l++;
				r--;
			}
		}
	}
	cout<<cnt;
	return 0;
}