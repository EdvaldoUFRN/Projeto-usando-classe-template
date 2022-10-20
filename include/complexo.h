
using namespace std;
#include <iostream>
#include <cmath>
#ifndef complexo_h
#define complexo_h
template <class T, class U>
class Complexo{
    public:
        T real;
        U imaginario;
        T total;
    public:
        Complexo(){
            real = 0;
            imaginario = 0;
        }
        float absolute(T rea, U imagi){
		float abs = sqrt((rea*rea)+(imagi*imagi));
		return abs;
	    }
        Complexo(T r, U i){
            real = r;
            imaginario = i;
            total = absolute(r, i);
        }
        Complexo operator+(Complexo &a){
            T r = real + a.real;
            U i = imaginario + a.imaginario;
            return Complexo(r, i);
        }
        Complexo operator*(Complexo &a){
            T r = (real*a.real - imaginario*a.imaginario);
            U i = (real*a.imaginario+imaginario*a.real);
            return Complexo(r,i);
        }
        Complexo operator-(Complexo &a){
            T r = real - a.real;
            U i = imaginario - a.imaginario;
            return Complexo(r,i);
        }

        friend ostream& operator<<(ostream &o, Complexo const &t){
            if (t.imaginario > 0 && t.total == 0)
            {
                o<< t.real<<'+'<<t.imaginario<<'i'<<endl;
            }else if(t.imaginario<0 && t.total ==0)
            {
                o<< t.real<< t.imaginario<<'i'<<endl;
            }else{
                o<<t.total;
            }
            return o;
        }
};

#endif
