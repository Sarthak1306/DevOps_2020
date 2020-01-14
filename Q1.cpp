#include <iostream>
#include <cmath>
#define Area 314
#define Pi 3.14

class Perimeter
{
float  sq_side = sqrt(Area);
float  rec_len = 2;
float  rec_bredth = (Area/rec_len);
float  tri_height = 4;
float  tri_base = (Area * 2)/tri_height;
float  tri_hyp = sqrt(pow(tri_base,2) + pow(tri_height,2));
float  radius = sqrt( (Area/Pi) );

float sq_peri = 4* sq_side;
float rec_peri = 2* (rec_len + rec_bredth) ;
float tri_peri = tri_hyp + tri_base + tri_height;
float circle_peri = 2*Pi*radius;

public:

  void Largest_Peri ()
  {
    std::cout<<" The Shape with the Largest Perimeter Is : "<<std::endl;
    if( sq_peri > rec_peri && sq_peri > tri_peri && sq_peri > circle_peri)
    std::cout<<"Square: "<<sq_peri<<std::endl;

    else if ( rec_peri > sq_peri && rec_peri > tri_peri && rec_peri > circle_peri)
    std::cout<< "Rectangle: "<< rec_peri<<std::endl;

    else if ( tri_peri > sq_peri && tri_peri > rec_peri && tri_peri > circle_peri )
    std::cout<<"Triangle:" <<tri_peri<<std::endl;

    else
    std::cout<<"Circle :" <<circle_peri<<std::endl;
  }

  void Smallest_Peri()
  {
    std::cout<<" The Shape with the Smallest Perimeter Is : "<<std::endl;
    if( sq_peri < rec_peri && sq_peri < tri_peri && sq_peri < circle_peri)
    std::cout<<"Sqaure :" <<sq_peri<<std::endl;

    else if ( rec_peri < sq_peri && rec_peri < tri_peri && rec_peri < circle_peri)
    std::cout<< "Rectangle :" << rec_peri<<std::endl;

    else if ( tri_peri < sq_peri && tri_peri < rec_peri && tri_peri < circle_peri )
    std::cout<<"Triangle :" <<tri_peri<<std::endl;

    else
    std::cout<<"Circle: "<<circle_peri<<std::endl;
  }



};

  int main()
  {
    Perimeter Shape;
    Shape.Largest_Peri();
    Shape.Smallest_Peri();


  return 0;
}
