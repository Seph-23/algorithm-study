cmake_minimum_required(VERSION 3.24)
project(algorithm_cpp_new)

set(CMAKE_CXX_STANDARD 17)

add_executable(algorithm_cpp_new main.cpp programmers/bitsettest.cpp programmers/숫자의표현.cpp programmers/다음큰숫자.cpp programmers/피보나치수.cpp programmers/짝지어제거하기.cpp programmers/영어끝말잇기.cpp programmers/구명보트.cpp)

add_executable(main main.cpp)
add_executable(out programmers/메뉴리뉴얼.cpp)
