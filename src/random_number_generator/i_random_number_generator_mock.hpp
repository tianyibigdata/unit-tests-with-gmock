#ifndef I_RANDOM_NUMBER_GENERATOR_MOCK_H
#define I_RANDOM_NUMBER_GENERATOR_MOCK_H

#include "i_random_number_generator.hpp"
#include <gmock/gmock.h>

class RandomNumberGeneratorMock : public IRandomNumberGenerator {
public:
  MOCK_METHOD((double), generate, (double, double), (noexcept));
};

#endif
