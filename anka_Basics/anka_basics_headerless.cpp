#include "..\anka_Headers.h"
//This is a headerless source file
//About Namespaces
#define log(msg) (std::cout<<msg<<"\n")
//Conditional Compilation
#define CCompile 5
#if (CCompile>4)
namespace akeNamespace001
{
void ten(){log("10");}	
}
//#else OR #elif(CCompile > 2)
namespace akeNamespace002
{
	void ten(){log("TEN");}
}
#endif
//Outside the namespaces
int getSomething()
{
return 504344125;
}