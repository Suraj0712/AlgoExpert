// Lecture no: 01
// Programmer (Writes the program) -> Program (instructions for computer) -> computer
// instruction is written in the language and c++ is one of them
// -> c++ created by bjarne stroustrup (1979)
// -> c++ inspired by the simula67(object oriented programming) and C
// -> c with classes renamed to c++ in 1983

// Lecture no: 02
// -> general purpose programming (can be used to create variety of applications)
// -> middle level language (its human readable and also has features of assembly lang.)
// -> compiled language (the whole code is converted into binary before running)
// in c++ you can do
// 1. procedural programming (like c ... sequencial program)
// 2. object oriented programming (class and objects are used for running the prog)
// 3. generic programming (template and user defined types)
// 4. functional programming (mathematical fucntions)
// -> c++ is efficient, reliable, fast language and its really good language to learn oop
// -> c++ used for game developement, writting other programming language, browsers, compilers, operating systems, engineering applications

// Lecture no: 03
// -> c++ source code - written in c++ source file is save as .cpp file .C, .cxx, .cp, .cc
// -> .hpp file is header file and used for declaration and .cpp for implementation
// -> c++ standard library (built in feature provided to do repetative task std::cin)
// -> you can also create your own library and share it with other programmer so they dont have to write same code again and its called as external library.
// **THE BUILD PROCESS
// 1.  Pre Processor
// -> its macro # processing program
// -> it removes the comments, newlines, and clean up the code
// -> based on the macro it add the required part in to the programs
// -> like adding library, definig the variables, and conditional compiling
// -> includes the contents of the header file
// -> if saved the file will have .ii extension and not in machine level language
// 2. Compilation
// -> lots of compilers are available for the c++ and i prefer GCC (GNU compiler collection)
// ---> GNU will convert the pre processed code into assembly code
// ---> while converting it will check whether your program follow all the grammer of c++
// ---> if it is then it will create file with .s extension else give you the compilation error
// ---> Assembly code then converted into Object code with .obj or .o extension
// ---> every sorce file will have its corresponding object code
// 3. Linker
// -> so .o file is not a executable file
// -> linked will take all object files and linke them together it will also add the parts from the header files we added already and will create a executable file
// 4. Loader
// -> This program will load the executable files into th emain memory and keep it ready for cpu to execute
// -> loader will also load other libraries required to run the program
// 5. Execution
// -> then the program is executed in the cpu and you will get the output
// -> The error created by the program during this time is called as runtime error

// Lecture no: 04/05
// IDE installation

