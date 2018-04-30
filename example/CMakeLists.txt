# see https://docs.microsoft.com/en-us/cpp/linux/cmake-linux-project#building-a-supported-cmake-release-from-source
cmake_minimum_required(VERSION 3.8)

project (raspberry-example)


set(SOURCE
   ${SOURCE}
   # hier weitere c-Dateien eintragen
   ${CMAKE_CURRENT_SOURCE_DIR}/src/main.c
)

if (MSVC)
# Diese Includes werden nur benötigt, damit Visual Studio das InstelliSense
# generieren kann und keine InstelliSense-Fehler anzeigt
include_directories(SYSTEM../raspbian-includes)
include_directories(SYSTEM ../raspbian-includes/arm-linux-gnueabihf)
ENDIF()

add_executable(raspberry-example ${SOURCE})
