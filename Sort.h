#ifndef SORT_H
#define SORT_H

#include <iostream>
#include <vector>

class Sort {

    public:
    Sort();
    virtual std::vector<int> sort(std::vector<int> list) = 0;
    int len;

    std::vector<int> sorted;
    std::vector<int> unsorted;

};

#endif