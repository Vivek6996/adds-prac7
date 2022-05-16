#include "BubbleSort.h"
#include <bits/stdc++.h>

BubbleSort::BubbleSort(){
    len = 0;
}

std::vector<int> BubbleSort::sort(std::vector<int> list) {

    unsorted = list;

    len = unsorted.size();

    for (int i = 0; i < len - 1; i++){

        for (int j = 0; j < len - i - 1; j++) {

            if(unsorted.at(j) > unsorted.at(j + 1)) {

                std::swap(unsorted.at(j), unsorted.at(j + 1));

            }

        }

    }


        return unsorted;

}

