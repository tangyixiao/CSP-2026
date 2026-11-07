#include <bits/stdc++.h>
using namespace std;

int n_list[500005];
int m_list[300005];

void clear_list(int* begin, int* end){
	while(begin <= end){
		*begin = 0;
		begin++;
	}
}

int have_num(int* begin, int* end, int val){
	int index = 0;
	while(begin <= end){
		if(*begin == val){
			return index;
		}
		begin++;
		index++;
	}
	return -1;
}

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n; cin >> n;
	int m; cin >> m;
	
	for(int i = 0; i < n; i++){
		cin >> n_list[i];
	}
	
	for(int i = 0; i < m; i++){
		vector<int> nums;
	    nums.reserve(m);
	    int write_index = 0;
	    
		for(int j = i; j < n; j++){
			int tmp = have_num(&nums[0], &nums[write_index - 1], n_list[j]);
			if(tmp != -1){
				clear_list(&nums[tmp], &nums[write_index]);
				write_index = tmp;
			}
			nums[write_index] = n_list[j];
			write_index++;
		}
		
		for(int j = 0; j < write_index; j++){
			m_list[n_list[j] - 1]++;
			cout << n_list[j] << " ";
		}
		cout << endl;
	}
	for(int i = 0; i < m; i++){
		cout << m_list[i] << " ";
	}
	return 0;
}
