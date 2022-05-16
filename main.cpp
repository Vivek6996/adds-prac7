#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

#include <string>
#include <vector>
#include <sstream>

int main(){

    std::string in;
    std::getline (std::cin, in);
    std::stringstream stream(in);
    std::vector<int> iList;

    int n;

    while (stream >> n) {
        iList.push_back(n);
    }

    
    // BubbleSort bSorter = BubbleSort();
    QuickSort qSorter = QuickSort();
    RecursiveBinarySearch search1 = RecursiveBinarySearch();

    std::vector<int> sorted = qSorter.sort(iList);
    bool response = search1.search(sorted, 1);


    if (response == true) {
        std::cout << "true ";
    }
    else  {
        std::cout << "false ";
    }

    for (int i = 0; i < sorted.size(); i++) {
        if (i < sorted.size() - 1)  {
            std::cout << sorted.at(i) << " ";
        }
        else  {
            std::cout << sorted.at(i) << std::endl;
        }
    }

    return 0;


}