#include<iostream>;

using namespace std;

class NestedLoops{
    /*
    driver code: -

    NestedLoops nloops = NestedLoops();
    nloops.printMatrix();

    */

    public:
    void printMatrix(){
        int matrix[3][3] = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
            };
        for(int row = 0; row<3; row++){
            for(int column = 0; column<3; column++){
                cout << matrix[row][column] << " , ";
            }
            cout << endl;
        }
        }
};
