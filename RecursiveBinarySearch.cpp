#include "RecursiveBinarySearch.h"

int recursiveHelper(std::vector<int> sorted, int y, int l, int r) {

    if(r>=l){
        int mid = l + (r-l) / 2;

    if (sorted.at(mid) == y){
        return mid;
    } else if (sorted.at(mid) > y){
        return recursiveHelper(sorted, y, l, mid - 1);
    } else {
        return recursiveHelper(sorted, y, mid + 1, r);
    }


    }

    return -1;
}

bool RecursiveBinarySearch::search(std::vector<int> sorted, int y){

    if (recursiveHelper(sorted, y, 0, sorted.size() - 1) == -1) {
        return false;
    }

        return true;

}