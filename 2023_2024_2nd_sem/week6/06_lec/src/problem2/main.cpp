#include <iostream>

enum PermissionFlags {
  Read = 1,                // 0001
  Write = 2,               // 0010
  Execute = 0b0100,             // 0100
  All = Read | Write | Execute// 0111
};
void checkPermissions(unsigned char permissions) {
  std::cout << "Permissions: ";
  if (permissions & Read) std::cout << "Read ";
  // 0101 & 0001 = 0001
  if (permissions & Write) std::cout << "Write ";
  // 0111 & 0010 = 0010
  if (permissions & Execute) std::cout << "Execute";
  // 0101 & 0100 = 0100
  std::cout << std::endl;
}
int main() {
  unsigned char myPermissions = Read | Execute;// 0101
  checkPermissions(myPermissions);
  myPermissions |= Write;// 0111
  checkPermissions(myPermissions);
  myPermissions &= ~Read;// 1110
  // 0001 -> 1110
  // 0111 & 1110 = 0110
  checkPermissions(myPermissions);
  return 0;
}