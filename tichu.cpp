#include <algorithm> 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>

struct Karte
{
  int Wert;
  std::string Farbe;
};

void Stapel(Karte Stapel[52])
{
}
int main()
{ 

  Karte ZweiRot;
  ZweiRot.Wert = 2;
  ZweiRot.Farbe = "Rot";

  Karte ZweiBlau;
  ZweiBlau.Wert = 2;
  ZweiBlau.Farbe = "Blau";

  Karte ZweiGruen;
  ZweiGruen.Wert = 2;
  ZweiGruen.Farbe = "Gruen";

  Karte ZweiSchwarz;
  ZweiSchwarz.Wert = 2;
  ZweiSchwarz.Farbe = "Schwarz";

  Karte DreiRot;
  DreiRot.Wert = 3;
  DreiRot.Farbe = "Rot";

  Karte DreiBlau;
  DreiBlau.Wert = 3;
  DreiBlau.Farbe = "Blau";

  Karte DreiGruen;
  DreiGruen.Wert = 3;
  DreiGruen.Farbe = "Gruen";

  Karte DreiSchwarz;
  DreiSchwarz.Wert = 3;
  DreiSchwarz.Farbe = "Schwarz";

  Karte VierRot;
  VierRot.Wert = 4;
  VierRot.Farbe = "Rot";

  Karte VierBlau;
  VierBlau.Wert = 4;
  VierBlau.Farbe = "Blau";

  Karte VierGruen;
  VierGruen.Wert = 4;
  VierGruen.Farbe = "Gruen";

  Karte VierSchwarz;
  VierSchwarz.Wert = 4;
  VierSchwarz.Farbe = "Schwarz";

  Karte FuenfRot;
  FuenfRot.Wert = 5;
  FuenfRot.Farbe = "Rot";

  Karte FuenfBlau;
  FuenfBlau.Wert = 5;
  FuenfBlau.Farbe = "Blau";

  Karte FuenfGruen;
  FuenfGruen.Wert = 5;
  FuenfGruen.Farbe = "Gruen";

  Karte FuenfSchwarz;
  FuenfSchwarz.Wert = 5;
  FuenfSchwarz.Farbe = "Schwarz";

  Karte SechsRot;
  SechsRot.Wert = 6;
  SechsRot.Farbe = "Rot";

  Karte SechsBlau;
  SechsBlau.Wert = 6;
  SechsBlau.Farbe = "Blau";

  Karte SechsGruen;
  SechsGruen.Wert = 6;
  SechsGruen.Farbe = "Gruen";

  Karte SechsSchwarz;
  SechsSchwarz.Wert = 6;
  SechsSchwarz.Farbe = "Schwarz";

  Karte SiebenRot;
  SiebenRot.Wert = 7;
  SiebenRot.Farbe = "Rot";

  Karte SiebenBlau;
  SiebenBlau.Wert = 7;
  SiebenBlau.Farbe = "Blau";

  Karte SiebenGruen;
  SiebenGruen.Wert = 7;
  SiebenGruen.Farbe = "Gruen";

  Karte SiebenSchwarz;
  SiebenSchwarz.Wert = 7;
  SiebenSchwarz.Farbe = "Schwarz";

  Karte AchtRot;
  AchtRot.Wert = 8;
  AchtRot.Farbe = "Rot";

  Karte AchtBlau;
  AchtBlau.Wert = 8;
  AchtBlau.Farbe = "Blau";

  Karte AchtGruen;
  AchtGruen.Wert = 8;
  AchtGruen.Farbe = "Gruen";

  Karte AchtSchwarz;
  AchtSchwarz.Wert = 8;
  AchtSchwarz.Farbe = "Schwarz";

  Karte NeunRot;
  NeunRot.Wert = 9;
  NeunRot.Farbe = "Rot";

  Karte NeunBlau;
  NeunBlau.Wert = 9;
  NeunBlau.Farbe = "Blau";

  Karte NeunGruen;
  NeunGruen.Wert = 9;
  NeunGruen.Farbe = "Gruen";

  Karte NeunSchwarz;
  NeunSchwarz.Wert = 9;
  NeunSchwarz.Farbe = "Schwarz";

  Karte ZehnRot;
  ZehnRot.Wert = 10;
  ZehnRot.Farbe = "Rot";

  Karte ZehnBlau;
  ZehnBlau.Wert = 10;
  ZehnBlau.Farbe = "Blau";

  Karte ZehnGruen;
  ZehnGruen.Wert = 10;
  ZehnGruen.Farbe = "Gruen";

  Karte ZehnSchwarz;
  ZehnSchwarz.Wert = 10;
  ZehnSchwarz.Farbe = "Schwarz";

  Karte JungeRot;
  JungeRot.Wert = 11;
  JungeRot.Farbe = "Rot";

  Karte JungeBlau;
  JungeBlau.Wert = 11;
  JungeBlau.Farbe = "Blau";

  Karte JungeGruen;
  JungeGruen.Wert = 11;
  JungeGruen.Farbe = "Gruen";

  Karte JungeSchwarz;
  JungeSchwarz.Wert = 11;
  JungeSchwarz.Farbe = "Schwarz";

  Karte DameRot;
  DameRot.Wert = 12;
  DameRot.Farbe = "Rot";

  Karte DameBlau;
  DameBlau.Wert = 12;
  DameBlau.Farbe = "Blau";

  Karte DameGruen;
  DameGruen.Wert = 12;
  DameGruen.Farbe = "Gruen";

  Karte DameSchwarz;
  DameSchwarz.Wert = 12;
  DameSchwarz.Farbe = "Schwarz";

  Karte KoenigRot;
  KoenigRot.Wert = 13;
  KoenigRot.Farbe = "Rot";

  Karte KoenigBlau;
  KoenigBlau.Wert = 13;
  KoenigBlau.Farbe = "Blau";

  Karte KoenigGruen;
  KoenigGruen.Wert = 13;
  KoenigGruen.Farbe = "Gruen";

  Karte KoenigSchwarz;
  KoenigSchwarz.Wert = 13;
  KoenigSchwarz.Farbe = "Schwarz";

  Karte AssRot;
  AssRot.Wert = 14;
  AssRot.Farbe = "Rot";

  Karte AssBlau;
  AssBlau.Wert = 14;
  AssBlau.Farbe = "Blau";

  Karte AssGruen;
  AssGruen.Wert = 14;
  AssGruen.Farbe = "Gruen";

  Karte AssSchwarz;
  AssSchwarz.Wert = 14;
  AssSchwarz.Farbe = "Schwarz";

  Karte Stapel[52];
  Stapel[0] = ZweiRot;
  Stapel[1] = ZweiBlau;
  Stapel[2] = ZweiGruen;
  Stapel[3] = ZweiSchwarz;
  Stapel[4] = DreiRot;
  Stapel[5] = DreiBlau;
  Stapel[6] = DreiGruen;
  Stapel[7] = DreiSchwarz;
  Stapel[8] = VierRot;
  Stapel[9] = VierBlau;
  Stapel[10] = VierGruen;
  Stapel[11] = VierSchwarz;
  Stapel[12] = FuenfRot;
  Stapel[13] = FuenfBlau;
  Stapel[14] = FuenfGruen;
  Stapel[15] = FuenfSchwarz;
  Stapel[16] = SechsRot;
  Stapel[17] = SechsBlau;
  Stapel[18] = SechsGruen;
  Stapel[19] = SechsSchwarz;
  Stapel[20] = SiebenRot;
  Stapel[21] = SiebenBlau;
  Stapel[22] = SiebenGruen;
  Stapel[23] = SiebenSchwarz;
  Stapel[24] = AchtRot;
  Stapel[25] = AchtBlau;
  Stapel[26] = AchtGruen;
  Stapel[27] = AchtSchwarz;
  Stapel[28] = NeunRot;
  Stapel[29] = NeunBlau;
  Stapel[30] = NeunGruen;
  Stapel[31] = NeunSchwarz;
  Stapel[32] = ZehnRot;
  Stapel[33] = ZehnBlau;
  Stapel[34] = ZehnGruen;
  Stapel[35] = ZehnSchwarz;
  Stapel[36] = JungeRot;
  Stapel[37] = JungeBlau;
  Stapel[38] = JungeGruen;
  Stapel[39] = JungeSchwarz;
  Stapel[40] = DameRot;
  Stapel[41] = DameBlau;
  Stapel[42] = DameGruen;
  Stapel[43] = DameSchwarz;
  Stapel[44] = KoenigRot;
  Stapel[45] = KoenigBlau;
  Stapel[46] = KoenigGruen;
  Stapel[47] = KoenigSchwarz;
  Stapel[48] = AssRot;
  Stapel[49] = AssBlau;
  Stapel[50] = AssGruen;
  Stapel[51] = AssSchwarz;

  for (int i = 1; i < 1000; ++i) 
  {
    int Zufall1;
    int Zufall2;

    time_t t;

    time(&t);
    srand(t+i);
    Zufall1 = rand() % 52;
    Zufall2 = rand() % 52;
    std::swap(Stapel[Zufall1], Stapel[Zufall2]);
  }
  std::cout << Stapel[1].Farbe << std::endl;
  std::cout << Stapel[1].Wert << std::endl;
}
