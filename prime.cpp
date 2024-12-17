#include <cstdlib>
#include <iostream>
#include <limits>

int main() {

  int count = 0;
  int num2 = 0;
  char accept;

  std::cout << "Show all primes? (Y?): ";
  std::cin >> accept;
  std::cout << "Enter amount: ";
  std::cin >> num2;

  if (std::cin.fail()) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Not an int" << "\n";
    exit(1);
  }

  for (int num1 = 2; num1 <= num2; num1++) {
    int isPrime = 1;

    for (int i = 2; i * i <= num1; i++) {
      if (num1 % i == 0) {
        isPrime = 0;
        break;
      }
    }

    if (isPrime) {
      if (accept == 'Y' || accept == 'y') {
        std::cout << "prime: " << num1 << "\n";
      }
      count++;
    }
  }

  std::cout << "There are " << count << " primes in total." << "\n";

  return 0;
}
