#include <iostream>
using namespace std;
#include "complexo.h"
#include <stdlib.h>
#include <cstring>
#include <iomanip>


int main(int argc, char const *argv[]){

Complexo <float, float> c1(atof(argv[1]), atof(argv[2])), c2(atof(argv[3]), atof(argv[4]));
if(strcmp(argv[5], "+")==0)
{
Complexo <float, float> c3(c1+c2);
cout<<c3;
}
else if (strcmp(argv[5], "-")==0)
{
Complexo <float, float> c3(c1-c2);
cout<<c3;
}
else if (strcmp(argv[5], "*")==0)
{
Complexo <float, float> c3(c1*c2);
cout<<c3;
}else if (strcmp(argv[5], "|")==0)
{

cout<<fixed<<setprecision(2);
cout<<c1<<";"<<c2<<endl;
}



return 0;
}
