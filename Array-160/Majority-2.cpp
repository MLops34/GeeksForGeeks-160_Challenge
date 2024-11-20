#include <vector>
#include <unordered_map>
#include <algorithm>

std::vector<int> findMajority(std::vector<int>& arr) {
    int n = arr.size();
    int threshold = n / 3;
    std::unordered_map<int, int> countMap;

    for (int num : arr) {
        countMap[num]++;
    }

    std::vector<int> result;
    for (const auto& entry : countMap) {
        if (entry.second > threshold) {
            result.push_back(entry.first);
        }
    }

    std::sort(result.begin(), result.end());
    return result;
}