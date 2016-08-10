#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <sstream>

#ifndef MAIN_C
#define MAIN_C
bool db = false;
bool nr = true;

#include "valS.h"
#include "tbisys.h"
using namespace std;


int lex(string str, int len, vector<int> dez, int index);

int main(int argc, char* argv[])
{

  int index = 0;
  string str;
  int len;
  int tmpbin;
  vector<int> dez;

  if (argc > 0)
  {
    if (db)
      printf("Öffne \"%s\"%s",argv[1],"...\n");
    string filename;
    ifstream input;
    input.open(argv[1]);

    if (!input)
    {
      cerr << "Datei beim Oeffnen der Datei " << argv[1] << "\n";
      return 1;
    }

    string line;
    while (getline(input, line))
    {
      istringstream ss(line);
      string token;

      while(getline(ss, token, ' '))
      {
          //cout << token << endl;
          len = token.size();
          int kza = lex(token, len, dez, index);
          dez.push_back(kza);
          parse(kza, dez, index);
          index = index + 1;
      }
    }
  }
  else
  {
    while (str != "q")
    {
      str = "";
      len = 0;
      tmpbin = 0;

      print("-> ");
      getline(cin, str);
      len = str.size();
      int kza = lex(str, len, dez, index);
      dez.push_back(kza);
      parse(kza, dez, index);
      index = index + 1;
    }
  }

  return 0;
}
#endif
