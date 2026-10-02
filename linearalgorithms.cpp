/******************************
* Автор:   Хнкоян Михаил      *
* Задание: Линейные алгоритмы *
* Вариант: 9                  *
******************************/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  
  double mu;
  double P;
  double Q1;
  double Q2;
  double Q3;
  double pi;
  double l;
  double a;
  double R0;
  double R1;
  double R2;
  
  pi = 3.14159265358979324;
  l = 15.4;
  a = 0.0816;
  R0 = 0.0816;
  R1 = 0.0816;
  R2 = 0.0264;
  
  mu = 2.4 * pow(10.0, -4.0);
  P = 0.721 * pow(10.0, 4.0);
  Q1 = (pi * pow(R0, 4.0) / 8.0) * (P / (mu * l));
  Q2 = (pi * P / (8.0 * mu * l)) * (pow(R1, 4.0) - pow(R2, 4.0) - pow(R1 * R1 - R2 * R2, 2.0) / log(R1 / R2));
  Q3 = (pow(a, 4.0) * sqrt(3.0) / 320.0) * (P / (mu * l));
  
  cout << "Q1 = " << Q1 << endl 
       << "Q2 = " << Q2 << endl 
       << "Q3 = " << Q3 << endl;
  
  return 0;
}
