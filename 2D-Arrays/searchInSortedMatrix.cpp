#include <iostream>
#include <utility>
using namespace std;

//Brute Force Approach, TC = O(n*m)
// pair<int,int> searchInSortedMatrix(int mat[][4], int n, int key) {
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < 4; j++) {
//             if(mat[i][j] == key) {
//                 return {i, j};
//             }
//         }
//     }
//     return {-1, -1};
// }

//BInary Search Approach, TC = O(n* log m)
// pair<int,int> searchInSortedMatrix(int mat[][4], int n, int key) {
//     int st, end;
//     for(int i = 0; i < n; i++) {
//         st=0, end=n-1;
//         while (st<=end)
//         {
//             int mid = st + (end - st) / 2;
//             if (mat[i][mid] == key)
//             {
//                 return {i, mid};
//             }else if (mat[i][mid] < key)
//             {
//                 st = mid+1;
//             }else{
//                 end = mid-1;
//             }
//         }
//     }
//     return {-1, -1};
// }


//Stair Case Search Approach, TC = O(n + m)
pair<int,int> searchInSortedMatrix(int mat[][4], int n,int m, int key) {
    int i=0, j=m-1;
    while (i<n && j>=0)
    {
        if(mat[i][j] == key){
            return {i, j};
        }else if (mat[i][j] > key){
            j--; //Move left
        }else{
            i++; //Move down
        }
    }
    
    return {-1, -1};
}

int main() {
    int matrix[4][4] = {{10, 20, 30, 40},
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 50}};

    pair<int,int> ans = searchInSortedMatrix(matrix, 4, 4, 33);

    cout << "Row = " << ans.first << ", Col = " << ans.second << endl;

    return 0;
}