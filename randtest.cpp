#include <iostream>
#include <random>

int main() {
    std::mt19937 rng;
    rng.seed(std::random_device()());
    // distribution in range [1, 6]
    std::uniform_real_distribution<float> dis(0.0, 1.0);
    for (int i = 0; i < 20; i++) {
        std::cout << dis(rng) << std::endl;
    }
}
