cmake_minimum_required(VERSION 3.29)
project(refactored_2d_shootemup C CXX)

set(CMAKE_C_STANDARD 17)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake_modules)

set(SDL2_PATH "C:/libs/SDL/x86_64-w64-mingw32")
set(SDL2_IMAGE_PATH "C:/libs/SDL2_image-2.8.2/x86_64-w64-mingw32")
set(SDL2_MIXER_PATH "C:/libs/SDL2_mixer-2.8.0/x86_64-w64-mingw32")
set(SDL2_TTF_PATH "C:/libs/SDL2_ttf-2.22.0/x86_64-w64-mingw32")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_mixer REQUIRED)
find_package(SDL2_ttf REQUIRED)


include_directories(${SDL2_INCLUDE_DIR} ${SDL2_IMAGE_INCLUDE_DIRS} ${SDL2_MIXER_INCLUDE_DIRS} ${SDL2_TTF_INCLUDE_DIRS})


add_executable(refactored_2d_shootemup
        structs.cpp
        structs.h
        init.cpp
        init.h
        doInput.cpp
        doInput.h
        draw.cpp
        draw.h
        variables.h
        main.cpp
        stage.cpp
        stage.h
)


target_link_libraries(${PROJECT_NAME}  ${SDL2_LIBRARY})
target_link_libraries(${PROJECT_NAME}  ${SDL2_IMAGE_LIBRARY})
target_link_libraries(${PROJECT_NAME}  ${SDL2_MIXER_LIBRARY})
target_link_libraries(${PROJECT_NAME}  ${SDL2_TTF_LIBRARY})






