class NumMatrix {
public:
vector<vector<int>> mat;
    NumMatrix(vector<vector<int>>& matrix) {

    int n = matrix.size();
    int m = matrix[0].size();
    for(int i=0; i<n ;i++){
        // int a = s;
        for(int j = 0; j <m;j++){
        int s = matrix[i][j];
            if(j!=0){
                s+=matrix[i][j-1];
            }
            if(i!=0){
                s+=matrix[i-1][j];
            }
            if(i!=0 && j!=0){
                s-=matrix[i-1][j-1];
            }
        matrix[i][j] = s;
        }
    }
    mat = matrix;

    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
        int n = mat.size();
        int m = mat[0].size();
        int ans = mat[r2][c2];
        if(c1!=0){
            ans-= mat[r2][c1-1];
        }
        if(r1!=0){
            ans-= mat[r1-1][c2];
        }
        if(r1!=0 and c1!=0){
            ans+= mat[r1-1][c1-1];
        }
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */