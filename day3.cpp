/*#include<iostream>
using namespace std;
 int main(){
     char name[20];
     cout<<"Enter your name :";
     cin>>name;
     cout<<"Your name is ";
     cout<<name<<endl;
     return 0;
 }
 #include<iostream>
using namespace std;
int getlength(char name[]){
    int count =0;
    for(int i= 0; name[i] != '\0'; i++){
    count++;
}
return count;
}
 int main(){
     char name[20];
     cout<<"Enter your name :";
     cin>>name;
     cout<<"Your name is ";
     cout<<name<<endl;
     cout<<"length :"<<getlength(name)<<endl;
     return 0;
 }
 #include<iostream>
using namespace std;
void reverse(char name[], int n){
    int s=0;
    int e = n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}
int  getlength(char name[]){
    int count =0;
    for(int i = 0;  name[i]!= '\0';i++){
        count++;
    }
    return count ;
}
 int main(){
     char name[20];
     cout<<"Enter your name :";
     cin>>name;
     cout<<"Your name is ";
     cout<<name<<endl;
     int len= getlength(name);
     cout<<"length:"<<len<<endl;
     reverse(name, len);
     cout<<"your name is ";
        cout<<name<<endl;
     return 0;
 }
  #include<iostream>
using namespace std;
bool checkPalindrone(char a[], int n){
    int s =0 ;
    int e =n-1;
    while(s<=e){
        if(a[s]!= a[e])
        {
            return 0;
            
        }
        else{
            s++;
            e--;
            
        }
    }
    
}
void reverse(char name[], int n){
    int s=0;
    int e = n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}
int  getlength(char name[]){
    int count =0;
    for(int i = 0;  name[i]!= '\0';i++){
        count++;
    }
    return count ;
}
 int main(){
     char name[20];
     cout<<"Enter your name :";
     cin>>name;
     cout<<"Your name is ";
     cout<<name<<endl;
     int len= getlength(name);
     cout<<"length:"<<len<<endl;
     reverse(name, len);
     cout<<"your name is ";
        cout<<name<<endl;
        cout<<"palindrome or not :"<<checkPalindrone(name,len)<<endl;
        
     return 0;
 
}*

 #include <iostream>
using namespace std;

bool checkPalindrone(char a[], int n) {
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        if (a[s] != a[e]) {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}

int main() {
    char name[20];
    cin >> name;

    int len = 0;
    while (name[len] != '\0') len++;

    if (checkPalindrone(name, len))
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";

    return 0;
}
#include <iostream>
using namespace std;

bool checkPalindrone(char a[], int n) {
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        if (a[s] != a[e]) {
            return false;
        }
        s++;
        e--;
    }

    return true; 
}

int main() {
    char name[20];
    cout << "Enter a string: ";
    cin >> name;

    int len = 0;
    while (name[len] != '\0') {
        len++;
    }

    if (checkPalindrone(name, len)) {
        cout << "Palindrome hai yeh 😎" << endl;
    } else {
        cout << "Nahi hai bhai, sorry 😅" << endl;
    }

    return 0;
}


 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
