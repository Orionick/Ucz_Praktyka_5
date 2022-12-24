# CMakeList.txt: проект CMake для Ucz_Praktyka_5; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("Ucz_Praktyka_5")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Ucz_Praktyka_5 "main.cpp"  "IntVector.h" "IntVector.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Ucz_Praktyka_5 PROPERTY CXX_STANDARD 17)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
