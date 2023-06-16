#include<iostream>
using namespace std;
int main()
{
    /*
    sample input:
                SNNNEWE
    sample output:
                NNE
    ques: given a set of unit movements, calculate the displacement
    */
   char input_route[1000];
   cout<<"enter route directions: "<<endl;
   cin.getline(input_route, 1000);
   int x=0, y=0;

   for(int i=0; input_route[i] !='\0'; i++)
   {
    if(input_route[i] == 'N')
        {y++;}
    else if(input_route[i] == 'S')
        {y--;}
    else if(input_route[i] == 'E')
        {x++;}
    else if(input_route[i] == 'W')
        {x--;}
   }
   cout<<"point in space is: "<<x<<", "<<y<<endl;
}