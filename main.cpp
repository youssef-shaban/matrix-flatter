#include <vector>
#include <iostream>
#include "Vector1D.h"
using namespace std;

template<class T>
void matToVec(T* matrix3d){
    int n=*(&matrix3d+1)-matrix3d;
    int m= *(&(*matrix3d)+1)-(*matrix3d);

    cout<<n<<m;
}




int main(){
    /*
     *
     * a note about how index of the matrix actually works, and what's the difference between math and coding:
     * in math, if I want to make a 3x4x5 matrix ,so it will be with 3 rows, 4 columns and 5 pages,
     * but here in c++ 3x4x5 3d array will be with 5 rows, 4 columns and 3 pages, so from here i will reflect the index
     * to make it work will and logically correct.
     *
     * so, the implementation of the matrix will be matrix[p][m][n], but it will be difficult to implement so, I will
     * assume they are same.
     *
     * */
    vector<vector<vector<int>>> matrix={
            {
                    {1,1,1},{2,2,2},{3,3,3},{4,4,4}
            },{
                    {5,5,5},{6,6,6},{7,7,7},{8,8,8}
            },{
                    {9,9,9},{10,10,10},{11,11,11},{12,12,12}
            }
    };
    Vector1D<int>* myVec= new Vector1D<int>(matrix);
    cout<<myVec->getElement(1,3,2)<<endl<<matrix[1][3][2];

}