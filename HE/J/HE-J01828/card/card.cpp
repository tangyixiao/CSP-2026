#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int card[n];
	for(int i=0;i<n;i++){
		cin>>card[i];
	}
	set<int>a;
	vector<int>b;
	int ans[m] {0};
	int last;
	for(int i=0;i<n;i++){
		a.clear();
		b.clear();
		for(int j=i;j<n;j++){
			last=a.size();
			a.insert(card[j]);
			if(a.size()==last){
				int find=b.size();
				for(int k=0;k<b.size();k++){
					//cout<<k<<' ';
					if(b[k]==card[j]){
						find=k;
						break;
					}
				}
				for(int k=0;k<b.size()-1-find;k++) b.pop_back();
				//cout<<b.size()<<"   "<<find<<"    ";
			}else b.push_back(card[j]); 
		}
		for(int j=0;j<b.size();j++){
			ans[b[j]-1]++;
			//cout<<b[j]<<' ';
		}
		//cout<<endl;
	}
	for(int i=0;i<m;i++){
		cout<<ans[i]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
