:: file that compiles entire sourcecode and runs it
cls
g++ anka_main.cpp ^
anka_Basics\anka_basics_headerless.cpp anka_Basics\anka_basics.cpp ^
-o ankaExecutable.exe
ankaExecutable