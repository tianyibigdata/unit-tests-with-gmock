#ifndef RANDOMNUMBERGENERATOT_H
#define RANDOMNUMBERGENERATOT_H

#include "../i_random_number_generator.hpp"

class RandomNumberGenerator : public IRandomNumberGenerator {
public:
  double generate(double min, double max) noexcept override;
};

#endif
