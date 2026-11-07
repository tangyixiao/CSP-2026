#include<bits/stdc++.h>
using namespace std;
struct duan{
	int num;
	char cc;
}a[200001];
long long s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].cc;
		s+=a[i].num;
	}
	if(s%2==1){
		long long t=0,p=s/2+1;
		for(int i=1;i<=n;i++){
			t+=a[i].num;
			if(t>=p){
				a[i].num--;
				s--;
				break;
			}
		}
	}int t=n,h=1,sh=n;
	long long int tot=0;
	int bj=-1;
	while(h<=t){
		if(a[h].num<a[t].num){
			a[t].num-=a[h].num;
			if(a[h].cc!=a[t].cc){
				tot+=a[h].num;
				//cout<<a[h].cc<<" "<<a[t].cc<<endl;
			}
			h++;
			
		}else if(a[h].num==a[t].num){
			if(a[h].cc!=a[t].cc){
				tot+=a[h].num;
				//cout<<a[h].cc<<" "<<a[t].cc<<endl;
			}
			h++;
			t--;
		}else{
			a[h].num-=a[t].num;
			if(a[h].cc!=a[t].cc){
				tot+=a[t].num;
				//cout<<a[h].cc<<" "<<a[t].cc<<endl;
			}
			t--;
		}
	}
	cout<<tot;
	
}