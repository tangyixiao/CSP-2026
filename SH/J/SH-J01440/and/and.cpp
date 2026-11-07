#include<fstream>
#include<vector>
#include<algorithm>

class SegmentTree{
    private:
        int n, h;
        std::vector<int> data;
    
    public:
        SegmentTree(const std::vector<int>& v){
            n = 1;
            h = 0;

            int size = v.size();

            while(n < size){
                n *= 2;
                h++;
            }

            data.resize(n * 2);
            for(int i = 0; i < size; i++){
                data[i + n] = v[i];
            }

            for(int i = n - 1; i > 0; i--){
                data[i] = std::max(data[i * 2], data[(i * 2) + 1]);
            }
        }

        int range_max(int l, int r){
            l += n;
            r += n;

            int res = 0;

            while(l < r){
                if(!(l & 1)){
                    res = std::max(res, data[l++]);
                }

                if(!(r & 1)){
                    res = std::max(res, data[--r]);
                }

                l /= 2;
                r /= 2;
            }

            return res;
        }
};

int main(){
    int n, m;
    std::fstream file_in("and.in");
    std::fstream file_out("and.out");
    file_in>>n>>m;

    std::vector<int> a(n);

    for(int& i : a){
        file_in>>i;
    }

    std::sort(a.begin(), a.end());

    SegmentTree tree(a);

    int r = 0;
    for(int i = 0; i < n - m; i++){
        r = std::max(r, tree.range_max(i, i + m));
    }

    file_out<<r;

    return 0;
}