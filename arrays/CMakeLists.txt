﻿project("arrays")

file(GLOB SRC src/*.c)

include_directories(include)

add_executable(${PROJECT_NAME} ${SRC})

target_link_libraries(${PROJECT_NAME} ${COMMON_LIB_DEPS})