// Lecture no: 06
/*
#include <iostream> //#include is pre processor which adds the iostream lib file, we need this to add cin, cout

using namespace std; // all the librsry features available in c++ are placed under standard namespace so here you are saying to your computer that you are using pogram element declared in the standard namesapce

// main fucntion its here your c++ prog start executing
//functions are declared as <return type> <fucntion name> <(arguments)> {return statement}
int main()
{
    cout<<"revising time";
    return 0;
}

// Lecture no: 07
// constant = entity whoes value doesnt change
// variable = name given to memory address is called as a variable
// datatype = the amount of space we need to allocate to the variable
// int, float, double, bool, void, char, there are also type modifier which used along datatype like short, long, signed, unsigned
// keyword = words who have already defined meaning inside programs language if, for, int. you can not use them as a variable name

// Mycodeschool: Momories involved in the code execution
// code text memory
// global variable space
// stack frame
// heap

// Lecture no: 08
// once we define some variable the compiler will assign some memory to that particular variable, 
and if you dont declare them then they will take the garbage value stored at that location
// before using variable you should define the variable
//initialization is the process of assigning the value to the variable
//declaration is when you declare the properties of variable you want to store
//defining is when you assigne the memory to the variable
// in c++ declaration and defination happen for variable at same time]
// for function its happens differently
#include <iostream>

int main()
{
    int no_of_player;
    int a,b,c,d=90,f,g,h=20,hj; //defining multiple variable at once
    short int s; // 2 bytes allocated
    long int asdas; // 8 bytes allocated
    float average_age;
    char sex;
    bool is_he_injured;
    no_of_player = 9; average_age = 21.24; sex = 'M'; is_he_injured = false;
    std::cout<<"no of player playing are: "<<no_of_player
    <<" there average age is: "<<average_age<<" all are: "<<sex<<" and none of them are injured: "<<is_he_injured;
    return 0;
}

// Lecture no: 09, 10, 11
// cout is object of ostream class and stands for console output
// << this is stream insertion operation
// cin is the object of the istream class
// >> this is stream extraction operator
// comment are the description of what particular block of code, statement in code is doing in human readable format to get good understanding of the code
// [// -> single line comment, /* <> * / multiple line comment ]
// comments doesnot affect the performance of the program
#include <iostream>
int main()
{
    std::cout<<"cout is object of o stream class"<<std::endl<<"endl and cout is defiend in standard namespace \n";
    int data_from_exttration_operator, multi_vaar;
    std::cin>>data_from_exttration_operator>>multi_vaar;
    return 0;
}

// Lecture no: 12,13,14
// arithmatic operators available in c++
// short hand operator
#include <iostream>

using namespace std;

int main()
{
    int num1=12, num2=6;
    cout<<num1<<" + "<<num2<<" = "<<num1+num2<<std::endl;
    cout<<num1<<" - "<<num2<<" = "<<num1-num2<<"\n";
    cout<<num1<<" * "<<num2<<" = "<<num1*num2<<std::endl;
    cout<<num1<<" % "<<num2<<" = "<<num1%num2<<endl;

    int short_hand_opr = 10;

    std::cout<<short_hand_opr++<<endl; // postfix operator operation first increment later

    std::cout<<++short_hand_opr<<endl; // prefix increment first operation later

    short_hand_opr+=3; // same as short_hand_opr = short_hand_opr +3;
    std::cout<<short_hand_opr<<endl;
    return 0;
}

// Lecture no: 15,16
// conditional statement if - elseif - else, nested if else
// if conditions fail it will gofor else if till the time its not fail if noting matched then it will execute the else block
#include <iostream>
using namespace std;

int main()
{
    int age = 5;
    if(age==5)
    {
        if(age==7)
        {
            std::cout<<"its 7";
        }
        else if(age==9)
        {
            std::cout<<"its 7";
        }
        else
        {
            cout<<"from nested else \n";
        }
        cout<<"age is 5 \n";
    }
    else if(age== 10)
    {
        cout<<"age is 10 \n";
    }
    else
    {
        cout<<"age not 10,5";
    }
    return 0;
}

//Lecture 17, 18
// comparision operator, logical operator, ternary operator
#include <iostream>
using namespace std;

int main()
{
    int date = 15;
    if (date> 15){cout<<"later part in month \n";}
    if (date>= 15){cout<<"later part in month inclusive\n";}
    if (date< 15){cout<<"earlier part in month\n";}
    if (date<= 15){cout<<"earlier part in month inclusive\n";}
    if (date!= 15){cout<<"not equals 15\n";}
    if (date== 15){cout<<"equal 15\n";}
    if (date<20 && date>10){cout<<"between 10 nad 2\n";}
    if (date>20 || date<10){cout<<"between 10 nad 20\n";}
    if (!date){cout<<"not zero \n";}

    // replacement of if and else ocndition ? <if true> : <else>
    date>10 ?cout<<"greater than 10" : cout<<"less than 10";

}

// Lecture 19, 20, 21
// loops for, while <- entry control do while<- exit control
// for while there should be valid exit condition

#include <iostream>

int main()
{
    int counter = 0;

    while (counter <10)
    {
        std::cout<<"Value of counter: "<<counter<<std::endl;
        counter++;
        for (int i =0; i<counter; i++)
        {
            for(int j=0; j<i; j++)
            {
                std::cout<<"*";
            }
            std::cout<<"\n";
        }
        std::cout<<"\n";
    }

    do
    {
        std::cout<<"from do while loop: "<<counter<<" \n";
        counter++;
    }
    while(counter<19);

    return 0;
}

// Lecture 22, 23
// Array is nothing but collection of the simillar elements
// Arry indx start from 0 and the name off the variable where we store the array is the address of the first element of array
// Multiple dimention array is array inside another array however in the memory its stored in consecutive way

#include <iostream>
using namespace std;

int main()
{
    int array_of_marks[] = {2,3,4,65};
    std::cout<<"first element of the array: "<<array_of_marks[1]<<endl;

    float arry_filled_by_for[10];
    for(int i=0; i<10;i++)
    {
        arry_filled_by_for[i] = 100.0/i+1;
    }
    std::cout<<"Printing the elements of the array: ";
    for(int i=0; i<10;i++)
    {
        cout<<arry_filled_by_for[i]<<" ";
    }

    int multi_dia_array[2][3][3][4];
    int two_d_array[3][2] = {{2,3},{4,5},{6,7}};
    cout<<two_d_array<<endl;
    cout<<two_d_array[0][0];
}

// Lecture 24, 25
// fucntion is nothing but collection of code with specific tasks
//  its gives the good readibility, organisation and reusability
// fucn is defined as <return type> <fucntion name> (<parameter taken by fucntion>)
// function prototyping is nothing but declaring the fucntion body, defination is when you write the fucntionality of the fucntion
// while declaring the fuction you can only give the datatype
// if your function is returning the value then you have to mentioed that in the return type

#include <iostream>
using namespace std;

void welcomeToFunctions();
void functionThatsTakesTheparameter(int, int);
int fucntionThatReturnsTheValues(int);

int main()
{
    welcomeToFunctions();
    functionThatsTakesTheparameter(3,4);
    int c =fucntionThatReturnsTheValues(11);
    cout<<"values from the func: "<<c;
    return 0;
}

void welcomeToFunctions()
{
    cout<<"calling the fucntion \n";
}
void functionThatsTakesTheparameter(int a, int b)
{
    cout<<"Result is: "<<a+b<<endl;
}
int fucntionThatReturnsTheValues(int a)
{
    int z = a*a;
    return z;
}

// Lecture 26
// default values in function parameters
// generally when you call c++ fucntion compilers try to find the fucntion with exact same signature
//  default values while DECLARATION allows and its on RIGHTMOST SIDE int declaration us to use the same fucntion and in case if the parameter is not available it will use the default declared value.
//  while assigning default values start from right side as while call fucntion will only use the values 4 the left to right myfunction(2, ,3) is not allowed

#include <iostream>
using namespace std;

int callingDefValFucn(int a = 4, int b = 5, int c=89 );

int main()
{
    int c =callingDefValFucn(2,3);
    cout<<"Value of the default parameter is: "<<c<<"\n";
    c =callingDefValFucn();
    cout<<"Value of the default parameter is: "<<c<<"\n";
}
int callingDefValFucn(int a, int b, int c )
{
    int return_int = a+b+c;
    return return_int;
}


// Lecture 27
// inline function: while program execution the control is shifted back and forth between main and fucntion and sometimes 
if yo have very small function its advised to use to declare that function as a inline function as it will not switch the control between main and other function and will reduce the overheads
//  frequently using this keyword is not recommended as it will increase the size of the executable
#include <iostream>
using namespace std;
inline void inlineFunctionCall(int c);

int main()
{
    inlineFunctionCall(2);
}

void inlineFunctionCall(int c)
{
    cout<<"value is: "<<c;
}

// Lecture 28
// Varible scope: the region where the varible is available
// variables are defined in 3 locations4
//  ->inside the function (LOcal scope)
//  ->while defining the function (LOcal scope) (formal parameters)
//  ->outside the function (Global scope)
//  dafault value of the global var is set to zero as its declarded in the global memory on other hand local variables will take the garbage value as they are declared in the stack

#include <iostream>
using namespace std;

void display();
void noabFunc();

int a = 9;
int b;
int main()
{
    int global_var = 17;
    int a=2, b =34;
    cout<<"from main function --> a ="<<a<<"| b ="<<b<<"\n";
    display();
    noabFunc();
    return 0;
}
void display()
{
    int a = 90, b=89;
    cout<<"from display function --> a ="<<a<<"| b ="<<b<<"\n";
}
void noabFunc()
{
    cout<<"from noabFunc function --> a ="<<a<<"| b ="<<b<<"\n";
}

// Lecture 29
// break statement: to terminate the execution of loop and terminate the case in the switch statement
// break only terminates the current loop and outer loop is not affected
// continue statement: its just skip the execution of current loop an forces the loop to go to next iteration

#include <iostream>

using namespace std;

int main()
{
    for(int i=0; i<10; i++)
    {
        if (i==3)
        {
            break; // when the  i=3 the loop will terminate itself
        }
        for (int j=0; j<10; j++)
        {
            if (j==5)
            {
                continue; // all the instances will be where j =5
            }
            else
            {
                cout<<"val if i: "<<i<<"val if j: "<<j<<endl;
            }
        }

    }
}

// Lecture 30, 31
// switch statement
// the case can have the range value and its developed in c++ 11
#include <iostream>
using namespace std;

int main()
{
    int grade = 10;

    switch(grade)
    {
        case(1):
        {
            cout<<"fail";
            break;
        }
        case(10):
        {
            cout<<"fail";
            break;
        }
        default:
        {
            cout<<"pass";
            break;
        }
    }
    return 0;
}

// Lecture 32
// Multiple return statements
// Make sure that only 1 return statement is triggered during the prog flow
// returning the multiple values are possible using pointers

#include <iostream>
using namespace std;

bool checingForNum(int);

int main()
{
    bool result = checingForNum(2);
    std::cout<<result;
}

bool checingForNum(int input_var)
{
    if(input_var%2 ==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Lecture 34, 35
// Address of operator & return the starting byte of memory allocated to the variable
// there is special type of variables which we called as a pointer which is used to store the the adress vales
// to declare the pointer we needspecify the datatype which is nithing but data type of data stored at that particular location
// the naming will be same as normal variable except it will have * operator which specifies that its pointer variable
#include <iostream>
using namespace std;

int main()
{
    int var1=9, var2, var3=90;
    cout<<"Var1 is stored at: "<<&var1<<"  Var2 is stored at: "<<&var2<<"  Var3 is stored at: "<<&var3<<"\n";

    int *var1_address = &var1;
    // var1_address++;
    cout<<&*var1_address;
}

// Lecture 36, 37, 38
// passing and returning the array
// pass by value: the whole value is passed to the function
// pass by referenc: address of the element is passed, any change made by this will alos reflect in the variable of main function
// array name stores the address of the first element and its just a pointer to the first element to access element at some position just use +

#include <iostream>
using namespace std;

int * acceptAndReturnTheArray(int *adr_of_first)
{
    return &adr_of_first[2];
}


int main()
{
    int arr[5] = {1,2,30,4,5};
    cout<<"printing array using pointer: "<<*(arr+2)<<" * \n";
    int *ret_arr_adr = acceptAndReturnTheArray(arr);
    cout<<arr<<"  --  "<<ret_arr_adr;

    return 0;
}

// Lecture 39, 40
// const keyword
// if you dont want to change the value of your variable you have to use const keyword and while defining the the variable you have to initialise it
// you can declare array or any variable as a constantiterate through array using pointer

#include <iostream>
using namespace std;

void dispConstArr(int * start, int * end);

int main()
{
    int var_arr[10] = {7,3,4,5,6,7,5,4,3,5};
    cout<<var_arr<<" - "<<var_arr+10;
    dispConstArr(var_arr, var_arr+10);
    return 0;
}

void dispConstArr(int * start, int * end)
{
    cout<<"\n";
    while(start!=end-2)
    {
        cout<<*start<<"-";
        start++;
    }
}

// Lecture 41, 42, 43
// structures: it allows us to store different types of variables
// Structure becomes user defined data type
//  the assignment can be done using array like way {}
//  and the inside element is accessed using dot operator
// you can also access the structure using pointers using -> operator
 // pass structure and address of structure
//  classical example of failure when you pass by value. as the scope of the variable is local when you return its address you get garbage value

#include <iostream>
using namespace std;

struct Student
{
    int sid;
    int arr[5];
    char sex;
    float average;
};

Student * takingStructureAndReturningIt(Student s1);
Student oppositeOfAbove(Student * s1_adr);

int main()
{
    Student suraj = {5,{2,3,4,5,6},'M',34.5} ;
    suraj.arr[2] = 56;
    cout<<suraj.arr[2]<<" - "<<suraj.sid<<"\n";

    Student * addr_of_suraj = &suraj;
    cout<<addr_of_suraj<<" --> "<<addr_of_suraj->average<<"\n";

    Student * addr = takingStructureAndReturningIt(suraj);
    cout<<addr<<"\n";
    cout<<"\nbefore passing to other func= "<<addr->sid<<" - "<<addr->sex<<"\n";
    Student temp = oppositeOfAbove(addr);
    cout<<temp.sid<<" - "<<temp.average<<"\n";

}

Student * takingStructureAndReturningIt(Student s1)
{
    Student * addr_of_suraj = &s1;
    cout<<"\nFrom the function = "<<addr_of_suraj<<" - "<<addr_of_suraj->sid<<" - "<<addr_of_suraj->sex<<"\n";
    return addr_of_suraj;
}

Student oppositeOfAbove(Student * s1_adr)
{
    Student s1 = *s1_adr;
    cout<<"\nFrom the function = "<<s1_adr->sid;
    return s1;
}

// Lecture 44, 45, 46
// nested structutre
// nesting can be done using address or actual variable
// size of operator determined the size of data during the compile time

#include <iostream>
#include <string>

using namespace std;

struct Home
{
    int home_no;
    string street_adr;
};

struct Student
{
    int roll_no;
    char sex;
    Home address;

};

struct Student_ptr
{
    int roll_no;
    char sex;
    Home *address;
};
int main()
{
    Home h1 = {61, "wachuseets"};
    Student s1 = {123, 'M', h1};

    Student_ptr s1_ptr = {345, 'm', &h1};

    cout<<s1.address.home_no<<"\n";
    cout<<s1_ptr.address->home_no<<"\n";
    Student_ptr * s1_ptr_ptr = &s1_ptr;
    cout<<s1_ptr_ptr->address->street_adr;

    cout<<endl<<sizeof(long int);
    return 0;
}

// Lecture 47
// union
// in the union the memory is stored amongest the all the datatype
// in unions we can only store the value of one variable at a time

#include <iostream>
#include <string>
union Employee
{
    int eid;
    char name;
};

int main()
{
    std::cout<<sizeof(Employee);
    Employee e1;
    e1.name = 's';
    std::cout<<sizeof(e1)<<e1.name<<std::endl;

    int arr[5] = {1,2,3,4,5};
    int* arr_ = arr;
    std::cout<<arr_++;

    return 0;
}


// Lecture 48, 49
// Dynamic memory allocation new and delete operator
// allocating the memory during run time and not at compile time
// generally when you build your program the OS will allocatre some memory for the program called as a stack
// stack is shared by all the programs running in the system. so lets assume you have a programs running in your system and for every program os allocate some stack space where it stored the program specific data nad local variables
// as the stack is shared space its predefined and only fixed amount of space is allocated to every program, so its not possible to assin space to your program during runtime as it will simply then try to use stack space allocated to other program
// so to solve this problem we can allocate the memory to the program in the heap.
// but you to allocate and deallocate this memory explicitely as if you dont then os wont be able to allocate the same to other program.
// Bad recursion cna lead to program crash or stack over flow
//  so new and delete operators are used for assigning the memory to the fucntion from the headp
// stack, heap, global var, code memory are type of memories in ram while prog exec

#include <iostream>
using namespace std;

int main()
{
    int *adr_from_heap_i = new int; // allocating to the int variable
    float *adr_from_heap_f = new float [4]; // allocating to array var

    int *adr_from_heap = new int [4]; // alloation from the dynamic memoyr
    *adr_from_heap = 76;
    cout<<&adr_from_heap<<" - "<<*adr_from_heap<<" - "<<adr_from_heap;

    delete [] adr_from_heap;  // deallocation
    adr_from_heap_i++;
}

// Lecture 50, 51, 52
// Avoding the dangling pointer
// So the dangling of pointer happen when you allocate the memory to the pointer from the heap... you do your prog part and now deallocated the memory. but in your pointer you still store ths address and if you accidently try to access thta location you will get garbage valueso check before and after for this by setting pointer to null
// You can use auto for the automatic type deduction
#include <iostream>
using namespace std;

int main()
{
    int *adr_from_heap = NULL;
    adr_from_heap = new int;
    if (adr_from_heap)
    {
        cout<<"Memory allocated successfully"<<"\n";
    }
    else
    {
        cout<<"no memory allocated"<<"\n";
    }

    delete adr_from_heap;
    cout<<"Still got the address "<<adr_from_heap<<"\n";
    adr_from_heap = NULL;
    cout<<"now no dangling "<<adr_from_heap;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2,233,4,45,56,6778,9,90,5};

    for (int var : arr)
    {
        cout<<var;
    }
}

#include <iostream>
#include <string>

using namespace std;

struct Address
{
    int house_no;
    string street;
};

struct Person
{
    string name;
    int age;
    double salary;
    Address adr;
};

int main()
{
    int * adr_for_var = new int;
    int * adr_for_array_size_5 = new int[5];
    Person * adr_of_ulkesh = new Person();

    if(adr_for_var != nullptr)
        *adr_for_var = 10;

    cout<<*adr_for_var<<"\n";

    int array[3];
    array[1] = 1;
    array[2] = 2;
    array[3] = 3;
    cout<<array<<"\n";

    
    *adr_for_array_size_5 = 4;
    // int * next_adr = adr_for_array_size_5 + 1;

    *(adr_for_array_size_5 + 3) =5;


    // *next_adr = 5;
    // next_adr++;
    // *next_adr = 6;


    // adr_for_array_size_5[1] = 5;
    // adr_for_array_size_5[2] = 6;
    // adr_for_array_size_5[3] = 7;
    // adr_for_array_size_5[4] = 8;

    for(int i=0; i<5; i++)
    {
        cout<<adr_for_array_size_5[i]<<" ";
    }

    adr_of_ulkesh -> name = "Ulkesh Sanjay Solanki";
    cout<<"\n"<<(*adr_of_ulkesh).name<<"\n";

    delete adr_for_var;
    delete [] adr_for_array_size_5;
    delete adr_of_ulkesh; 

    adr_for_var = nullptr;

    adr_for_array_size_5 = nullptr;
    // cout<<adr_for_array_size_5[1];
    adr_of_ulkesh = nullptr;
}


// Lecture 53: string operations, recursion
#include <iostream>
#include <string>

using namespace std;
int facto(int s1)
{
    if(s1==0)
    {
        return 1;
    }
    else
    {
        return s1*facto(s1-1);
    }

}
int main()
{
    int a=4;
    cout<<facto(a);
}

#include <iostream>

using namespace std;

int factor(int i);

int main()
{
    int* a_adr =new int;
    *a_adr = 5;

    cout<<factor(*a_adr);
}

int factor(int i)
{
    if(i ==0 )
    {
        return 1;
    }
    else
    {
        return i*factor(i -1);
    }
}

// recursion should have some termination case
// it have the return type

#include <iostream>
#include <string>

using namespace std;

int rec_func(int i)
{
    if(i==0)
    {
        return 0;
    }
    else
    {
        return i + rec_func(i-1);
    }
}

int main()
{
    int c =9;
    c = rec_func(9);
    cout<<c;
}


// Lecture 55
// Function overloading
// so the fucntion will have the same name same return type but different paramaters
// generally useful during the constructor overloading
#include <iostream>
using namespace std;

void display();
void display(int i);
void display(char c);

int main()
{
    display();
    display(2);
    display('c');
    return 0;
}
void display()
{
    std::cout<<"no f.."<<"\n";
}
void display(int i)
{
    std::cout<<"no f.. for "<<i<<"\n";
}
void display(char c)
{
    std::cout<<"no f.."<<c<<"\n";
}

// Lecture 56, 57, 58
// Object oriented programming
// class contains member function and member variable
// Access specifier: this for the making sur ethat the classes data available only in the exact region
// to access the class variables and methonds you have to create the object of the class
// object can be created in stack or heap memory
// you can access the class using . or -> operator
// Scope resolution operator :: is used to defined the method of the clss outside the class
//  you can also initiliase the variable inside the class you can only use th escope resolution operator in cas eof static variables
// constructor and distructor are special methods without any return type of the class and have the same name /~same name as a classname, they are invoked automatically at the time of object creation and object distruction, we can use this method to initialise the object and memory management.
//  you cant call constructor separately, and they dont have return type, you can overload the construtor. but in case of overloading the default one should need to be present all the time. constructor cant be private ++

#include <iostream>
using namespace std;

struct Return_struct
    {
        int s_age;
        float s_height;
    };

class HumanBeing
{
    public:
        HumanBeing(int age, float height);
        HumanBeing()
        {
            cout<<"constructor invoked"<<"\n";
        }
        ~HumanBeing()
        {
            cout<<"distructor invoked"<<"\n";
        }
        void display()
        {
            cout<<"from display function"<<"\n";
        }
        int public_var;
        Return_struct* accessPrivateVars();
        void privateVarsetterMethod(int age, float height)
        {
            m_age = age; m_height=height;
        }

        Return_struct return_struct;
        int default_val = 20;
    private:
        int m_age;
        float m_height;

};

HumanBeing::HumanBeing(int age, float height)
{
    m_age = age; m_height = height;
    cout<<"from overloaded constructor"<<m_age<<m_height<<"\n";
}
Return_struct* HumanBeing::accessPrivateVars()
{
    return_struct.s_age = m_age;
    return_struct.s_height = m_height;
    return &return_struct;
}

int main()
{
    HumanBeing h1, h2(2,3.4),h3;
    h1.display();
    h1.public_var = 10;
    h1.privateVarsetterMethod(4,5.6);
    // cout<<h1.accessPrivateVars()<<"\n";
    cout<<h1.public_var<<"\n";
    Return_struct *receive_struct = h2.accessPrivateVars();
    cout<<receive_struct->s_age<<"***********\n";

    HumanBeing *adr_ofh3obj = new HumanBeing(12,14.5);
    receive_struct = adr_ofh3obj->accessPrivateVars();
    cout<<receive_struct->s_age<<"***********\n";
    cout<<h3.default_val<<"wuryw08tyhgrhgo";


    // cout<<"\n"<<a<<"\n";
    return 0;
}


// Lecture no 58,59,60,61,62
// constructor, constructor overloading and default constructor
// constructor is invoked at the time of object crration , like a fucntion overloading you can do construction overloading and how ever you should have a default value or default constructor else you will get the error
 // distructor: distructor is a special function which dont have the return type and parament and will be invoked at the time of distruction of the object, mainley used to free the resources and house keeping activity. will invoked automatically at the time of object distruction or deleting the pointer
#include <iostream>
using namespace std;

class Human
{
    public:
        // Human();
        Human(int age=0, float height=1.0)
        {
            age_=age; height_=height;
        }
        bool intialiseVar(int age)
        {
            setAge(age);
            if(age_ != -1){return false;}
            else{return true;}
        }
        int retuAge()
        {
            return age_;
        }
        ~Human(){cout<<"\nur killed and you can free the heap memory apply to class variables";}
    private:
        int age_; float height_;
        void setAge(int age){age_ = age;};

};
// Human::Human()
// {
//     cout<<"default constructor invoked"<<"\n";
// }

int main()
{
    Human H1;
    Human *h2_adr = new Human(2, 3.4);
    if(h2_adr!=NULL)
    {
        cout<<"\n"<<h2_adr->retuAge();
    }
    delete h2_adr;
    h2_adr = NULL;

    return 0;
}

#include <iostream>
using namespace std;

class Human
{
    private:
        int* age;
        float* height;
    public:
        Human(int iage=0, float iheight=1.0)
        {
            age = new int; height = new float;
            *age = iage;
            *height = iheight;
        }
        void display()
        {
            cout<<"Age = "<<*age<<"Height = "<<*height<<"\n";
        }
        ~Human();
};
Human::~Human()
{
    delete age; delete height;age = NULL;height = NULL;
    cout<<"deleted the pointers";
}

int main()
{
    Human h1;
    h1.display();
    Human* h2_adr = new Human(2,3.4);
    h2_adr->display();

    delete h2_adr; h2_adr = NULL;
    return 0;
}

// Lec 63, 64
// static keyword
// the storage of this variable is like global var, only one copy per program and has a class scope
// you can declare variable as a static or method as a static method
// static variable will need to be declare before its use in class i.e. before object creation
//  static methos will only work on the static variables
// the static variable is stored in th eheap and can be access without creating the object

#include <iostream>
using namespace std;

class Human
{
    public:
        static int human_count;
        Human(){human_count++;}
        static void funcOnlyWorkOnStaticVar();
};
int Human::human_count = 0;
void Human::funcOnlyWorkOnStaticVar()
{
    cout<<"No. of human created = "<<human_count<<"\n";
}
int main()
{
    Human *adr_of_h1= new Human();
    adr_of_h1->funcOnlyWorkOnStaticVar();

    Human h2;
    h2.funcOnlyWorkOnStaticVar();

    for(int i=0; i<10; i+=2)
    {
        static int loop_count = 0; // was initialise only at the first time of loop
        cout<<"loop count = "<<loop_count<<"\n";
        loop_count++;
    }
}


// Lec 65
// friend fnction
// the private and protected members of th eclass is only accesseble to the to the member functions of the class
// but there is a special function called as a friend fucntion and if you declare the function as a friend function to the class you can acccess the private and protected variables of the class

#include <iostream>
using namespace std;

class Human
{
    private:
        int age;
        float height;
    public:
        Human(int iage= 0, float iheight = 0.0)
        {
            age=iage;
            height=iheight;
        }
    friend void canAcessPrivateVarOfClass(Human man);
};

void canAcessPrivateVarOfClass(Human man)
{
    cout<<"height is= "<<man.height<<" age is= "<<man.age<<"\n";
}

int main()
{
    Human h1(2);
    canAcessPrivateVarOfClass(h1);

    Human *h2 = new Human();
    canAcessPrivateVarOfClass(*h2);
}
*/

