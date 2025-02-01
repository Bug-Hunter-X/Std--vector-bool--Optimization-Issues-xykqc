#include <iostream>
#include <vector>
#include <chrono>

int main() {
  // Using std::vector<bool>
  auto start = std::chrono::high_resolution_clock::now();
  std::vector<bool> boolVec(1000000); 
  for (size_t i = 0; i < boolVec.size(); ++i) {
    boolVec[i] = (i % 2 == 0);
  }
  auto end = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  std::cout << "std::vector<bool> time: " << duration.count() << "ms" << std::endl;

  // Using std::vector<char>
  start = std::chrono::high_resolution_clock::now();
  std::vector<char> charVec(1000000);
  for (size_t i = 0; i < charVec.size(); ++i) {
    charVec[i] = (i % 2 == 0);
  }
  end = std::chrono::high_resolution_clock::now();
  duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  std::cout << "std::vector<char> time: " << duration.count() << "ms" << std::endl;

  return 0;
}
