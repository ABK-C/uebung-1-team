#include <iostream>
#include <fstream>
#include <cmath>


int main() {

  std::ifstream fin1("datensumme.txt");
  std::ofstream fout1("mittelwerte.txt");
  std::ifstream fin2("datensumme.txt");
  std::ofstream fout2("varianzen.txt");
  std::ifstream fin3("mittelwerte.txt");

  int zahl;
  double N = 0;
  double Summe;
  double Mittelwert;
  double zahlV;
  double SummeV;
  double Varianz;
  double Sigma;
  double MittelwertV;
  double SummeMittelwerte;
  double SummeVarianzen;
  double N2 = 26;
  double GesamtVarianz;
  double GesamtMittelwert;

  for(int b = 0; b < 26; b++) {
    Summe = 0;
    N = 0;
    for(int a = 0; a < 9; a++) {
      ++N;
      fin1 >> zahl;
      Summe += zahl;
      }
    Mittelwert = Summe / N;
    SummeMittelwerte += Mittelwert;
    fout1 << Mittelwert << std::endl;
  }
  GesamtMittelwert = SummeMittelwerte / N2;
  fin1.close();
  fout1.close();
  for(int c = 0; c < 26; c++) {
    SummeV = 0;
    fin3 >> MittelwertV;
    for(int i = 0; i < 9; i++) {
      fin2 >> zahlV;
      SummeV += pow((zahlV-MittelwertV),2);
    }
    Varianz = SummeV / N;
    Sigma = sqrt(Varianz);
    SummeVarianzen += Varianz;
    fout2 << Varianz << std::endl;
  }
  GesamtVarianz = SummeVarianzen / N2;
  std::cout << "Mittelwert der 26 Mittelwerte = " << GesamtMittelwert << std::endl;
  std::cout << "Mitterlwert der 26 Varianzen = " << GesamtVarianz << std::endl;
  std::cout << "Der Mittelwert ist gleichgeblieben, wohingegen sich die Varianz verändert hat" << std::endl;
  fin2.close();
  fin3.close();
  fout2.close();
}