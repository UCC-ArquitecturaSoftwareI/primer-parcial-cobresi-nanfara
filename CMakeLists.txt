cmake_minimum_required(VERSION 3.12)
project(raylibTemplate)

set(CMAKE_CXX_STANDARD 14)

# Get the source toegher
file(GLOB sources *.cpp)

# Get the source  of classes toegher
file(GLOB sources_clases clases/*.cpp)


include("cmake/raylib_web.cmake")
include("cmake/raylib.cmake")


add_executable(${PROJECT_NAME} ${sources} ${sources_clases}  clases/Monkey.cpp clases/Monkey.h clases/Tree.h  clases/Rama.h clases/Bar_Life.cpp clases/Bar_Life.h clases/ThemeFactory.h clases/NightMonkey.h clases/LightMonkey.h clases/LightThemeFactory.h clases/NightThemeFactory.h  clases/LightRama.h  clases/NightRama.h clases/Button.h clases/SingletonGame.h clases/Audio.cpp clases/Audio.h clases/Window.h clases/Manager.h clases/Visitor.h clases/VisitorDraw.h clases/VisitorGetRectangle.h clases/Visitable.h clases/Tree.cpp clases/Rama.cpp clases/LightMonkey.cpp clases/NightMonkey.cpp clases/Button.cpp clases/LightRama.cpp clases/NightRama.cpp clases/SuperTree.h clases/TreeVetas.cpp clases/SingletonGame.cpp)
add_dependencies(${PROJECT_NAME} raylib)
target_link_libraries(${PROJECT_NAME} ${raylib_LDFLAGS})
target_include_directories(${PROJECT_NAME} PRIVATE ${raylib_INCLUDE_DIRS})

file(COPY "resources/"  DESTINATION "resources/")

include("cmake/raylib_web_post.cmake")