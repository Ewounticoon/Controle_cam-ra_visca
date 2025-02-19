# Spécifiez la version minimale de CMake requise
cmake_minimum_required(VERSION 3.10)

set(ARDUINO_SDK_PATH)
set(CMAKE_TOOLCHAIN_FILE)
set (CMAKE_CXX_STANDARD 11)

if(ARDUINO_BUILD)
    # Configuration pour la compilation Arduino
    set(ARDUINO_SDK_PATH ${CMAKE_SOURCE_DIR}/arduino)

    set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/cmake/ArduinoToolchain.cmake)
    add_definitions(-DARDUINO_BUILD)
endif()

# Nom du Projet
project(Camera)

# Definition des fichier communs à l'arduino et au PC

set(COMMON_HEADERS
    src/Camera.h
    src/IKeyboard.h
    src/ISerial.h
    src/main.h
    src/ViscaCommand.h
)

set(COMMON_SOURCES
    src/Camera.cpp
    src/ViscaCommand.cpp
    src/main.cpp
)

# Vérifie les macros PC_BUILD et ARDUINO_BUILD
if(PC_BUILD)
# Declaration des fichier utilisé par le PC
    set(HEADERS
        ${COMMON_HEADERS}
        src/pc/KeyboardPC.h
        src/pc/serialib.h
        src/pc/SerialPC.h
    )

    set(SOURCES
        ${COMMON_SOURCES}
        src/pc/KeyboardPC.cpp
        src/pc/mainPC.cpp
        src/pc/serialib.cpp
        src/pc/SerialPC.cpp
    )

    # Configuration pour la compilation PC
    add_executable(Camera ${SOURCES} ${HEADERS})
    add_definitions(-DPC_BUILD)

elseif(ARDUINO_BUILD)
    # Configuration pour la compilation Arduino
	# Declaration des fichiers utilisé par l'arduino
    set(SOURCES
        ${COMMON_SOURCES}
        src/arduino/Arduino.cpp
        src/arduino/KeyboardArduino.cpp
        src/arduino/SerialArduino.cpp)

    set(HEADERS
        ${COMMON_HEADERS}
        src/arduino/KeyboardArduino.h
        src/arduino/SerialArduino.h)

    register_hardware_platform(${ARDUINO_SDK_PATH}/hardware/arduino/avr)

    set(mega.build.mcu atmega2560)

    generate_arduino_firmware(
        Camera
        SRCS ${SOURCES}
        HDRS ${HEADERS}
        BOARD mega
        PORT COM13
        SERIAL -b 9600 -l)
endif()
#PORT /dev/ttyACM0 pour linux