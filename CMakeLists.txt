cmake_minimum_required(VERSION 3.6)
project(Primer_Plus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
#        ./AppendixE/align.cpp
#        ./AppendixE/memb_pt.cpp
#        ./AppendixE/noex.cpp
#        Chapter4/addpntrs.cpp
#        Chapter4/ptrstr.cpp
#        Chapter4/newstrct.cpp
#        Chapter4/delete.cpp
#        Chapter4/mixtypes.cpp
#        Chapter4/choices.cpp
#        Chapter5/express.cpp
#        Chapter5/formore.cpp
#        Chapter5/bigstep.cpp
#        Chapter5/forstr1.cpp
#        Chapter5/block.cpp
#        Chapter5/forstr2.cpp
#        Chapter5/compstr1.cpp
#        Chapter5/compstr2.cpp
#        Chapter5/while.cpp
#        Chapter5/waiting.cpp
#        Chapter5/dowhile.cpp
#        Chapter5/textin1.cpp
#        Chapter5/textin2.cpp
#        Chapter6/and.cpp
#        Chapter6/more_and.cpp
        Chapter6/not.cpp
#        Algorithm/leetcode_001.cpp
#        Algorithm/leetcode_007.cpp
        )
add_executable(Primer_Plus ${SOURCE_FILES})