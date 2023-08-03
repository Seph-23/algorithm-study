cmake_minimum_required(VERSION 3.24)
project(algorithm_cpp_new)

set(CMAKE_CXX_STANDARD 17)

add_executable(algorithm_cpp_new main.cpp programmers/bitsettest.cpp programmers/숫자의표현.cpp programmers/다음큰숫자.cpp programmers/피보나치수.cpp programmers/짝지어제거하기.cpp programmers/영어끝말잇기.cpp programmers/구명보트.cpp programmers/다리를지나는트럭.cpp programmers/가장큰수.cpp programmers/큰수만들기.cpp programmers/후보키.cpp programmers/미로탈출.cpp programmers/프렌즈4블록.cpp programmers/파일명정렬.cpp barkingdog/stack/b3015.cpp programmers/공원산책.cpp barkingdog/twopointer/겹치는건싫어.cpp barkingdog/greedy/멀티탭.cpp barkingdog/greedy/강의실배정.cpp barkingdog/greedy/카드합체놀이.cpp softeer/garagegame.cpp)

add_executable(main main.cpp)
add_executable(out barkingdog/twopointer/겹치는건싫어.cpp)
