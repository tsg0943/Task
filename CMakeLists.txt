# Требование к минимальной
cmake_minimum_required(VERSION 3.9)
# Имя проекта
project(Task)
# Используемый стандарт C++
set(CMAKE_CXX_STANDARD 11)
# Добавление библиотеки SHARED
# Собстсвенно, именно эта строка определяет, что из файла Sum.cpp
# должна создаваться динамическая (SHARED) библиотека
add_library(Task SHARED Task/Sum.cpp)
# Добавление исполняемого файла (с тестами)
add_executable(Task.Tests Task.Tests/main.cpp Task.Tests/Sum.Tests.cpp)
# указание завимости исполняемого проекта от библиотеки Test,
# библиотеки gtest и pthread (нужна для gtest)
target_link_libraries(Task.Tests Task gtest pthread)