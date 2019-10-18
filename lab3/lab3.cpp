#include <iostream>
#include <cmath>
#include<iomanip>

int main()
/*{
	double x;
	for (x = 0; x < 2; x= x+0.1)
	{

		double w = sin(x);
		std::cout <<std::fixed<< std::setprecision(1) << x << ' '<< std::setprecision(6) << w << std::endl;

	}

	return 0;

}*/
{
   /* int x,y;
    for (x=1;x<=10; x++)
    {
        for(y=1;y<=10; y++)
        {
            int z=x*y;
            int tab1 [x][y][z];
            std::cout<< tab1 <<std::endl;



        }

    }
    return 0;*/
int K,N;
for (K=0; K<5; K++)
{
    for (N=0; N<5; N++)
    {
        if (N<2)
        std::cout<<'#';
        else
        {
          std::cout<<'.';
        }

    }
std::cout<<std::endl;
}

}