// // Lecture 66
// // Inheritance
// // It allows us to define the clas using other class
// inheritance
// Allows us to use feature defined in one class in another class
// to inherites the class you have to while defining the class you have to use :
// private members are not inherritated
// base class, sub class

// #include <iostream>
// #include <string>

// using namespace std;

// class Person
// {
//     public:
//         string name;
//         int age;
//         void setName(string iname){name = iname;}
//         void setage(int iage){age = iage;}
// };
// class Student : public Person
// {
//     public:
//         int id;
//         void setID(int iid){iid = id;}
//         void introduce()
//         {
//             cout<<"Hi i am:"<<name<<" my age is:"<<age<<" my sid is:"<<id<<"\n";
//         }3

// };

// int main()
// {
//     Student suraj;
//     suraj.setName("Suraj");
//     suraj.setage(26);
//     suraj.setID(242183642);
//     suraj.introduce();
//     return 0;
// }

// Lecture No 66

// #include <iostream>
// #include <string>

// // using namespace std;

// class Mother
// {
//     public:
//         std::string skin_color;
//         Mother(){"Mother created \n";}
//         ~Mother(){"Mother gone \n";}
//     protected:
//         void AskMother(){"Ask your mom anything";}
// };

// class Father
// {
//     public:
//         std::string height;
//         Father(){"Father created \n";}
//         ~Father(){"Father gone \n";}
//     protected:
//         void AskFather(){"Ask your dad anything";}
//         float family_age;
//     private:
//         int cash;
// };

