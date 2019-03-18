#include <iostream>
#include <list>
#include <iterator>
using namespace std;

bool contains_pair_with_sum(list <int> list1, int k) {
    list1.sort();
    for (int i = 0, j = list1.size() - 1; i < j;) {

        std::list<int>::iterator it = list1.begin();
        std::advance(it, i);
        int val1 = *it;

        it = list1.begin();
        std::advance(it, j);
        int val2 = *it;

        int sum = val1 + val2;

        if (sum < k)
            i++;
        else if (sum > k)
            j--;
        else
            return true;
    }
    return false;
}

int main() {
    int k = 17;

    list <int> list1;
    list1.push_back(10);
    list1.push_back(15);
    list1.push_back(3);
    list1.push_back(7);

    bool contains_sum = contains_pair_with_sum(list1, k);
    std::string result1 = contains_sum == 0 ? "false" : "true";
    cout << "\nContains pair with sum list={10, 15, 3, 7}, k=17? " << result1;

    list <int> list2;
    list2.push_back(10);
    list2.push_back(15);
    list2.push_back(3);
    list2.push_back(6);

    contains_sum = contains_pair_with_sum(list2, k);
    std::string result2 = contains_sum == 0 ? "false" : "true";
    cout << "\nContains pair with sum list={10, 15, 3, 6}, k=17? " << result2 << "\n";

    return 0;
}