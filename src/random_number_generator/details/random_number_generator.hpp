#ifndef RANDOMNUMBERGENERATOT_H
#define RANDOMNUMBERGENERATOT_H

#include "../i_random_number_generator.hpp"
#include <memory>

class RandomNumberGenerator : public IRandomNumberGenerator {
public:
  double generate(double min, double max) noexcept override;
};

enum class FlipCoinResult { HEAD = 0, TAIL = 1 };

class CoinFlipper {
public:
  explicit CoinFlipper(std::shared_ptr<IRandomNumberGenerator> RandomNumberGenerator);
  FlipCoinResult flip();

private:
  std::shared_ptr<IRandomNumberGenerator> m_RandomNumberGenerator;
};

#endif
