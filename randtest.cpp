#include <iostream>
#include <random>

float rand_float() {
    std::mt19937 rng;
    rng.seed(std::random_device()());
    // distribution in range [1, 6]
    std::uniform_real_distribution<float> dis(0.0, 1.0);
    return dis(rng);
}
