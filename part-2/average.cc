// Pauline Nguyen
// paulinenguyen05@csu.fullerton.edu
// @paulinenguyen05
// Partners: @angieguia

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum{0.0};
  for (int i = 1; i <= arguments.size() - 1; ++i) {
    sum += std::stod(arguments.at(i));
  }

  double average = sum / (arguments.size() - 1);
  std::cout << "average = " << average << "\n";
  return average;
}