// class Son : protected Mother, private Father
// {
//     public:
//         Son(){"Son created \n";}
//         ~Son(){"Son gone \n";}
//         std::string name;
//         using Father::family_age;
//         void introcude(){std::cout<<"i am"<<name<<" - height"<<height<<" - skin_color"<<skin_color;}
// };



// int main()
// {
//     Son *suraj = new Son;
//     suraj->name = "suraj";
//     suraj->introcude();
//     delete suraj;

//     return 0;
// }



// #include <iostream>
// #include <string>

// using namespace std;

// template <typename t1, typename t2>
// class Marks
// {
//     public:
//         t1 mark, extmark;
//         t2 string_var;
//         Marks(t1 imark = 0, t1 emark= 0)
//         {
//             mark = imark; extmark = emark;
//         }
//         void disp()
//         {
//             cout<<"internal marks: "<<mark<<"  ext mark: "<<extmark;
//         }

//         Marks operator+ (Marks m2)
//         {
//             Marks temp;
//             temp.mark = this->mark + m2.mark;
//             temp.extmark = this->extmark + m2.extmark;
//             return temp;
//         }
// };

// int main()
// {
//     Marks  <int , int > m1 (20,30); Marks <int , int > m2 (40,50);
//     Marks<int , int > m3 = m1+m2;
//     m3.disp();
// }


