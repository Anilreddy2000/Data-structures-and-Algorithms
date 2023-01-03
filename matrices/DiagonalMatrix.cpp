#include<bits/stdc++.h>
using namespace std;
// check wheather the given matrix is diagonal or not !!
bool isDiagonal(int arr[][3],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i!=j && arr[i][j]!=0) return false;
        }
    }
    return true;
}
int main(){
    int arr[3][3]={  1,0,0
                    ,0,1,0
                    ,0,0,1
                    };
                    
    if(isDiagonal(arr,3,3)){
        cout<<"given matrix is Diagonal Matrix "<<endl;
    }else{
        cout<<"Given matrix is not a Diagonal matrix "<<endl;
    }
    return 0;
}