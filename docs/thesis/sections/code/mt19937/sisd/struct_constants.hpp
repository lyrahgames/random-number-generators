struct mt19937 {
  using uint_type = uint32_t;
  using result_type = uint_type;
  static constexpr size_t word_size = 32;
  static constexpr size_t state_size = 624;
  static constexpr size_t shift_size = 397;
  static constexpr size_t mask_bits = 31;
  static constexpr uint_type xor_mask = 0x9908b0dfu;
  static constexpr uint_type tempering_b_mask = 0x9d2c5680u;
  static constexpr uint_type tempering_c_mask = 0xefc60000u;
  static constexpr size_t tempering_u_shift = 11;
  static constexpr size_t tempering_s_shift = 7;
  static constexpr size_t tempering_t_shift = 15;
  static constexpr size_t tempering_l_shift = 18;
  static constexpr uint_type default_seed = 5489u;
  static constexpr uint_type init_multiplier = 1812433253u;
  static constexpr uint_type upper_mask = (~uint_type{}) << mask_bits;
  static constexpr uint_type lower_mask = ~upper_mask;

  // ...
};