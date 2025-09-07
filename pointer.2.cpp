/*#include<iostream>
using namespace std;
int main() {
/*	int arr[10]= {1,2,3,8,7};
	cout<<"address of first memory : "<<arr<<endl;
	cout<< arr[0]<<endl;
	cout<<"address of first memory :"<<arr[0]<<endl;
	cout<<"address of 4th memory :"<<arr[4]<<endl;
	cout<<"5th : "<<*arr<<endl;
	cout<<"6th : "<<(*arr +1 )+7<<endl;
	cout<<"7th : "<<(*arr)+5 <<endl;
	cout<<"8th : "<<*(arr)+5<<endl;
	cout<<"9th : "<< arr[2]<<endl;
	int i  = 3;
	//i[arr]=*(i+arr) is same as arr[i]= *(arr + i)
	cout<< i[arr]<<endl;
// difference pointer and array
int temp[10]= {1,2,3};
cout<<sizeof(temp)<<endl;
cout<<sizeof(*temp)<<endl;
cout<<sizeof(&temp)<<endl;
int *ptr = &temp[0];
cout<<sizeof(ptr)<<endl;//address
cout<<sizeof(*ptr)<<endl;//value at ptr
cout<<sizeof(&ptr)<<endl;//address*/
/*int a[20]={1,2,3,45};
cout<<a<<endl;
cout<< "-> "<<a[0]<<endl;

cout<<a[0]<<endl;
cout<<&a[0]<<endl;*/

/*int *p= &a[0];
cout<<p <<endl;
cout<<*p <<endl;
cout<< "-> "<<&p<<endl;*/

//symble table ka content cannot be changed
//int arr [10];
// it will give error
/*arr = arr + 1;


int *ptr = &arr [0];
cout<<ptr<<endl;
ptr = ptr +1;
cout<<ptr << endl;
	return 0;

}*/




///char ke liye

// int array(print address) or char array (puri string print ho jayegi)ke liye differently implemented hai
/*#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";
    cout<< arr <<endl;
    cout<< ch << endl;
    char *c = &ch[0];//entire string
    cout<<c <<endl;
    char temp = 'z';
    
    return 0;
}*/



/*
//function

#include<iostream>
using namespace std;
void print (int *p){
    cout<<*p<<endl;
    
}
 void update(int *p){
 p=p+1;
 cout<<"inside"<<p<<endl;
 
} 
int getSum(int arr[],int n){//int arr[] ye jo array paas kiye hai ye array pass nhi hua ye pointer pass hua hai
    cout <<endl <<"size : "<<sizeof(arr)<<endl;
    int sum = 0;
    for(int i= 0; i<n;i++){
        
        sum += arr[i];
        
    }
    return sum;
}
int main(){
    int value = 5;
    int *p = &value;
 print(p);
    cout<<"before"<<p<<endl;
    update(p);
    cout<<"after "<<p<<endl;
    int arr[5]= {1,2,3,4,5};
    cout<< "sum is "<<getSum(arr,5)<<endl;
    return 0;
    
}


*/






















































