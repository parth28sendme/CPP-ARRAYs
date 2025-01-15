#include <iostream>
#include <vector>
using namespace std;

int main(){


  ////////////////////////////////////////////ARRAYS///////////////////////////////////////

  //creating an Array

  int array[10]= {1,2,3,4,5,6,7,8,9,10};

  cout << array[0] << endl;
  cout << array[1] << endl;



//creating a vector

vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
cout<< "printing vector's first value"<<endl;
cout << cars[0] <<endl;




//Printing array using a loop

cout << "PRINTING ARRAYS USING LOOPS" << endl;

for(int i = 0 ; i < 10 ; i++ ){

cout << array[i] << endl;


};


int number_grid[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};



cout << "Printing 2D Arrays" << endl;

cout << number_grid[0][2] << endl;


////////////////////////////////////Printing 2d arrays using nested loops//////////////////////////////////

cout << number_grid[0][3] << endl;

for(int i=0 ; i <3 ; i++){
for(int j = 0; j < 4; j++){
cout << number_grid[i][j]; 
}
  

}



    return 0 ;
}