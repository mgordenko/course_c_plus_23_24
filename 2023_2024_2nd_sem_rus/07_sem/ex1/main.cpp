#include <iostream>

union MyUnion {
  int intMember;
  float floatMember;
  char charMember;
  unsigned char membs[4];
};

int main() {
  MyUnion testUnion;
  testUnion.intMember = 1000;
  std::cout << "Int value: " << testUnion.intMember << std::endl;
  std::cout << "Float value: " << testUnion.floatMember << std::endl;
  std::cout << "Char value: " << testUnion.charMember << std::endl;
  std::cout << "Char[0]: " << (int) testUnion.membs[0] << std::endl;
  std::cout << "Char[1]: " << (int) testUnion.membs[1] << std::endl;
  std::cout << "Char[2]: " << (int) testUnion.membs[2] << std::endl;
  std::cout << "Char[3]: " << (int) testUnion.membs[3] << std::endl;
  return 0;
}
// Int value: 786529
// Float value: 1.10216e-39
// Char value: a
// Char[0]: a
// Char[0]: x00
// Char[0]: f
// Char[0]: x00

// Int value: 97
// Float value: 1.35926e-43
// Char value: a
// Char[0]: a
// Char[1]: x00
// Char[2]: x00
// Char[3]: x00