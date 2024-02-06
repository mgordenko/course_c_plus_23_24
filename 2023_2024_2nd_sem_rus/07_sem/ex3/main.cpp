#include <iostream>

enum PermissionFlags {
  Read = 0x01,                // 0001
  Write = 0x02,               // 0010
  Execute = 0x04,             // 0100
  All = Read | Write | Execute// 0111
};

void checkPermissions(unsigned char permissions) {
  std::cout << "Permissions: ";
  if (permissions & Read) std::cout << "Read ";
  if (permissions & Write) std::cout << "Write ";
  if (permissions & Execute) std::cout << "Execute";
  std::cout << std::endl;
}

int main() {
  unsigned char myPermissions = Read | Execute;// 0101
  checkPermissions(myPermissions);
  myPermissions |= Write;// 0111
  checkPermissions(myPermissions);
  myPermissions &= ~Read;// 1110
  checkPermissions(myPermissions);
  return 0;
}