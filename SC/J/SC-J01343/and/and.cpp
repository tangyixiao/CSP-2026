#include <iostream>
using namespace std;
const int N=2e5+10;
int a[N];
bool st[N];
int n,m;

int main(){
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	int num=-1;
	for(int i=29;i>=0;i--){
		int sum=0;
		num=i;
		for(int j=1;j<=n;j++){
			if(((1<<i)&a[j])){
				st[j]=true;
				 sum++;
			}
		}
		
		if(sum>=m){
			break;
		}else{
			num=-1;
		}
	}
	
	if(num==-1){
		cout<<0;
		return 0;
	}
	
	for(int i=num;i>=0;i--){
		int sum=0;
		for(int j=1;j<=n;j++){
			if(((1<<i)&a[j]) && st[j]){
				sum++;
			}
		}
		
		if(sum>=m){
			for(int j=1;j<=n;j++){
				if(((1<<i)&a[j])==0){
					st[j]=false;
				}
			}
		}
	}
	
	int ans=-1;
	for(int i=1;i<=n;i++){
		if(st[i]==true){
			if(ans==-1){
				ans=a[i];
			}else{
				ans&=a[i];
			}
		}
	}
	
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}