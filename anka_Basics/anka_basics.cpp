#include <iostream>
#include "..\anka_Headers.h"
#include<typeinfo>

//BEGIN:declarations in place of header for akeHeaderLess.cpp

namespace akeNamespace001
{
	void ten();//from headerless cpp
}
namespace akeNamespace002{void ten();}
int getSomething();

//END:declarations in place of header for akeHeaderLess.cpp

//definition of methods in anka_Headers
void log(const std::string msg)
{
	std::cout<<msg<<"\n";
}

void log(char* msg)
{
	std::cout<<msg<<"\n";
}

void log(char msg)
{
	std::cout<<msg<<"\n";
}

int anka_basics_Main()
{
    //S: From akeHeaderLess.cpp
	akeNamespace001::ten();
	using namespace akeNamespace002;
	ten();
	log(getSomething());//Explicit type concersion happens here int to char
	Log(getSomething());
	//E: From akeHeaderLess.cpp

    using namespace std;
    //Size in memory of various types
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of unsigned int : " << sizeof(unsigned int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    cout << "Size of boolean : " << sizeof(bool) << endl;
    cout << "Size of void pointer : " << sizeof(void*) << endl // <<< /!\ look no semicolon here

    /* *****************PreProcessing/Compiling Linking************** */
    //PRE_PROCESSOR: Processes statements with starting with "#"
    //Inclusion directives
    //#include: adds the contents of included file as it is to the source file
    #include "anka_basics_sourceless.h"//just adds a semicolon

    //Macro definition directive
    /*#define: preprocessor directive creates symbolic constants.
    The symbolic constant is called a macro and the general form of the directive is
    #define <macro-name> <replacement-text> */
	#define $nl <<endl
    PRINT << endl <<"Proprocessor derictives" $nl;
    //Function Like Macros
    #define MIN(a,b) (((a)<(b)) ? a : b)
    PRINT <<"MIN(4,14) :"<<MIN(4,14) << endl;
    #undef MIN// undefine a macro

    //PRINT <<"MIN(4,14) :"<<MIN(4,14) << endl;// Error
    
	//Conditional Compilation Directives:
    #define TI 7
    //#if: It tests a compile-time condition
    #if (TI<4)
    PRINT << "Conditional Compiulation 1" << endl;
    //#elif
    #elif (TI<8)
    PRINT << "Conditional Compiulation 2" << endl;
    //#endif: It specifies the end of #if
    #endif
    //#ifdef: It is used to test for macro definition
    #ifdef TI
    PRINT << "Conditional Compilation 3" << endl;
    //#else: It provides an alternative option when #if fails
    #else
    PRINT << "Conditional Compilation 3.1" << endl;
    #endif // TI

    //#ifndef: It tests whether a macro is not defined
    #ifndef MIN6
    #define MIN6
    PRINT << "Conditional Compilation 4" << endl;
    #endif // TI

//conditions: Anything non zero is true :D
    if(0.23)
        PRINT<< "Condition Checking done"<<endl;
    if(-0.00023)
        PRINT<< "Condition Checking2 done"<<endl;
    if('A')
        PRINT<< "Condition Checking3 done"<<endl;
	
	int int1 = 3;
	char c = char('D'- int1);
    PRINT<< "Char is "<<c<<endl;//Prints A

    //lOOPS
    PRINT<<endl;
    PRINT<<endl;
    //for(variable, condition,operator before exiting loop)
    for(int i=0;i<5;)
    {
        PRINT << "Inside Loop" << endl;
        i++;
    }

    int j=0;
    for(;j<5;) //Valid for(;;) == for(;true;) : infinite loop
    {
        PRINT << "Inside Loop J" << endl;
        j++;
    }

    int k=0;
    for(;;) //Valid for(;;) == for(;true;) : infinite loop
    {
        if(k==2){ k++;continue;} //go to next iteration
        //else
        PRINT << "Inside Loop k "<<k << endl;
        k++;
        if(k>=5) break;// break the loop
    }








    return 0;
}
