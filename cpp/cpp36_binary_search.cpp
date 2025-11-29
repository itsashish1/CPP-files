#include <iostream>
#include <vector>

int binary_search(const std::vector<int>& a, int target) {
    int l = 0, r = (int)a.size() - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == target) return m;
        if (a[m] < target) l = m + 1; else r = m - 1;
    }
    return -1;
}

int main(){
    std::vector<int> v{1,3,5,7,9};
    std::cout << "index of 7: " << binary_search(v,7) << std::endl;
    return 0;
}
