#include <iostream>
#include <fstream>

int main() {
  
  //Ausgabe-Datei = datensumme.txt)
  //Eingabe-Datei = daten.txt
  
  std::ofstream fout("datensumme.txt");
  std::ifstream fin("daten.txt");
  int zahl;
  int AnzahlIteration = 0;
  //fin >> zahl;
  for(int a = 0; a < 234; a++) {
    int Summe = 0;
    for(int i = 0; i < 2; i++) {
      fin >> zahl;
      Summe += zahl;
      std::cout << zahl << " ";
      AnzahlIteration += 1;
    } 
    fout << "Summe = "<< Summe << std::endl;
    std::cout << "Summe = " << Summe << std::endl;
  }
  std::cout << "Anzahl Iterationsschritte = " << AnzahlIteration << std::endl;
  fin.close();
  fout.close();
}