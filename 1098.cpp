#include <iostream>

int main(void) {
    float i = 0;

    do {
        std::cout << "I=" << i << " " << "J=" << i + 1 << "\n";
        std::cout << "I=" << i << " " << "J=" << i + 2 << "\n";
        std::cout << "I=" << i << " " << "J=" << i + 3 << "\n";
    } while((i += 0.2) < 2.1);

    return 0;
}