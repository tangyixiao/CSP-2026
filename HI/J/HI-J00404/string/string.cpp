#include<bits/stdc++.h>
using namespace std;
vector<int>al,ar;
vector<char>bl,br;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long sum = 0,ans = 0;
	cin>>n;
	int a[200001];
	char b[200001];
	// 
	for(int i = 0;i<n;i++){
		cin>>a[i];
		cin>>b[i];
		sum +=a[i];
	}
	// 
	bool bbll = true;
	long long summ = 0;
	for(int i = 0;i<n;i++){
		summ+=a[i];
		if(bbll){
			if(summ>(sum/2)){
				bbll = false;
				int t=int(summ-(sum/2));
				if(sum%2 == 0){
					ar.push_back(t);
					br.push_back(b[i]);			
					a[i]-=t;
				}else{
					if(t-1!=0){
						ar.push_back(t-1);
						br.push_back(b[i]);
					}
					a[i]-=t+1;
			}
		}
			al.push_back(a[i]);
			bl.push_back(b[i]);
		}else{
			ar.push_back(a[i]);
			br.push_back(b[i]);
		}
}
int k = 0;
	
	while(al.size()!=0){
		if(al.back()>ar[k]){
			if(bl.back()!=br[k]){
				ans+=ar[k];
				
			}
			al.back()-=ar[k];
			k++;
			
		}else if(al.back()<ar[k]){
			if(bl.back()!=br[k]){
				ans+=al.back();
			
			}
			ar[k]-=al.back();
			al.pop_back();
			bl.pop_back();
		}else if(al.back() == ar[k]){
			if(bl.back()!=br[k]){
				ans+=al.back();
			
			}
			k++;
			al.pop_back();
			bl.pop_back();
		}
	
	}
	cout<<ans;
	
	return 0;
}

