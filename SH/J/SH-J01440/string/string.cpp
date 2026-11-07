#include<fstream>
#include<vector>

template<typename A, typename B>
struct pair{
    A first;
    B second;
};

struct Segment{
    long long int l;
    long long int r;
    char c;
};

int main(){
    std::fstream file_in("string.in");
    std::fstream file_out("string.out");

    int n;
    file_in>>n;

    std::vector<int> a(n);
    std::vector<char> c(n);

    long long int total = 0;

    for(int i = 0, a_i; i < n; i++){
        char c_i;
        file_in>>a_i>>c_i;

        a[i] = a_i;
        c[i] = c_i;

        total += (long long int)a_i;
    }

    std::vector<Segment> segments_l, segments_r;

    long long int left_end = (total) / 2;
    long long int right_start = left_end + total % 2;

    long long int sum = 0;

    int segments = 0;
    
    for(int i = 0; i < n; i++){
        if(i == n - 1){
            segments_r.push_back({sum, total, c[i]});
            segments++;
            continue;
        }

        if(sum < left_end && sum + a[i] >= left_end){
            segments_l.push_back({sum, left_end, c[i]});
            segments++;
            
            if(sum + a[i] > right_start){
                segments_r.push_back({right_start, sum + a[i], c[i]});
                segments++;
            }

            sum += a[i];
            continue;
        }

        if(sum + a[i] < left_end){
            segments_l.push_back({sum, sum + a[i], c[i]});
            segments++;
            sum += a[i];

            continue;
        }

        if(sum < right_start){
            segments_r.push_back({right_start, sum + a[i], c[i]});
            segments++;
            sum += a[i];

            continue;
        }

        segments_r.push_back({sum, sum + a[i], c[i]});
        segments++;
        sum += a[i];
    }

    // std::cout<<"Left segments: \n";
    // for(const Segment& s : segments_l){
    //     std::cout<<"Start: "<<s.l<<", end: "<<s.r<<", character: "<<s.c<<(char)0x0A;
    // }

    // std::cout<<"Right segments: \n";
    // for(const Segment& s : segments_r){
    //     std::cout<<"Start: "<<s.l<<", end: "<<s.r<<", character: "<<s.c<<(char)0x0A;
    // }

    int l_idx = 0, r_idx = segments_r.size() - 1;

    long long int r = 0;

    int count = segments_l.size();
    for(int i = 0; i < count; i++){
        Segment& left = segments_l[i];
        long long int o = total - left.r;
        
        while(r_idx >= 0){
            Segment& right = segments_r[r_idx];
            bool different = left.c != right.c;

            if(right.l > o){
                r += (int)different * (right.r - right.l);
                r_idx--;
                continue;
            }

            if(right.l == o){
                r += (int)different * (right.r - right.l);
                r_idx--;

                break;
            }

            r += (int)different * (o - right.l);
            right.l = o;
            break;
        }
    }

    file_out<<r;
    
    return 0;
}