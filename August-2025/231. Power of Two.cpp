class Solution {
public:
// let 'n' be a given number
// time complexity O(1)
// space complexity O(1)
// runtime 0 ms, beats 100.00 %
    [[nodiscard]]
    bool isPowerOfTwo(int const num_) const;
};

bool Solution::isPowerOfTwo(int const num_) const {
    if(num_ <= 0) {
        return false;
    }
    auto isPowOf2{std::has_single_bit(static_cast<unsigned>(num_))};
    return isPowOf2;
}