// Find character

#include <iostream>

int main() {
  char c;

  std::cin >> c;

  if (c >= 'A' && c <= 'Z')
    std::cout << 1 << std::endl;

  else if (c >= 'a' && c <= 'z')
    std::cout << 0 << std::endl;

  else
    std::cout << -1 << std::endl;

  return 0;
}
