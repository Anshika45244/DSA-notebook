/*//pointer
#include<iostream>
using namespace std;
int main() {
	int num = 5;
	cout<<num<<endl;
	// address of operator-&
	cout<<"address of num is "<<&num <<endl;
	int *ptr = &num;
	cout<<"value is: "<<*ptr<<endl;
	
	//ager * nhi lagayenge to address hi print ho jayega
		cout<<"value is: "<<ptr<<endl;
	double d = 4.3;
	double *p2 = &d;
	cout<<"address is: "<<p2<<endl;
	cout<<"value is : "<<*p2<<endl;
	cout<<"size of int  is "<<sizeof(num)<<endl;
		cout<<"size of ptr is "<<sizeof(ptr)<<endl;
	
		cout<<"size of pointer  is "<<sizeof(p2)<<endl;

	return 0;
}*/

#include<iostream>
using namespace std;
int main(){
/*    //pointer to int created,  and pointing to some garbage address 
    int *p=0;
    cout<<*p<<endl;
    int i = 5;
    int *q = &i;
    cout<< q<<endl;
    cout<<*q<<endl;
    int *p =0;
    p =&i;
    cout<< p <<endl;
    cout<< *p <<endl;
    */
    int num = 5;
    int a = num;
 /*   a++;
    cout<<num <<endl;
    int *p = &num;*/
    cout<< " before "<<num <<endl;
 a++;
    cout<<" after "<<num <<endl;
    
    int  *p = &num;
    cout<<"before "<<num<<endl;
    (*p)++;
    cout<<"after "<<num<<endl;
    //copy a pointer
    int *q = p;
    cout<<p <<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;
    //important concept 
    int i = 3;
    int *t =&i; 
    cout<< (*t)++<<endl;
    cout<<"befor t"<<t<<endl;
    t++;
    cout<<"after t"<<t<<endl;
    
    *t =*t+1;
    cout<<*t<<endl;
    
    
    
    return 0;
    
}