// #include <iostream>

// using namespace std;

// void passByValue(int *a)
// {
//     cout<<"val :"<<a[2];
// }

// // void passByRef(int &a[])
// // {
// //     cout<<"ref :"<<a[2];
// // }

// // void passBypointer(int *a)
// // {
// //     cout<<"ptr :"<<a[2];
// // }
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     // passBypointer(arr);
//     // passByRef(*arr[]);
//     passByValue(arr[]);
//     return 0;
// }


// void display();
// void display(int i);
// void display(char c);
// int display(int b){retun b;}

// int main()
// {
//     display();
//     display(2);
//     display('c');
//     int d = display('c');
//     cout<<d;
//     return 0;
// }
// void display()
// {
//     std::cout<<"no f.."<<"\n";
// }
// void display(int i)
// {
//     std::cout<<"no f.. for "<<i<<"\n";
// }
// void display(char c)
// {
//     std::cout<<"no f.."<<c<<"\n";
// }


// #include <iostream>
// using namespace std;

// class Human
// {
//     public:

//         Human(){human_count++;}
//         static int human_count;
//         static void funcOnlyWorkOnStaticVar();
// };
// int Human::human_count = 0;
// void Human::funcOnlyWorkOnStaticVar()
// {
//     cout<<"No. of human created = "<<human_count<<"\n";
// }
// int main()
// {
//     Human *adr_of_h1= new Human();
//     adr_of_h1->funcOnlyWorkOnStaticVar();

//     Human h2;
//     h2.funcOnlyWorkOnStaticVar();

//     for(int i=0; i<10; i+=2)
//     {
//         static int loop_count = 0; // was initialise only at the first time of loop
//         cout<<"loop count = "<<loop_count<<"\n";
//         loop_count++;
//     }
// // }
// #include <iostream>

// using namespace std;

// class Operator_m
// {
//     public:
//         int temp_var;
//         void operator++()
//         {
//             this->temp_var++;
//         }
//         Operator_m operator++(int)

//         {
//             Operator_m temp = *this;
//             this->temp_var++;
//             return temp;
//         }
// };

// int main()
// {
//     Operator_m o1;
//     o1.temp_var = 4;
//     ++o1;
//     cout<<o1.temp_var;
//     o1++;
//     cout<<o1.temp_var;



// }



#include <iostream>

using namespace std;

void func(int a)
{
    cout<<"1 \n";
}

void funco(int & a)
{
    cout<<"2 \n";
}

void func(int *a_adr)
{
    cout<<"3 \n";
}
int main()
{
    int a = 0;
    func(a);
    funco(a);
    func(&a);

}