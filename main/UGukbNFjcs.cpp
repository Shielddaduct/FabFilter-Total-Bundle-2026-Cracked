#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
class Utility{
public:
    static int sum(const std::vector<int>& numbers){
        return std::accumulate(numbers.begin(), numbers.end(), 0);
    }
    static double average(const std::vector<int>& numbers){
        return static_cast<double>(sum(numbers)) / numbers.size();
    }
    static std::vector<int> sortAscending(std::vector<int> numbers){
        std::sort(numbers.begin(), numbers.end());
        return numbers;
    }
    static std::vector<int> sortDescending(std::vector<int> numbers){
        std::sort(numbers.begin(), numbers.end(), std::greater<int>());
        return numbers;
    }
    static int findMax(const std::vector<int>& numbers){
        return *std::max_element(numbers.begin(), numbers.end());
    }
    static int findMin(const std::vector<int>& numbers){
        return *std::min_element(numbers.begin(), numbers.end());
    }
};
int main(){
    std::vector<int> nums = {5, 3, 8, 1, 2};
    std::cout << "Sum: " << Utility::sum(nums) << std::endl;
    std::cout << "Average: " << Utility::average(nums) << std::endl;
    std::cout << "Max: " << Utility::findMax(nums) << std::endl;
    std::cout << "Min: " << Utility::findMin(nums) << std::endl;
    std::vector<int> sortedAsc = Utility::sortAscending(nums);
    std::cout << "Sorted Ascending: ";
    for(int n : sortedAsc){
        std::cout << n << " ";
    }
    std::cout << std::endl;
    std::vector<int> sortedDesc = Utility::sortDescending(nums);
    std::cout << "Sorted Descending: ";
    for(int n : sortedDesc){
        std::cout << n << " ";
    }
    std::cout << std::endl;
    return 0;
}
