/*#include<iostream>
using namespace std;

int main(){
    int arr[3][4];// creating a 2d array with 3 rows and 4 col
    //input elements row_wise
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    //output print karalo
       for(int i=0; i<3;i++)
    {
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int arr[3][4];// creating a 2d array with 3 rows and 4 col
    //input elements col_wise
    for(int i=0; i<4;i++)
    {
        for(int j=0;j<3;j++){
            cin>>arr[j][i];
        }
    }
    //output print karalo>>>>coln vise print kar rahe hai
       for(int i=0; i<3;i++)
    {
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



// how to do hard code
#include<iostream>
using namespace std;

int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};// creating a 2d array with 3 rows and 4 col

    //output print karalo>
       for(int i=0; i<3;i++)
    {
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


#include<iostream>
using namespace std;

int main(){
    int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};// creating a 2d array with 3 rows and 4 col

    //output print karalo>
       for(int i=0; i<3;i++)
    {
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



#include<iostream>
using namespace std;
bool ispresent(int arr[][4],int target, int row, int col)
{
    for(int row =0; row<3;row++){
        for(int col =0; col<4;col++){
    if(arr[row][col]==target){
        return 1;            
        }
    }
}
return 0;
}
int main(){
    int arr[3][4];
    //taking input>>>>>> row wise 
    for(int row=0; row<3; row++){
        for(int col =0; col<4; col++){
            cin>>arr[row][col];
        }
        
    }
        
    //taking input>>>>>> row wise 
    for(int row=0; row<3; row++){
        for(int col =0; col<4; col++){
            cout<<arr[row][col];
        }
        cout<<endl;
    }
cout<<"enter the element to search "<<endl;
int target ;
cin>>target;
if(ispresent(arr,target,3,4)){
    cout<<"present"<<endl;
    
}
else{
    cout<<"absent"<<endl;
}
return 0;
}



*/



/*#include<iostream>
using namespace std;
void isSum(int arr[][4],int row , int col){
    cout<<"printing col sum"<<endl;
    for(int j =0 ; j<col;j++){
    int sum =0;
    for(int i =0; i<row; i++){
     sum+=arr[i][j];   
    }
    cout<<sum<<" ";
}
cout<<endl;
}

int main(){
   int arr[4][4];
   //yaha hm input karwayenge
   cout<<"enter the 4*4 matrix element"<<endl;
   for(int i=0;i<4;i++){
       for(int j =0; j<4;j++){
           cin>>arr[i][j];
           
       }
   }
   // calling function
   isSum(arr,4,4);
   return 0;
}


#include<iostream>
using namespace std;
void isprintrowsum(int arr[][3],int row, int col){
    cout<<"printing row sum"<<endl;
    for(int i =0; i<row;i++){
        int sum =0;
        for(int j =0;j<col;j++){
            sum+= arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[3][3];
    cout<<"enter the 3*3 matrix for row sum"<<endl;
    for(int i=0;i<3;i++){
        for(int j =0; j<3;j++){
            cin>>arr[i][j];
        }
    }
    // calling function
    isprintrowsum(arr,3,3);
    return 0;
    
}


#include<iostream>
#include<climits>//forINT_MIN
using namespace std;
int largestRow(int arr[][3],int row, int col)
{
    int max = INT_MIN;
    int rowIndex=-1;
    for(int i=0; i<row;i++){
        int sum = 0;
        for(int j=0; j<col;j++){
            sum +=arr[i][j];
            
        }
        if(sum>max){
            max=sum;
            rowIndex=i;
            
        }
    }
    return rowIndex;
}
int main(){
    cout<<"enter the 3*3 matrix"<<endl;
int arr[3][3];
for(int i=0; i<3;i++){
    for(int j=0; j<3;j++){
        cin>>arr[i][j];
    }
}
int index = largestRow(arr,3,3);
cout<<"the row with the max"<<index<<endl;
      return 0;
  }





*/




































































































































































































