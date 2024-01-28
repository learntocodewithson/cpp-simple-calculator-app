#ifndef SIMPLECALCULATOR_H
#define SIMPLECALCULATOR_H

#include<iostream>
#include<string>
using namespace std;

/*
 Enter number1: 5
 Operation: +, -, * , /
 Enter number2: 10
 Total: 15
 Operation: +,-,*,/
 Enter a number: 5
 Total: 20
 Operation: -
 Enter a number: -22
 Total: -2
 Thank your for using my simple calculator.
*/

class SimpleCalculator {
 int number1, number2, total;
 string math_operator;

 int computeSum(){
  return number1 + number2;
 }

 int computeDifference(){
  return number1 - number2;
 }

 int computeProduct(){
  return number1 * number2;
 }

 int computeQoutient(){
  return number1 / number2;
 }

 public:
  // setter
  void setTotalToNumber1(){
   number1 = total;
  }

  void setNumber1(){
    cout << "Enter number1: ";
    cin >> number1;
  }

  void setNumber2(){
    cout << "Enter number2: ";
    cin >> number2;
  }

  void setMathOperator(){
    cout << "Math Operation: ";
    cin >> math_operator;
  }

  // getter
  int getNumber1(){
   return number1;
  }

  int getNumber2(){
   return number2;
  }

  int getTotal(){
   return total;
  }

  void calculate(){
   if (math_operator == "+"){
    total = computeSum();
   } else if (math_operator == "-"){
    total = computeDifference();
   } else if (math_operator == "*"){
    total = computeProduct();
   } else if (math_operator == "/"){
    total = computeQoutient();
   }
  }

  void continueCalculation(){
    do {
      cout << "Total: " << getTotal() << endl;
      setMathOperator();
      setNumber2();
      setTotalToNumber1();
      calculate();
    } while(getTotal() >= 0);
  }

  void displayFinalResult(){
    cout << "Total: " << getTotal() << endl; 
    cout << "Thank your for using my simple calculator.";
  }
};

#endif