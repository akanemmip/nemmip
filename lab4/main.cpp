#include <iostream>
#include <random>
#include <chrono>

using namespace std;


void print(double arr[], const int size)
{

    for (int i=0; i<size; i++)
    {
        cout<<arr[i]<<endl;

    }

}


void fill(double arr[], const int size)
{
    default_random_engine engine;
    engine.seed(chrono::system_clock::now().time_since_epoch().count());
    normal_distribution<double> distro (170, 20);

    for (int i=0; i<size; i++)
    {
        arr[i] = distro(engine);

    }

}


int main()
{
    const int a=10;


double arr[a];
double arr1[a];
double min;

fill (arr, a);
/*if (arr[i+1]>arr[i-1])
{
    cout<<"min"<<arr[i-1];
}
*/
print (arr, a);

min = arr[0];
int i_min = 0;
for (int j=1; j<a; j++)
{
    if(min>arr[j])
    {


        min=arr[j];
        i_min = j;
    }
}
cout<<"min= "<<min<<endl;
std::swap(arr[i_min], arr[0]);


print (arr,a);


return 0;
}



