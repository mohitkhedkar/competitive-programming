#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix {
    public:
        vector <vector<int> > a;
        Matrix() {}
        ~Matrix() = default;

        int get_number_rows() const{
            int rows = a.size();
            return rows;
        };

        int get_number_columns() const{
            int columns = 0;
            if (a.size() != 0){

            }
                columns = a.at(0).size();
            return columns;
        };
};

Matrix operator+(const Matrix &lhs, const Matrix &rhs){
    int rows = lhs.get_number_rows();
    int columns = lhs.get_number_columns();

    Matrix result {};
    for (int i = 0; i < rows; ++i){
        vector<int> temp {};
        for (int j = 0; j < columns; ++j){
            int value = lhs.a[i][j] + rhs.a[i][j];
            temp.push_back(value);
        }
        result.a.push_back(temp);
    }
    return result;
}

int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}
