#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
   vector<int> in;
   string s;
   getline(cin, s);

   istringstream is(s);
   int v;


   while (is >> v)
   {
       in.push_back(v);
   }


   QuickSort q;
   q.sort(in);

   RecursiveBinarySearch search1;
   int response = search1.search(in, 1);

   if (response >= 0)
   {
       cout << "true ";
   }
   else
   {
       cout << "false ";
   }

   for(unsigned int i = 0; i < in.size(); i++)
   {
       cout << " " << in.at(i);
   }

   return 0;
}