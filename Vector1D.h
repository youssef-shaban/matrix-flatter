//
// Created by youss on 5/6/2022.
//

#ifndef UNTITLED4_VECTOR1D_H
#define UNTITLED4_VECTOR1D_H
#include <vector>
using namespace std;
template<class T>
class Vector1D {
public:
    vector<T> myVec;
    int n=0;
    int m=0;
    int p=0;
    Vector1D(vector<vector<vector<T>>> matrix3d){
        n= matrix3d.size();
        m= matrix3d[0].size();
        p= matrix3d[0][0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int k=0;k<p;k++){
                    myVec.push_back(matrix3d[i][j][k]);

                }
            }
        }
    }
    T getElement(int x, int y, int z){
        int index= x*p*m + y*p + z;
        return myVec.at(index);
    }
};


#endif //UNTITLED4_VECTOR1D_H
