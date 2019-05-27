#include <boost/program_options.hpp>
#include <iostream>
#include <pxart/middle_square_weyl_engine.hpp>
// #include <random>
// #include "testu01_helper.hpp"
#include "testu01_utils.hpp"

using namespace std;
using namespace boost::program_options;

inline uint32_t bit_reversal(uint32_t v) noexcept {
  // https://graphics.stanford.edu/~seander/bithacks.html
  // swap odd and even bits
  v = ((v >> 1) & 0x55555555) | ((v & 0x55555555) << 1);
  // swap consecutive pairs
  v = ((v >> 2) & 0x33333333) | ((v & 0x33333333) << 2);
  // swap nibbles ...
  v = ((v >> 4) & 0x0F0F0F0F) | ((v & 0x0F0F0F0F) << 4);
  // swap bytes
  v = ((v >> 8) & 0x00FF00FF) | ((v & 0x00FF00FF) << 8);
  // swap 2-byte-long pairs
  v = (v >> 16) | (v << 16);
  return v;
}

int main(int argc, char* argv[]) {
  options_description description{"My tool usage!"};
  description.add_options()                                     //
      ("help,h", "Display this message.")                       //
      ("verbose,v", "Make messages verbose.")                   //
      ("small-crush,s", "Run test battery 'Small Crush'.")      //
      ("crush,m", "Run test battery 'Crush'.")                  //
      ("big-crush,b", "Run test battery 'Big Crush'.")          //
      ("linear-complexity,l", "Run test 'Linear Complexity'.")  //
      ("bit-reversal,r", "Apply bit reversal on 32 bit values.");
  variables_map vm;
  store(command_line_parser(argc, argv).options(description).run(), vm);
  notify(vm);

  if (vm.count("help")) {
    cout << description;
    return 0;
  }

  pxart::middle_square_weyl_engine rng{};

  if (vm.count("bit-reversal"))
    testu01_utils::set_rng([rng]() mutable { return bit_reversal(rng()); });
  else
    testu01_utils::set_rng(rng);

  testu01_utils::verbose(vm.count("verbose"));
  if (vm.count("small-crush")) testu01_utils::run_battery_small_crush();
  if (vm.count("crush")) testu01_utils::run_battery_crush();
  if (vm.count("big-crush")) testu01_utils::run_battery_big_crush();
  if (vm.count("linear-complexity"))
    testu01_utils::run_test_linear_complexity();
}