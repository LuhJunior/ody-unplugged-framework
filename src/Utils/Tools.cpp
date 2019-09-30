#include "Tools.hpp"

string Tools::toBinary(int v) {
  bitset<16> binary(v);
  return binary.to_string();
}