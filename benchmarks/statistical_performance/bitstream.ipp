#include <cstdio>
#include <iostream>
#include <pxart/pxart.hpp>
#include <random>

using namespace std;

int main() {
  PXART_BITSTREAM_RNG rng{random_device{}};

  // freopen(nullptr, "wb", stdout);
  // while (1) {
  //   uint32_t value = rng();
  //   fwrite((void*)&value, sizeof(value), 1, stdout);
  // }

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  while (true) {
    const auto sample = rng();
    cout.write(reinterpret_cast<const char*>(&sample), sizeof(sample));
  }
}