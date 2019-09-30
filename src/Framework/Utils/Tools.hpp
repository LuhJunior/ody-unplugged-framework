#ifndef TOOLS_H
#define TOOLS_H

#include <string>
#include <algorithm>
#include <bitset>

#define find_val(v, val) find(v.begin(), v.end(), val);
#define find_val_if(v, fn) find_if(v.begin(), v.end(), fn);

using namespace std;


class Tools {
public:
  static string toBinary(int);
};

#endif