#include <iostream>
#include <vector>

#ifndef SYS_H
#define SYS_H
#include "main.cpp"
#include "valS.h"
using namespace std;

bool replace(string& str, const string& from, const string& to) { size_t start_pos = str.find(from); if(start_pos == string::npos) return false; str.replace(start_pos, from.length(), to); return true; }
void print( string s,  string s9 = "",  string s8 = "",  string s7 = "",  string s6 = "",  string s5 = "",  string s4 = "",  string s3 = "",  string s2 = "",  string s1 = "")
{
  s = s+s1+s2+s3+s4+s5+s6+s7+s8+s9;
   cout << s;
}

void parse(int i, vector<int> dez, int index)
{
  if (i == 1)
  {
    for (int x = 0; x < dez.size(); x++)
    {
      printf("%d ", dez[x]);
    }
    printf("\n");
  }

  if (i == DEBG)
  {
    db = true;
    print("DEBUG MODE IS NOW ACTIV!\n");
  }

  if (i == NREG)
  {
    nr = false;
    print("REG OUTPUT IS DISABLED!\n");
  }

  if (i == MV)
  {
    if (db)
      printf("[ MV  ] %d = %d\n", dez[index-1], dez[index-1]);
    if (dez[index-2] == RAC)
    {
      RA = dez[index-1];
    }

    if (dez[index-2] == SBC)
    {
      SB = dez[index-1];
    }

    if (dez[index-2] == DFC)
    {
      DF = dez[index-1];
    }

    if (dez[index-2] == HKC)
    {
      HK = dez[index-1];
    }

    if (dez[index-2] == KLC)
    {
      KL = dez[index-1];
    }
  }

  if (i == RAC)
  {
    if (nr)
      printf("[ #RA ] %d\n", RA);
  }
  if (i == SBC)
  {
    if (nr)
      printf("[ #SB ] %d\n", SB);
  }
  if (i == DFC)
  {
    if (nr)
      printf("[ #DF ] %d\n", DF);
  }
  if (i == HKC)
  {
    if (nr)
      printf("[ #HK ] %d\n", HK);
  }
  if (i == KLC)
  {
    if (nr)
      printf("[ #KL ] %d\n", KL);
  }


  if (i == SY)
  {
    if (db)
      print("[ SYS ]\n");

    if (dez[index-2] == OUT)
    {
      if (db)
        print("OUT\n");
      if (db)
        printf("E%d\n",dez[index-1]);

      if (dez[index-1] == RAC)
      {
        printf("%c",RA);
      }
      else if (dez[index-1] == SBC)
      {
        printf("%c",SB);
      }
      else if (dez[index-1] == DFC)
      {
        printf("%c",DF);
      }
      else if (dez[index-1] == HKC)
      {
        printf("%c",HK);
      }
      else if (dez[index-1] == KLC)
      {
        printf("%c",KL);
      }
      else
      {
        if (dez[index-1] == 0)
          printf(" ");
        else
          printf("%c",dez[index-1]);
      }
    }
  }
}

bool kmt = false;
int lex(string str, int len, vector<int> dez, int index)
{
    if (true)
    {
      int x = 0;
      int z;
      int kza = 0;

      for (int i = 7; i >= 0; i--)
      {
        if (str.size() <= 2)
          i = 0;

        char s1 = str.at(i);
        string s;
        s = s1;

        if (s == "@")
        {
          print("\n");
          replace(s, NL, "");
          return 0;
        }
        else if (true && kmt != true)
        {
          z = stoi(s);
          if (x == 0) {x = 1;}
          else if (x == 1) {x = 2;}
          else if (x == 2) {x = 4;}
          else if (x == 4) {x = 8;}
          else if (x == 8) {x = 16;}
          else if (x == 16) {x = 32;}
          else if (x == 32) {x = 64;}
          else if (x == 64) {x = 128;}
          else if (x == 128) {x = 0;}

          z = z*x;
          //printf("%d = %dx%d = %d\n", i, stoi(s), x, z);
          kza += z;
          z = 0;
        }
      }

      if (db)
        printf("[ E%d ]\n", kza);
      return kza;
    }

}

#endif
