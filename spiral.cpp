#include <bits/stdc++.h>

using namespace std;

void input_array(int*m,int*n, int arr[][50]){
   
cout<<"Input the elements of the matrix"<<endl;

     for(int i = 0;i<*m;i++){
         for (int j=0 ;j<*n;++j){
             cin>>arr[i][j] ;
     }
     }
}

void print_array(int*m,int*n,int arr[][50]){
    //printing array
    for (int i=0;i<*m;i++){
        for(int j = 0; j <*n;j++){
            cout<<arr[i][j]<<"\t";

        }
        cout<<endl;
    }


}

void spiral_print_array(int*m,int*n,int arr[][50]){
    int left,right,top,bottom;
    left = 0; right = *n -1; top = 0; bottom = *m - 1;

    int i = top; int j = left;
    while(1){
        while(j<=right){
            cout << arr[i][j] <<" ";
            j++;
        }


        j = right;
        top++;
        i = top;
        if(left>right || top>bottom) break;

        while(i<=bottom){
            cout<<arr[i][j]<<" ";
            i++;
        }

        i = bottom;
        right--;
        j = right;
         if(left>right ||  top>bottom) break;

        while(j>=left){
            cout<<arr[i][j]<<" ";
            j--;
        }
        j = left;
        bottom --;
        i = bottom;
         if(left>right || top>bottom) break;

        while(i>=top){
            cout<<arr[i][j]<<" ";
            i--;
        }

        i = top;
        left ++;
        j = left;
         if(left>right || top>bottom) break;

    }

}


int main(){
    
    int arr[50][50];
    int m;int n;
     cout<<"Input the number of rows in the matrix"<<endl;
     cin >> m;
     cout<<"Input the number of columns in the matrix"<<endl;
     cin >> n;

    input_array(&m,&n,arr);cout<<endl;
    print_array(&m,&n,arr);

    spiral_print_array(&m,&n,arr);

    return 0;
    
}