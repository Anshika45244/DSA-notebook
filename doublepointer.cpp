/*#include<iostream>
using namespace std;
void update(int **p2){
    p2 = p2+1;
    *p2 = *p2+1;
    **p2= **p2 +1;
}

int main(){
    int i = 7;
    int* p = &i;
    int** p2= &p;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
    
    
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
    
    cout<<&p<<endl;
    cout<<p2<<endl;
    cout<<endl;
    cout<<"before"<<endl;
    cout<<"before"<<endl;
    cout<<"before"<<endl;
    update(p2);
    cout<<"after"<<i<<endl;
    cout<<"after"<<p<<endl;
    cout<<"after"<<p2<<endl;
    

    return 0;
}*/


#include<iostream>
using namespace std;
int main(){
   /* int first  = 8;
    int sec = 18;
    int *ptr = &sec;
    *ptr = 9;
    cout<<first<<" "<<sec<<endl;
    */
    
/*    int first = 16;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout<<first<<endl;*/
  /*  
    int arr[5];
    int *p;
    cout<<sizeof(arr)<<" "<<sizeof(p)<<endl;*/
    
/*    int arr[]= {11,21,13,14};
    cout<<*(arr)<<" "<<*(arr+1)<<endl;
    */
/*    int arr[6]={11,12,31};
    cout<<arr<<" "<<&arr<<endl;*/
  /*   int arr[6]={11,12,31};
    cout<<(arr+1)<<endl;
    */
   /* char arr[]="abcde";
    char *p =&arr[0];
    cout<<p<<endl;//array print ho jayega/*/
    char arr[] ="abcde";
    char *p = &arr[0];
    p++;
    cout<<p<<endl;
    
    return 0;
}
