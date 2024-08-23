#ifndef I_RANDOMNUMBERGENERATOT_H
#define I_RANDOMNUMBERGENERATOT_H

class IRandomNumberGenerator {
public:
  virtual ~IRandomNumberGenerator() {}
  virtual double generate(double min, double max) = 0;
};

#endif
