cmake_minimum_required(VERSION 3.12)
project(raylibTemplate)

set(CMAKE_CXX_STANDARD 14)

# Get the source toegher
file(GLOB sources *.cpp)

# Get the source  of classes toegher
file(GLOB sources_clases clases/*.cpp)


include("cmake/raylib_web.cmake")
include("cmake/raylib.cmake")


add_executable(${PROJECT_NAME} ${sources} ${sources_clases} clases/Tree.cpp clases/Tree.h clases/Rama.cpp clases/Rama.h clases/Bar_Life.cpp clases/Bar_Life.h clases/ThemeFactory.cpp clases/ThemeFactory.h clases/NightMonkey.cpp clases/NightMonkey.h clases/LightMonkey.cpp clases/LightMonkey.h clases/LightThemeFactory.cpp clases/LightThemeFactory.h clases/NightThemeFactory.cpp clases/NightThemeFactory.h clases/LightRama.cpp clases/LightRama.h clases/NightRama.cpp clases/NightRama.h clases/MenuElement.cpp clases/MenuElement.h clases/Button.cpp clases/Button.h clases/SingletonGame.cpp clases/SingletonGame.h clases/Audio.cpp clases/Audio.h clases/Window.cpp clases/Window.h clases/Manager.h)
add_dependencies(${PROJECT_NAME} raylib)
target_link_libraries(${PROJECT_NAME} ${raylib_LDFLAGS})
target_include_directories(${PROJECT_NAME} PRIVATE ${raylib_INCLUDE_DIRS})

file(COPY "resources/"  DESTINATION "resources/")

include("cmake/raylib_web_post.cmake")