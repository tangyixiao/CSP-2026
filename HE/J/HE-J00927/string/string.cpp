#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
struct Str{
	int num;
	char s;
};

int n;
Str str[200001];
long long ans;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>str[i].num>>str[i].s;
	}
	int l=1,r=n;
	while(l<=r){
		if(str[l].s!=str[r].s && str[l].num<=str[r].num){
			ans+=str[l].num;
			str[r].num-=str[l].num;
			l++;
		}
		else if(str[l].s!=str[r].s && str[l].num>str[r].num){
			ans+=str[r].num;
			str[l].num-=str[r].num;
			r--;
		}
		else if(str[l].s==str[r].s && str[l].num<=str[r].num){
			str[r].num-=str[l].num;
			l++;
		} 
		else{
			str[l].num-=str[r].num;
			r--;
		}
	}
	cout<<ans<<endl;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
