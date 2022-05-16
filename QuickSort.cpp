#include "QuickSort.h"
#include <bits/stdc++.h>

QuickSort::QuickSort(){

    len = 0;

}

int divide (std::vector<int> list, int start, int end) {

    int x = start + 1;

    int pivot;

    if (list.size()>2){
        pivot = 2;
    } else {
        pivot = 1;
    }

    for (int i = start + 1; i <= end; i++){

        if (list.at(i) < pivot) {
            std::swap(list.at(x), list.at(i));
            x += 1;
        }

    }

    std::swap(list.at(start), list.at(x-1));

    return x - 1;

}

std::vector<int> quickHelper (std::vector<int> list, int start, int end){

    if (start<end){

        int pos = divide(list, start, end);
        quickHelper(list, start, pos-1);
        quickHelper(list, pos+1, end);
    }

    return list;

}

std::vector<int> QuickSort::sort(std::vector<int> list){

    unsorted = list;
    len = unsorted.size();
    
    std::vector<int> sorted = quickHelper(list,0,len-1);

    return sorted;

}