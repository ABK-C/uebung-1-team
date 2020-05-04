#include <iostream>
#include <fstream>
#include <cmath>


int main() {

  std::ifstream fin1("datensumme.txt");
  int zahl;
  double N = 0;
  double Summe;
  double Mittelwert;
  //fin >> zahl;
  for(int a = 0; a < 234; a++) {
    ++N;
    fin1 >> zahl;
    Summe += zahl;
    }
  Mittelwert = Summe / N;
  std::cout << "Mittelwert = " << Mittelwert << std::endl;
  fin1.close();

  std::ifstream fin2("datensumme.txt");

  double zahlV;
  double SummeV;
  double Varianz;
  double Sigma;

  for(int i = 0; i < 234; i++) {
    fin2 >> zahlV;
    SummeV += pow((zahlV-Mittelwert),2);
  }
  fin2.close();
  Varianz = SummeV / N;
  Sigma = sqrt(Varianz);
  std::cout << "Varianz = " << Varianz << std::endl;
  std::cout << "Standardabweichung = " << Sigma << std::endl;
}