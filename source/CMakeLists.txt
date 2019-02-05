
set(TARGET_NAME math_functions)

add_library(${TARGET_NAME}
    math_functions.cpp
    math_functions.hpp)

target_include_directories(${TARGET_NAME}
  INTERFACE ./)

install(TARGETS ${TARGET_NAME}
ARCHIVE DESTINATION lib/)