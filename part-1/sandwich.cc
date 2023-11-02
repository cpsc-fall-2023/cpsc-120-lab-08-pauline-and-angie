// Pauline Nguyen
// paulinenguyen05@csu.fullerton.edu
// @paulinenguyen05
// Partners: @angieguia

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);

  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments\n";
    return 1;
  }

  std::string protein{arguments.at(1)};
  std::string bread{arguments.at(2)};
  std::string condiment{arguments.at(3)};

  std::cout << "Protein: " << protein << "\n";
  std::cout << "Bread: " << bread << "\n";
  std::cout << "Condiment: " << condiment << "\n";

  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << "\n";
            
  return 0;
}
