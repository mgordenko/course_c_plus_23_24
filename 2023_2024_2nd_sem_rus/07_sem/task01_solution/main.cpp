#include <iostream>

union MyUnion {
  long longMember;
  unsigned char bytes[sizeof(long)];
};

int main() {
  MyUnion testUnion;
  testUnion.longMember = 293423074;
  for (int i = 0; i < sizeof(long); i++) {
    std::cout << (int) testUnion.bytes[i] << " ";
  }
  return 0;
}