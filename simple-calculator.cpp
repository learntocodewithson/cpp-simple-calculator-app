#include "SimpleCalculator.h"

int main() {
 SimpleCalculator simple_calculator;
 simple_calculator.setNumber1();
 simple_calculator.setMathOperator();
 simple_calculator.setNumber2();
 simple_calculator.calculate();
 simple_calculator.continueCalculation();
 simple_calculator.displayFinalResult();
 return 0;
}
